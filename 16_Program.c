//Program to print half pyramid using *
#include<stdio.h>
void main(){
int i,j,numofRows=4;
for(i=0;i<numofRows;i++){
    for(j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
}
