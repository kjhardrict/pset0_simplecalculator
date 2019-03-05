#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	
	char operator;
	double first_num, second_num;
	
	scanf("%lf %c %lf", &first_num, &operator, &second_num);
	
	switch(operator)
	{
		case '+':
			printf("%.3lf", first_num + second_num);
			break;
			
		case '-':
			printf("%.3lf", first_num - second_num);
			break;
			
		case '/':
			printf("%.3lf", first_num/second_num);
			break;	
			
		case '*':
			printf("%.3lf", first_num * second_num);
			break;
			
		case 'x':
			printf("%.3lf", first_num * second_num);
			break;
			
		case 'X':
			printf("%.3lf", first_num + second_num);
			break;
			
		default: 
			printf("Error! Please enter a correct operator.");
	}
	
	return 0;
}
