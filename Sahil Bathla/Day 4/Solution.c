//WAP to find grade of a student given his marks based on below:
#include<stdio.h>

    int main(){
        int marks;
        printf("Enter the marks between 0 to 100:");
        scanf("%d", &marks);

        if(marks>100){
            printf("Enter marks between 0 to 100");
        }
        else{
            switch(marks/10){
                //Marks between 90-100
                case 10:
                case 9: 
                       printf("Your grade is A\n");
                       break;
                case 8:
                       //Marks between 80-89
                       printf("Your grade is B\n");
                       break;
                case 7:
                       //Marks between 70-80
                       printf("Your grade is C\n"); 
                       break; 
                case 6: 
                       //Marks between 60-70
                       printf("Your grade is D\n");
                       break;
                case 5: 
                       //Marks between 50-60
                       printf("Your grade is E\n");
                       break;
                default:
                        //Marks less than 50
                        printf("\n Your grade is F & you're Failed\n");
                }   
                 
        }
return 0;
}
