#include<cstdlib>
#include<iostream>
#include<algorithm>
//#include"stdafx.h"
using namespace std;

int rotcut(int R[], int N)
{
    int r[N];
    r[0] = 0;
    for (int j = 1; j <= N; j++)
    {
        int q = -1000;
        for (int i = 1; i <= j; i++)
        {
            q = max(q, R[i] + r[j - i]);//�qi=1�}�l�N���U�Ӫ��̤j�Ȭ��� 

            r[j] = q;
        }
    }
    return r[N];

}
int count(int C[], int N)
{
    int r[N],s[N];
    
    r[0] = 0;
    s[1] = 1;
    for (int j = 1; j <= N; j++)
    {
        int q = -1000;
        for (int i = 1; i <= j; i++)
        {
            q = max(q, C[i] + r[j - i]);
            r[j] = q;//����W�����A���@���O���U�� 
        }
        for (int i = 1; i < j / 2 + 1; i++)
        {

            if (r[j] == r[i] + r[j - i])//�p�G������ӥi�H�զ� 
            {
                s[j] = s[i] + s[j - i];//s[]�N�����զ����M�Ppdf�W��s[]���P 
                break;
            }
            else
            {
                s[j] = 1;
            }
        }
    }
    return s[N];

}
int sorting(int S[], int N)
{
    int r[N], s[N];

    r[0] = 0;
    s[0] = 0;
    s[1] = 1;

    for (int j = 1; j <= N; j++)
    {
        int q = -1000;
        for (int i = 1; i <= j; i++)
        {
            q = max(q, S[i] + r[j - i]);
            r[j] = q;
        }
        for (int i = 1; i < j / 2 + 1; i++)
        {

            if (r[j] == r[i] + r[j - i])
            {
                s[j] = s[i] + s[j - i];
                if (j == N)
                {
                    cout << N << " = " << i << " + " << j - i;
                }
                break;
            }
            else
            {
                s[j] = 1;
            }
        }
    }
    if (s[N] == 1)
    {
        cout << N << " = " << N;
    }
    
}

int main()
{
    int k,i;
    cin >> k;
    if (k == 0)
    {
        return 0;
    }
    else
    {
        int *cut;
        cut=new int[k];
        cut[0] = 0;
        for (i = 1; i <= k; i++)
        {
            cin >> cut[i];
        }

        
        
        cout << rotcut(cut, k) << endl << count(cut, k) << endl;
        sorting(cut, k);
        cout<<endl<<"done";
        system("pause");
        delete[] cut;
    }
}