#include<stdio.h>
#include<iostream>
int main(void){
	int A,B,answer;
	char op;

	std::cin >> A >> op >> B;
   // op = getch();

	if(op == '+'){
		answer = A+B;
	}
	else if(op == '-'){
		answer = A-B;
	}
	else if(op == '*'){
		answer = A*B;
	}
	else{
		std::cout << "You have the wrong input." ;
	}
	std::cout << answer << std::endl ;
}
