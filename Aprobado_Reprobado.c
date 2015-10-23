#include<stdio.h>//Libreria de E/S
/*
*/
int calificacionobtenida;
int main()
{//inicio
  printf("ingresa la calificacion"); 	
  scanf("%d",&calificacionobtenida);
  if(calificacionobtenida>=7)
  {
  	printf("aprobado");
  }	
  else	
  {
  	printf("reprobado");
  }	
	
}//fin
