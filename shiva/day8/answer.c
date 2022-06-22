// 21doc, day 7, Shiva
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int x;
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    // n is the limit and a,b,c all must be added inidivusally atleast once
  // do backward loop , going from the sum of all and then going towards the i-
  //-ndivisual numbers as they can be added anytime
    if(n==a)
  {
    return a;
  }
  else if(n==b)
  {
    return b;
  }
  else if(n==c)
  {
    return c;
  }
  else
  {
    /*int i;
    for(i=c;i>=a;--i)
    {
    x+=find_nth_term(n-i,a,b,c);*/
    x = find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,     a,b,c);
    }
    //return x;    
  return x;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}