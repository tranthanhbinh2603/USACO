#include <iostream>

using namespace std;

void print(int s){
    cout << s << "\n";
}

//Namespace have 1 var
namespace n1{
    int a = 100;
}

namespace n2{
    //not int a = 200;
    int b = 400;
    int d = 5000;
}

namespace n3{
    const int c = 1000;
}

//Different from non namespace and namespace
using n2::b;
using namespace n3;

//Paste code in namespace other is visible
namespace n4{
    int cd = 1000000;
    void print_n4(){
        cout << cd << "\n";
    }
}

//Namespace lap
namespace n5{
    namespace n5_1{
        int a5 = -1000;
    }
    namespace n5_2{
        int a5_2 = -1000000;
    }
}

int main()
{
    print(n1::a);
    print(b);
    print(n2::d);
    using n2::d;
    print(d);
    print(n3::c);
    print(c);
    n4::print_n4();
    print(n5::n5_1::a5);
    print(n5::n5_2::a5_2);

}
