// 21doc, day 7, Shiva
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int x;
    for(i=0;i<num/2;i++)
    {
        x=arr[i];
        arr[i]=arr[num-i-1]; // basically i have put what is supposed to be the first element of first array as the last element of the other. 
        arr[num-i-1]=x; // as i will change index within array will also change
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
