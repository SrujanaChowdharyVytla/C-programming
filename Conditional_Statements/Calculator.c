// write a C program to calculate sum of two numbers if the user enters "+" , difference of two numbers if the user enters "-" , product of two numbers if user enters "*", quotient of two numbers if the user enter "/" 
#include<stdio.h>
int main () {
float number1,number2;
char operator;
printf("enter the number1:");
scanf("%f" , & number1);
printf("enter the number2:");
scanf("%f", & number2);
printf("enter operator:");
scanf("\n%c", & operator);
if (operator=='+'){
printf("sum%f" , number1, number2);
}
else if (operator=='-'){
printf("difference%f" , number1, number2);
}
else {
printf("please enter the valid input");
}
return 0;
}
