#include<iostream>

int main(){

    int N;
    int P;
    int M; //表示買十送一的優惠
    std::cin >> N ;
    M = N/10 ;
    if(N<=10){
        P = N*100;
    }
    else if(N%10 == 0){
        P = (N-N/10+1)*100;
    }
    else if(N/10 > N%10){
        P = (N-N/10+1)*100;
    }
    else{ //(N/10 <= N%10)
        P = (N-N/10)*100;
    }
    std::cout << P;
}
