//WAP to calculate income tax paid by an employee 
#include<stdio.h>

    int main(){
    int income;
    float tax;
    printf("Enter your income:");
    scanf("%d",&income);

    if(income<=250000){
        printf("You don't have to pay any tax as your income is below 2.5 lakh");
    }
    if(income>250000 && income<=500000) {
        tax= tax + 0.05 * (income - 250000);
    }
    if(income>500000 && income<=1000000){
        tax=tax+ 0.20 * (income - 500000);
    }
    if(income>1000000){
         tax=tax+ 0.30 * (income - 1000000);
    }
    printf(" Tax on your income is:%f",tax);
return 0;
}
