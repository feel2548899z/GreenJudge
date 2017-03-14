#include<iostream>
#include<math.h>
int main()
{
    int N;
    std::cin >> N ;

    int i,factor,factorSum=0;
    for( i=1 ; i<=N ; i++)
    {
        if( N%i == 0 )
        {

            factor = i;
            if(factor%2==0||
               factor%3==0||
               factor%5==0||
               factor%7==0||
               factor%11==0||)
            factorSum += factor;

            //std::cout << factor << std::endl;
        }
    }
    if(factorSum == N+1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

}
