#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

	int num_consumidor = 0, qnt_consumido = 0, maiorconsumo = 0, menorconsumo = 0, cod_res = 0, cod_ind = 0, cod_com = 0, i = 0; 
	float preco_consumo = 0, totalpagar = 0, media = 0, somaqnt_consumido = 0; 
	char cod_tipo_consumidor[20];

		scanf("%d",&num_consumidor);
		scanf("%f",&preco_consumo);
		scanf("%d",&qnt_consumido);
		scanf("%s",cod_tipo_consumidor);

	while( num_consumidor != 0){

		totalpagar = qnt_consumido * preco_consumo;

			printf("NUMERO = %d\n",num_consumidor);
			printf("TOTAL A PAGAR = %.2f\n",totalpagar);

			if (qnt_consumido > maiorconsumo){
				menorconsumo = maiorconsumo;
				maiorconsumo = qnt_consumido;

			}

				else{
					maiorconsumo = maiorconsumo;
					menorconsumo = qnt_consumido;

				}

			if (menorconsumo == 0){
				menorconsumo = maiorconsumo;
			}

			if (strcmp(cod_tipo_consumidor,"RESIDENCIAL") == 0){
				cod_res += qnt_consumido;
			}

				else if (strcmp(cod_tipo_consumidor,"COMERCIAL") == 0){
					cod_com += qnt_consumido;
				}

					else if (strcmp(cod_tipo_consumidor,"INDUSTRIAL") == 0){
						cod_ind += qnt_consumido;
					}
		i++;
		somaqnt_consumido += qnt_consumido;		
		media = (float)somaqnt_consumido / i;

		scanf("%d",&num_consumidor);
		scanf("%f",&preco_consumo);
		scanf("%d",&qnt_consumido);
		scanf("%s",cod_tipo_consumidor);

	}
		printf("MAIOR CONSUMO = %d\n",maiorconsumo);
		printf("MENOR CONSUMO = %d\n",menorconsumo);
		printf("CONSUMIDOR RESIDENCIAL = %d\n",cod_res);
		printf("CONSUMIDOR COMERCIAL = %d\n",cod_com);
		printf("CONSUMIDOR INDUSTRIAL = %d\n",cod_ind);
		printf("MEDIA = %.2f\n",media);

		return 0;
}
