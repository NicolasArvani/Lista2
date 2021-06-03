#include <stdio.h>

int main()
{
    int ano, i, tri;
    double inicial, juros, r, m;
    scanf("%lf%lf%d", &m, &juros, &ano);
    for(tri = ano * 4; tri > 0; tri--)
    {
      r = m * juros;
      m += r;
      printf("Rendimento: %.2lf Montante: %.2lf\n",r,m);
    }

    return 0;
}
