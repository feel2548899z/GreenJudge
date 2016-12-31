#include <iostream>
#include <stdio.h>
int main()
{
    int A,B;
    std::cin >> A >> B;

    if(A>B) printf("%s%d","A ",A-B);
    else if(B>A) printf("%s%d","B ",B-A);
    else if(A==B) printf("%d",0);
    //else{printf("%s","Error");}
}
