#include <iostream>

int main()
{
    int N,A,B,i;

    std::cin >> N;

    for(i=1;i<=N;i++){
        std::cin >> A >> B;
        if(A>B)std::cout << "Case " << i << ":" << " A " << A-B << std::endl;
        else if(B>A)std::cout << "Case " << i << ":" << " B " << B-A << std::endl;
        else{ std::cout << "Case " << i << ":" << " 0" << std::endl;}
    }
}
