#include<iostream>
int main()
{
    int N;
    std::cin >> N;

    int i,factor,factorSum=0;
    for( i=1 ; i<N ; i++)
    {
        if( N%i == 0 )
        {
            factor = i;
            factorSum += factor;
        }
        //std::cout << factorSum << std::endl;
    }
    //std::cout << factorSum << std::endl;
    if(factorSum > N)
    {
        std::cout << "Abundant" << std::endl;
    }
    else if(factorSum < N)
    {
        std::cout << "Deficient" << std::endl;
    }
    else
    {
        std::cout << "Perfect" << std::endl;
    }
}
