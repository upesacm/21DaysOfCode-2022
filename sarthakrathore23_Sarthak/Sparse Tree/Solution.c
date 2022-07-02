#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int N, Q; 
    char *a1[1000], *a2[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        char s[21];
        scanf("%s", s); 
        a1[i] = malloc(21);
        strcpy(a1[i], s);
    }
    scanf("%d", &Q);
    for (int j = 0; j < Q; j++) 
    {
        int n = 0, result;
        char s[21];
        scanf("%s", s);
        a2[j] = malloc(21);
        strcpy(a2[j], s);
        for (int N_i2 = 0; N_i2 < N; N_i2++) 
        {
            result = strcmp(a2[j], a1[N_i2]);
            if (result == 0) 
            n++;
        }
        printf("%d\n", n);
    }
    
    return 0;
}