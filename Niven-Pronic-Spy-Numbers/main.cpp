#include <iostream>
#include "NumberFunctions.h"

int number;
using namespace std;
int main() {
    std::cout << "Enter a Number" << std::endl;
    std::cin >> number;

   if(Niven(number) || isPronic(number) || isSpy(number) ){
       cout << number << " Is a special number";
   }
    return 0;
}
