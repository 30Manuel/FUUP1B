#include<stdio.h>//libreria deE/S
int Kilos;
int Ropa;
int main()
{//inicio
printf("Lavadora luna\n");
printf("ingresa la cantidad de ropa a lavar\n");
scanf("%d",&Kilos);
if(Kilos>=0 && Kilos<=20)
{
	if(Kilos>=0 && Kilos<=10)
	{
		printf("el nivel de agua es el minimo\n");
	}
	else
	{
		if(Kilos>=11 && Kilos<=15)
		{
			printf("el nivel de agua es normal\n");
		}
		else
		{
			if(Kilos>=16 && Kilos<=20)
			{
				printf("el nivel de agua es el maximo\n");
			}
		}
	}
	printf("ingresa el tipo de ropa a lavar\ndelicada(1)\nnormal(2)\nmuy sucia(3)\n");
	scanf("%d",&Ropa);
	if(Ropa>=1 && Ropa<=3)
	{
		if(Ropa<2)
		{
			printf("la ropa es delicada\nel tiempo de lavado es de 5min.");
		}
		else
		{
			if(Ropa<3)
			{
				printf("la ropa es normal\nel tiempo de lavado es de 10min.");
			}
			else
			if(Ropa>2)
			{
				printf("la ropa esta muy sucia\nel tiempo de lavado es de 20min.");
			}
		}
	}
	else
	{
		printf("este tipo de ropa no existe");
	}
}
else
{
	printf("no se puede lavar esta cantidad de ropa");
}
}//fin
