/*
Cho 1 xau S. vd: 1*2+3*4
Tinh toan gia tri cua xau s.
So ket qua nam trong pham vi so nguyen 64 bit.
Tham khao them: https://vnoi.info/wiki/algo/data-structures/Stack.md#:~:text=x%E1%BB%AD%20l%C3%BD%20x%C3%A2u-,B%C3%A0i%20to%C3%A1n%201,-Cho%20x%C3%A2u
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> num1;
vector<char> op1;

void process_op(){
    int l = num1.back(); num1.pop_back();
    int r = num1.back(); num1.pop_back();
    int c;
    if (op1.back() == '+') c = l + r;
    if (op1.back() == '-') c = l - r;
    if (op1.back() == '*') c = l * r;
    if (op1.back() == '/') c = r / l;
    num1.push_back(c);
    op1.pop_back();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s; cin >> s;    
    for (int i = 0; i < s.size(); i++){
        if (isdigit(s[i])){
            int num = 0;
            while (isdigit(s[i])){
                num = num * 10 + s[i] - '0';
                i++;
            }
            num1.push_back(num);
            i--;
        }
        else {
            if (s[i] == '*' || s[i] == '/'){
                op1.push_back(s[i]);
                i++;
                int num = 0;
                while (isdigit(s[i])){
                    num = num * 10 + s[i] - '0';
                    i++;
                }
                num1.push_back(num);
                i--;                
                process_op();
            }
            else {
                op1.push_back(s[i]);
            }
        }
    }
    while (!op1.empty()){
        process_op();
    }
    cout << num1.back();
}