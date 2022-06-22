// 21doc, day 1, Shiva
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    char ar[1000];
    scanf("%s",ar);
    int i=0,j=0,l,k=0;
    l=strlen(ar);
    i=48;//ascii value of 0 is 48 and that of 9 is 57
    int f[10]={0,0,0,0,0,0,0,0,0,0}; // frequencies
    
    for(i=48;i<58;i++)// will go till 58 as 57 is the end
    {
        for(j=0;j<l;j++)
        {
            if(ar[j]==i)// check each element's ascii value
            {
                f[k]+=1;// increment frequency if there is a match
            }
        }
        ++k;    
    }
    
    for(i=0;i<10;++i)
    {
        printf("%d ",f[i]);// print values with a space
    }
        
    return 0;
}
