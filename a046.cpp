#include<iostream>
int main()
{
    int W,H;
    std::cin >> W >> H ;
    int i,j;
    for( i=0 ; i<H ; i++ )
    {
        for( j=0 ; j<W ; j++ )
        {
            std::cout << "#" ;
        }
        std::cout << std::endl;
    }
}
