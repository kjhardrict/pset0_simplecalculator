#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void append(char* s, char c)
//{
//	int len = strlen(s);
//	s[len] = c;
//	s[len+1] = '\0';
//	}
//
//	
//double answer(char* input)
//{
//	int i;
//	char num_1[10];
//	char num_2[10];
//	char operator[100];
//	int first_num_done = 0;
//	float ans;
//	
//	for(i = 0; i< strlen(input); i++)
//	printf("\n The input for iteration %i is: %c", i, input[i]);
//	{
//		if(strncmp(&input[i], "c",1) == 0 || strncmp(&input[i], "a",1) == 0 || 
//		strncmp(&input[i], "l",1) == 0 || strncmp(&input[i], " ",1) == 0)
//		{
//			
//		}
//		else 
//		
//		{
//			if(first_num_done == 0 && strncmp(&input[i], "*",1) != 0 && strncmp(&input[i], "/",1) != 0 
//			&& strncmp(&input[i], "+",1) != 0 && strncmp(&input[i], "x",1) != 0 
//			&& strncmp(&input[i], "X",1) != 0 && strncmp(&input[i], " ",1) != 0
//			&& strncmp(&input[i], "-",1) != 0)
//			{
//				append(num_1, input[i]);
//			}
//			
//			if(strncmp(&input[i], "*",1) == 0 || strncmp(&input[i], "x",1) == 0 ||
//			 strncmp(&input[i], "X",1) == 0)
//			{
//				strcpy(operator, "multiply");
//				first_num_done = 1;
//				i++; 
//			}
//			
//			if(strncmp(&input[i], "/",1) == 0)
//			{
//				strcpy(operator, "divide");
//				first_num_done = 1;
//				i++;
//			} 
//			
//			if(strncmp(&input[i], "+",1) == 0)
//			{
//				strcpy(operator, "add");
//				first_num_done = 1;
//				i++;
//			}
//			
//			if(strncmp(&input[i], "-",1) == 0)
//			{
//				strcpy(operator, "subtract");
//				first_num_done = 1;
//				i++;
//			}
//			
//			if(first_num_done == 1)
//			{
//				append(num_2, input[i]);
//				printf("\n I am appending this number to num_2: %c", input[i]);
//				printf("\n num_2: %s", num_2);
//			}
//			
//			
//		}
//		
//	
//	
//	}
//	printf("\n num_1 is: %s", num_1);
//	printf("\n num_2 is: %s", num_2);
//	float first_num;
//	float second_num;
//	
//	first_num = atof(num_1);
//	second_num = atof(num_2);
//	
//	printf("\n first_num is: %f", first_num);
//	printf("\n second_num is: %f", second_num);
//	printf("\n operator is: %s", operator);
//	
//	if (strcmp(operator, "multiply"))
//		{
//			ans = first_num*second_num;
//		}
//	if (strcmp(operator, "divide"))
//		{
//			ans = first_num/second_num;
//		}	
//	if (strcmp(operator, "add"))
//		{
//			ans = first_num+second_num;
//		}	
//	if (strcmp(operator, "subtract"))
//		{
//			ans = num_1 - num_2;
//		}	
//	
//	return ans;	
//}
//
//int main(int argc, char *argv[]) {
//	char input[10];
//	float result;
//	scanf("%[^\n]%*c", input);
//	result = answer(input);
//	printf("\n Result: %f", result);
//	
//}

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