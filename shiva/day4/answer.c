// 21doc, day 4, Shiva
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=0,sum=0,x;
    scanf("%d",&n);
    //int *val = (int*)malloc(n*sizeof(int));
    int val[n];
    int i=0;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&val[i]);
    } 

    x=0;
    
    i = 0;
    sum=0;
    while(i<n)
    {
        //x=0;
        //x=val[i];
        sum = sum+val[i];
        ++i;
    }
       
    printf("%d",sum);
    return 0;
}
