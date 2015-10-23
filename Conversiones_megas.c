#include<stdio.h>//Libreria de E/S
/*
*/
  float A1;
  float resultadoK2;
  float resultadoM3;
  float resultadoG4;
  float resultadoT5;
int main()
{//Inicio
  
  //Progrma que calcula diferentes conversiones
   printf("Ingresa una cantidad cualquiera en Megas:");	
   scanf("%f",&A1);
   resultadoK2=A1*1024;
   resultadoM3=A1*1024*1024;
   resultadoG4=A1/1024;
   resultadoT5=A1/1024/1024;
   printf("Kilobytes es:%f\n",resultadoK2); 
   printf("Megabytes es:%f\n",resultadoM3);
   printf("Gigabytes es:%f\n",resultadoG4);
   printf("Terabytes es:%f\n",resultadoT5);
}//Fin


