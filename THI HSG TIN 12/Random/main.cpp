#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    while (true){
        int mi {0}, ma{50000};
        int res = rand() % (ma - mi + 1) + ma;
        //Check here
    }
}
