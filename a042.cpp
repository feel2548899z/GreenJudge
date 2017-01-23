#include <iostream>
#include <math.h>
int main(){
	int N;
	std::cin >> N;
	
	int p = pow(13,N);
	int digit = log(p) + 1;

	int ndigit;
	for(int i=0;i<digit-2;i++)
	{
		ndigit = p%100;
		ndigit = ndigit/10;
	}
	std::cout << ndigit <<std::endl;
}