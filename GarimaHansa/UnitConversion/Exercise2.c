#include <stdio.h>                  
                                        // Why is it that my function is taking 2 as 
float kmtomile(float val)
{
    return (val * 0.62137);
}

float intom(float val)
{
    return ( val / 63360) ;                     
}

float cmtoin(float val)
{
    return (val / 2.54);
}

float intoft(float val)
{
    return val * 0.0833;
}

float lbtokg(float val)
{
    return (val / 2.2046);
}
int main()
{
    int num;
    printf("Choose the conversion you want to do from the list below\n");
    printf("1. Kms to Miles\n");
    printf("2. Inches to Meters\n");
    printf("3. Cms to Inches\n");
    printf("4. Inches to Foot\n");
    printf("5. Pound to Kgs\n");
    scanf("%d", &num);
    if (num == 1)
    {
        int a;
        printf("Enter your value(in kms):\n");
        scanf("%f", &a);
        printf("%.2fkm in miles is %.2f", a, kmtomile(a));
    }
    else if (num == 2)
    {
        int a;
        printf("Enter your value(in ins):\n");
        scanf("%f", &a);
        printf("%.2fin in meters is %.2f", a, intom(a));
    }
    else if (num == 3)
    {
        int a;
        printf("Enter your value(in cms):\n");
        scanf("%f", &a);
        printf("%.2fcm in inches is %.2f", a, cmtoin(a));
    }
    else if (num == 4)
    {
        int a;
        printf("Enter your value(in inches):\n");
        scanf("%f", &a);
        printf("%.2fin in feet is %.2f", a, intoft(a));
    }
    else if (num == 5)
    {
        int a;
        printf("Enter your value(in lbs):\n");
        scanf("%f", &a);
        printf("%.2flbs in kgs is %.2f", a, lbtokg(a));
    }
    return 0;
}