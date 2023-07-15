#include <iostream>

using namespace std;

void handing(int n){
    if (n == 0)
        throw invalid_argument("Helooo");
    if (n == 1)
        throw runtime_error("AAAAAAA");
    if (n == 2)
        throw 20;
    if (n == 3)
        throw 30;
}

int main()
{
    try{
        //handing(0);
        //handing(1);
        //handing(2);
        handing(3);
    }
    catch(invalid_argument &a){
        cout << a.what() << "\n";
    }
    catch(runtime_error &b){
        cout << b.what() << "\n";
    }
    catch (int &error_code){
        cout << error_code;
    }
    catch(...){
        cout << "hummm" << "\n";
    }

}
