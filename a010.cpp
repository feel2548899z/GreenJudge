#include<iostream>

int main(){

    int littleGreen;
    int bigGreen;
    int blue,purple;
    int purple10,purple1;
    std::cin >> littleGreen ;

    bigGreen = littleGreen + 3;
    blue = littleGreen*2 - 5;
    purple10 = blue/10*10;
    purple1 = bigGreen%10;
    purple = purple10 + purple1;

    std::cout << purple;
}

