#include <iostream>

int main(){

	int N;
	std::cin >> N;
	int result = N;
	int remain;
	int answer = N;
	//int result2,remain2;

	for(int i=0 ; ; i++)
	{
		remain = result%5;
		result = result/5;
		answer += result;

		
		if(remain != 0){
		result = (result + remain) / 5;
		//remain = (result + remain) % 5;
		answer += result;
		std::cout << answer << std::endl;
		break;
		}
		
		if(  result == 1 )
		{
		std::cout << answer << std::endl;
		break;
		}
	
		else continue; 
		
		
	}
}