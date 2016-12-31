#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){

    double x1,y1,x2,y2;
    std::cin >> x1 >> y1 >> x2 >> y2 ;


    double distance;
    distance = sqrt(  pow(x1-x2,2)  +  pow(y1-y2,2) );

    printf("%.3f",distance);
}
