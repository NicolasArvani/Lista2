#include <stdio.h>

int main(void) 
{
  int x,y,i,soma=0,aux;
  scanf("%d%d",&x,&y);
  if(x < y)
  {
    aux = x;
    x = y;
    y = aux;
  }
  for(i = 0; i < x; i++)
  {
    soma += y;
  }
  printf("%d\n",soma);
  return 0;
}