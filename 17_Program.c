//Program to count numbers of digits in an integer
#include<stdio.h>
void main(){
int n,count=0;
printf("Enter an integer:");
scanf("%d",&n);
while(n!=0){
    n/=10;
    count++;
}
printf("Number of digits: %d",count);
}