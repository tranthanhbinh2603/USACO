// #include<iostream>
// #include<stack>
// using namespace std;

// typedef long long ll;
// ll n, a[1005];
// stack<ll> s;

// int main() {
//     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     cin >> n;
//     while (n != 0){
//         ll cs = 1; bool check = true;
//         for (ll i = 1; i <= n; i++)
//             cin >> a[i];
//         for (ll i = 1; i <= n; i++){
//             while (!s.empty() && s.top() == cs){
//                 cs++;
//                 s.pop();
//             }
//             if (a[i] == cs)
//                 cs++;
//             else if (!s.empty() && s.top() < a[i]){
//                 check = false;
//                 break;
//             }
//             else 
//                 s.push(a[i]);
//         }
//         if (check) cout << "yes\n"; else cout << "no\n";
//         cin >> n;
//     }
// }

#include <iostream>
using namespace std;

const int MAX = 1005;

int Order[MAX]; // Thứ tự ban đầu của những chiếc xe
int Stack[MAX]; // Biểu diễn ngăn xếp stack, tương ứng với đoạn đường bên cạnh
int St_size;    // Độ dài ngăn xếp
int Check;      // Lưu kết quả

int main()
{
    //freopen("input.txt","r",stdin);
    int N = 0;
    while(true)
    {
        // Nhập đầu vào là số lượng xe
        cin >> N;
        if(N == 0) break;

        for(int i = 0; i < N; i++)
            cin >> Order[i];
        St_size = 0;
        Check = true;

        // Chỉ số xe có thể đi, ban đầu có giá trị 1
        int start = 1;

        // Duyệt từng xe
        for(int i = 0; i < N; i++)
        {
            // Kiểm tra xem nếu đỉnh ngăn xếp có giá trị start thì cho đi
            while(St_size > 0 && Stack[St_size-1] == start)
            {
                St_size--;
                start++;
            }

            // Nếu đầu dãy là start thì cho đi, tăng start lên 1 đơn vị
            if(Order[i] == start) start++;
            else if (St_size > 0 && Stack[St_size-1] < Order[i])
            {
                // Nếu trường hợp này xảy ra thì chắc chắn sẽ không thoả mãn.
                // Vì trường hợp này ta sẽ phải cho điểm ở đầu dãy vào ngăn xếp
                // Mà sau khi cho xong thì tồn tại 1 điểm có giá trị nhỏ hơn
                // (ưu tiên cao hơn)
                // điểm ở đầu ngăn xếp, mà nó lại không thể đi ra được.
                Check = false;
                break;
            }
            else // Cho điểm đầu của dãy vào ngăn xếp.
            {
                Stack[St_size] = Order[i];
                St_size++;
            }
        }

        if(Check) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}