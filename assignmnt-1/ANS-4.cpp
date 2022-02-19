//Smruti Sucharita Mishra-ETC-2nd year
#include<stdio.h>
int main()
{
	int a,b, choice;
	printf("Enter two numbers");
	scanf("%d %d", &a, &b);
	
	printf("\nInput your choice to make an operation\n");
    printf("\n1 : for Addition");
    printf("\n2 : for Substraction");
    printf("\n3 : for Multiplication");
    printf("\n4 : for Division");
    printf("\n5 : for Modulus");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
	
	printf("\n");
	switch(choice)
	{
		case 1:
			printf("Addition of %d + %d = %d\n", a, b, a + b);
			break;
			
		case 2:
			printf("Subtraction of %d - %d = %d\n", a, b, a - b);
			break;
			
		case 3:
			printf("Multiplication of %d * %d = %d\n", a, b, a * b);
			break;
			
		case 4:
			printf("Division of %d / %d = %d\n", a, b, a / b);
			break;
			
		case 5:
			printf("Modulus of %d % %d = %d\n", a, b, a % b);
			break;
	}
	return 0;
}
