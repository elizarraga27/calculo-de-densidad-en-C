/* densidad promedio.c*/
#include<stdio.h>                                                                       
main()
{
float densidades[5],total,promedio;
int i;
float soluto,solvente;
i=0;
while(i < 5)
{
 	printf("sustancia %d\n",i+1);
	printf("ingrese soluto\n");
	scanf("%f",&soluto);
	printf("ingrese solvente\n");
	scanf("%f",&solvente);
	densidades[i]=soluto/solvente;
	i ++;
}
	printf("densidades de las sustancias\n");
	for(i = 0; i < 5; i ++)
	{
		printf("\n%fgr/1ts:\n",densidades[i]);
		total = total + densidades[i];
	}
		printf("\n promedio total de las 5 sustancias\n");
		promedio = total/5.0;
		printf("\n %f\n",promedio);
    }
