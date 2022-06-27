//WAP to calculate the factorial of a given number using while loop
#include<stdio.h>

    int main(){
    int num,fact=1;
    //Accepting the input from the user
    printf("Enter the number whose factorial you want to calculate:");
    scanf("%d",&num);

 while(num>=1){       //Using while loop
        fact*= num;
        num--;
    }
    printf("So the factorial of a given number is :%d",fact);
return 0;
}
