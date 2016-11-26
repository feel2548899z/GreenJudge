#include<iostream>

int main(){

    int M;
    int h, m;
    std::cin >> M;

    h = M/60;
    m = M%60;

    std::cout << h << " " << m ;
}
