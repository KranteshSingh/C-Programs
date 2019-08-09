//Program to find factorial of a given number
#include<stdio.h>
void main(){
int n,i;
unsigned long long factorial=1;
printf("Enter an Integer:");
scanf("%d",&n);
if(n<0)
    printf("Factorial for negative no does not exists");
else{
    for(i=2;i<=n;i++)
        factorial*=i;
    printf("Factorial of %d = %llu",n,factorial);
}

}
