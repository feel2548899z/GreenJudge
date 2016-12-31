#include <iostream>

int main()
{
    int N,A,B;
    int j;


    std::cin >> N;
    for(j=0;j<N;j++){
        std::cin >> A >> B;
        if(A>B) std::cout << "A " << A-B << std::endl;
        else if(B>A) std::cout << "B " << B-A << std::endl;
        else std::cout << 0 << std::endl;
    }




}
