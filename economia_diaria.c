#include <stdio.h>

int main()
{   
    //va = valor dia anterior | vh = valor do dia atual
    //s = dias q cumpriu a meta
    double va, vh, soma;
    int i, s = 0;
    scanf("%lf",&va);
    soma = va;
    for(i = 0; i < 6; i++,va+=0.5)
    {
      scanf("%lf",&vh);
      /* debugging
      printf("va: %.2lf vh: %.2lf\n",va,vh);
      */
      if(vh >= va)
        s++;
      soma += vh;
      va = vh;
    }  
    printf("R$ %.2lf\n%d\n",soma,s);

    return 0;
}