//Program to make a simple calculator
#include<stdio.h>
void main(){
	char operator;
	double a,b;
	printf("Enter an Arithmetic Operator (+,-,*,/,%):");
	scanf("%c",&operator);
	printf("Enter First Number\n");
	scanf("%lf",&a);
	printf("Enter Second Number\n");
	scanf("%lf",&b);
	switch(operator){
		case '+' :printf("Addition of 1st & Second No. - %lf",a+b);
		break;
		case '-' :printf("Subtraction of 1st & Second No. - %lf",a+b);
		break;
		case '*' :printf("Multiplication of 1st & Second No. - %lf",a+b);
		break;
		case '/' :printf("Division of 1st & Second No. - %lf",a+b);
		break;
		case '%' :printf("Modulo of 1st & Second No. - %lf",a+b);
		break;
		default:printf("ERROR - Please enter valid operator");
	}
}
