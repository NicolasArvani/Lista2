#include <stdio.h>

int main()
{
    int n,i,l;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
      for(l = 1; l <= i; l++)
      {
        printf("%d",i);
      }
      printf("\n");
    }
    return 0;
}