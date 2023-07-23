#include <iostream>

int num1;
int num2;

char ch;

int ans;

int main(){
    std::cout << "Enter a Number" << std::endl;
    std::cin >> num1;

    std::cout << "Enter second Number" << std::endl;
    std::cin >> num2;

    std::cout << "Enter Operation" << std::endl;
    std::cin >> ch;

    if(ch == '+'){
        ans = num1 + num2;
    }
    else if(ch == '-'){
        ans = num1 - num2;
    }
    else if(ch == '*'){
        ans = num1 * num2;
    }
    else if(ch == '/'){
        ans = num1 / num2;
    }
    else{
        std::cout << "Invalid Input" << std::endl;
    }

    std::cout << "The Answer is: " << ans << std::endl;
    return 0;
}