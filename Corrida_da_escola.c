#include <stdio.h>

int main(void) 
{
  //n = competidores, m = num de voltas

  long long int n,m,qtdn,qtdm,t,soma,menor,vencedor;
  scanf("%lld%lld",&n,&m);
  for(qtdn = 1; qtdn <= n; qtdn++)
  {
//    printf("menor: %lld\n",menor);
    soma = 0;

    for(qtdm = 1; qtdm <= m; qtdm++)
    {
      scanf("%lld",&t);
      soma += t;
    }

//    printf("Soma do n%lld : %lld\n",qtdn,soma);

    if(qtdn == 1 || menor > soma)
    {
      menor = soma;
      vencedor = qtdn;
//      printf("%lld eh menor\n",qtdn);
    }
  }
  printf("%lld\n",vencedor);

  return 0;
}