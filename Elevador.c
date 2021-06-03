#include <stdio.h>

int main(void) 
{
  int n,c,i,s,e,soma=0,flag=0;
  //c = capacidade, n = num de leituras
  scanf("%d%d",&n,&c);
  for(i = 0; i < n; i++)
  {
    scanf("%d",&s);
    soma = soma - s;
    scanf("%d",&e);
    soma = soma + e;
//    printf("soma %d: %d\n",i,soma);
    if(soma > c)
    flag = 1;
  }
  if(flag == 1)
    printf("S\n");
  else
    printf("N\n");
  
  return 0;
}