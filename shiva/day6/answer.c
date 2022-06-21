// 21doc, day 6, Shiva
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    //char* x=" ";
    int i=0,len=0;
    len = strlen(s);
    char x=' ';
    
        
    while(i<len)
    {
        if( s[i]!=x )
        {
            printf("%c",s[i]);
            ++i;
        }
        else if( s[i]==x )
        {
            printf("\n");
            ++i;
        }
        
    }    
    return 0;
}
