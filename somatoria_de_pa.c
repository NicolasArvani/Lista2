#include <stdio.h>

int main(void) 
{
  int r, n, soma=0,i;
  scanf("%d%d",&r,&n);
  for(i = 1; i <= n; i += r)
  {
    soma += i;
  }
  printf("A somatoria da PA eh: %d\n",soma);

  return 0;
}