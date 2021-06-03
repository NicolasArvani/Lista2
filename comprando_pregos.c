#include <stdio.h>
#include <math.h>

int main()
{   
    // 12 = $7.89
    //soma = soma de pregos
    int pregos, sobra;
    double qtd, valor,soma = 0;

    do
    {
      scanf("%d",&pregos);
      if(pregos % 2 != 0)
        break;
      soma += pregos;
    }while(pregos % 2 == 0);

    // printf("%.0lf\n",soma);

    qtd = ceil(soma / 12);
    printf("%.2lf\n",qtd*7.89);
    printf("%.0lf\n",(qtd*12)-soma);

    return 0;
}