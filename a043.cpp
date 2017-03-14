#include<iostream>

int gcd(int a,int b);

int main()
{
    int A,B;
    std::cin >> A >> B;
    std::cout << gcd(A,B) << std::endl;

}

int gcd(int a,int b)
{
    while(a!=0)
    {
        if(b>a)          //if b < a, change a,b
        {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        else if(b<a)    // b < a
        {
            int temp;
            temp = b;
            b = a;
            a = temp;
        }
        a = a%b;
    }
    return b;
}
