#include<iostream>
#include "functions.hpp"

int abs_val(int x){
    return 0;
}

int pow(int base, int num){
    int ans = base;
    for (int i = 1; i < num; ++i){
        ans = ans * base;
    }
    return ans;
}

int log(int base, int num){
    int ans = base;
    for (int i = 0; i < num; i++){
        ans = ans / base;
    }
    return ans;
}

int chartoint(char c){
    int ans = (int)c;
    ans = c - 48;
    if (ans > 9 || ans < 0){
        return 0;
    }
    return ans;
}



