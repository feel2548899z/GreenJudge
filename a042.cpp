#include <iostream>
#include <math.h>
int main()
{
	int N;
	std::cin >> N;
	int n;
	long long int p=13,tendigit;
	int i;

	for(i=0;i<N;i++)
	{
		p*=p;
	}
	tendigit = p%100;
	tendigit = tendigit/10;
	std::cout << tendigit << std::endl;
}
