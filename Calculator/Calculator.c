#include <stdio.h>

// For User Input
int num1;
int num2;
char ch;

// UDF
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

//Answer
int ans;

int main(){
    printf("Enter The First Number");
    scanf("%d", &num1);

    printf("Enter The Second Number");
    scanf("%d", &num2);

    printf("Enter The Operation");
    scanf(" %c", &ch);


    //Using If-Else Statements
    if(ch == '+'){
         ans = add(num1, num2);
    }
    else if(ch == '-'){
         ans = subtract(num1, num2);
    }
    else if(ch == '*' || ch == 'x'){
         ans = multiply(num1, num2);
    }
    else if(ch == '/'){
        ans = divide(num1, num2);
    }else{
        printf("Invalid Input");
    }

    printf("The Answer is: %d\n " , ans);
    return 0;
}

int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b){
    return a / b;
}