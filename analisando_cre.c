#include <stdio.h>

int main(void)
{
  int mat,selecionado;
  double cre,menor=999,qtd,soma;

  scanf("%d",&mat);
  while(mat != 999)
  {
    qtd++;
    scanf("%lf",&cre);
    soma += cre;
    if(cre < menor)
    {
      menor = cre;
      selecionado = mat;
    }
    scanf("%d",&mat);
  }
  printf("%d\n%.2lf\n",selecionado, soma / qtd);

  return 0;
}
