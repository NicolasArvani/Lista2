#include <stdio.h>
#include <math.h>

int main()
{   
    //  12.89 
    //m = qtd de multas|v = qtd de veiculos
    int v,m=0,i;
    double arrecadado=0;

    do
    {
      scanf("%d",&v);
      if(v == 999) break;
      if(v > 2)
      {
        arrecadado += 12.89 * (v - 2);
        m++;
      }
    }while(v != 999);
    printf("%.2lf\n%d\n",arrecadado,m);
    return 0;
}