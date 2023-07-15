#include <iostream>
using namespace std;

const int MAX = 105;

int N;                  // Số lượng bạn
int K;                  // Số lượng Kg táo cần mua
int Price[MAX];         // Lưu giá của các gói, Price[i] ứng với giá của gói thứ i
int MinMoney[MAX][MAX]; // MinMoney[i][j]: Số tiền nhỏ nhất cần bỏ ra để mua i Kg táo,
                        // và số gói không quá j
int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);

    int Testcase = 0;
    cin >> Testcase;
    for(int tc = 0; tc < Testcase; tc++)
    {
        cin >> N >> K;
        for(int i = 1; i <= K; i++)
        {
            cin >> Price[i];

            // Khởi tạo số tiền nhỏ nhất cần bỏ ra để mua chính xác i Kg táo,
            // chính là số tiền cần bỏ ra để mua 1 gói 'i' Kg táo.
            for(int j = 1; j <= N; j++)
                MinMoney[i][j] = Price[i];
        }

        // Cập nhật lại mảng MinMoney[] sử dụng quy hoạch động
        for(int i = 2; i <= K; i++)
            for(int x = 2; x <= N; x++)
                for(int j = 1; j < i; j++)
                {
                    if(MinMoney[j][x - 1] < 0 || Price[i - j] < 0) continue;

                    // Khi chưa có giá trị MinMoney[i], thì lượng tiền nhỏ nhất
                    // chính là lượng tiền nhỏ nhất khi đã mua 'j' Kg
                    // và mua thêm 'i-j' Kg
                    int temp = MinMoney[j][x - 1] + Price[i - j];
                    if(MinMoney[i][x] < 0 || temp < MinMoney[i][x])
                        MinMoney[i][x] = temp;
                }
        cout << MinMoney[K][N] << endl;
    }
    return 0;
}