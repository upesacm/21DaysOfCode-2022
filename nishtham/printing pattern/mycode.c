int main() 
{

    int n, m, i, j;
    scanf("%d", &n);
  	m = n*2-1;
      for(i=0; i<m; i++)
      {
          for(j=0; j<m; j++)
          {
              int a = i<j?i:j;
              a = a < m-i ? a : m-i-1;
              a = a < m-j-1 ? a : m-j-1;
              printf("%d ", n-a);
          }
          printf("\n");
      }
    return 0;
}
