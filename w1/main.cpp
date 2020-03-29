#include <iostream>
#include <math.h>
#include "myFirstClass.hpp"

// Namespace to avoid typing std::cout each time
using namespace std;

int x = 1;
float y = 10.5;
double z = 10.237489002137489147;
std::string heyed = "Hey there";

bool what = false;

myFirstClass coolName;

int myfunc(float yeah, int noh){
    std::cout << "this is myFunc" << yeah * noh << "\n";
    return 0;
}

int myArray[10] = {0,1,2,3,4,5,6,7,8,9};

int main(int argc, const char * argv[]){
    std::cout << heyed << "\n";

    for (int i = 0; i < 10; i++){
        std::cout << myArray[i] << "\n";
    }

    myfunc(3.14159,2);

    if (what){
        cout << "what?" << "\n";
    }

    cout << "Hello, World!\n" << x<< " " << y << "\n";

    coolName.hiThere = 49124.4;

    cout << coolName.hiThere << "\n";
    cout << coolName.myOtherFunc(32.4, 123123.12) << "\n";

    return 0;
}