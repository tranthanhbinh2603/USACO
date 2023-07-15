#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0){
        fun(n-1);
        cout << n << endl;
        //fun(n-1);
    }

}

int main()
{
    int n = 5; //Đat debug tai day
    //Co the dung call stack trong codeblock: debug -> debug windows -> call stack
    fun(n);
    return 0;
}
