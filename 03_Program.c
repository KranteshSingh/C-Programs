//Write a program to check whether the given number is even or odd.
#include<stdio.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
if(num%2==0)
    printf("Given number is even");
    else
    printf("Given number is odd");
return 0;
}
