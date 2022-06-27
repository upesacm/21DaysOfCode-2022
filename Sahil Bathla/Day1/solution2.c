//WAP to check whether a number is prime or not using loops
#include<stdio.h>

    int main(){
    int num,prime=1;
    //Accepting the input from the user 
    printf("enter the number:");
    scanf("%d",&num);

    //prime number is the number which is divisible by 1 and only itself
    for(int i=2; i<num; i++){
       if(num%i==0){
        prime=0;
        break;
       }
    }
    if(prime==0 && num!=2){         //when num=2 then it will be a prime number
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
return 0;
}
