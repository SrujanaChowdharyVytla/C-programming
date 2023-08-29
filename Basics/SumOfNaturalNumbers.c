// write a C-program to find sum of n natural numbers
#include<stdio.h>
int main () {
int n;
printf("enter the number:");
scanf("%d" , & n);
int sum=n*(n+1)/2;
printf("%d",sum);
return 0;
}
