//
// Created by Deeptanshu on 25-10-2023.
//

#ifndef NIVEN_PRONIC_SPY_NUMBERS_NUMBERFUNCTIONS_H
#define NIVEN_PRONIC_SPY_NUMBERS_NUMBERFUNCTIONS_H

bool Niven(int n) {
    int digit, sum, temp;
    temp = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if (temp % sum == 0) {
        return true;
    }
    return false;
}

bool isPronic(int n){
    int digit, count, product, temp;
    temp = n;
    while(n > 0){
        digit = n % 10;
        product *= digit;
        count++;
        n/= 10;
    }

    if(count == 2 && product == temp){
        return true;
    }

    return false;
}

bool isSpy(int n){
    int digit, sum, prod, temp;
    temp = n;
    while(n > 0){
        digit = n % 10;
        prod *= digit;
        sum += digit;
        n /= 10;
    }

    if(sum + prod == temp){
        return true;
    }
    return false;
}

#endif //NIVEN_PRONIC_SPY_NUMBERS_NUMBERFUNCTIONS_H
