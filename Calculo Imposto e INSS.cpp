#include <stdio.h>

int main()
{ float salario, inss;
  printf("\n Entre com o salario:  ");
  scanf("%f", &salario);
  if (salario<=1100.00) inss= salario*(7.5/100);
    else if (salario<=2203.48) inss= (salario-1100)*(9.0/100)+ 82.5; /* 82.5= (1100*0.075) */
          else if (salario<=3305.22) inss= (salario-2203.48)*(12.0/100)+ 99.3132+82.5; /* 99,3132= (2203.48-1100)*0.09 */
                else if (salario<=6433.57) inss= (salario-3305.22)*(14.0/100)+132.2088+ 99.3132+82.5; /* 132.2088= (3305.22-2203.48)*0.12 */
                      else inss= 437.969+132.2088+ 99.3132+82.5; /*437.969=(6433.57-3305.22)*0.14 */
  printf("\n O valor do Inss e = %.2f para o funcionario com Salario = %.2f",inss,salario);
  return 0;
}
 



