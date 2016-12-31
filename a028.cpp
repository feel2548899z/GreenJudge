#include<iostream>

int main(){
	int N,R; //P(N,R) , N>=R
	std::cin >> N >> R;
	int i=0,value=1,NR;
	for(i=R;i>0;i--){
		NR = N-i+1;
        value*=NR;
	}

	std::cout << value;
}
