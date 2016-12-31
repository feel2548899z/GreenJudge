#include <iostream>

int main()
{
    int N,A,B;
    int j;


    for(j=0;;j++){
        std::cin >> A >> B;
        if(std::cin.fail())break;
        if(A>B) std::cout << "A " << A-B << std::endl;
        else if(B>A) std::cout << "B " << B-A << std::endl;
        else if(A!=0&&A==B)std::cout << 0 << std::endl;


    }




}

