#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

    int a;
    int b;
    std::cin >> a >> b;

    int digit = 0;

    digit = b * log10(a) + 1 ;

    //std::cout << log10(a) << std::endl;
    std::cout << digit;

}
