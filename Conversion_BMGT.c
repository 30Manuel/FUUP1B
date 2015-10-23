#include<stdio.h>//Libreria de E/S
/* 
*/
float resultado;
float A;
float K;
float M;
float G;
float T;
float main() 
{
 //Conversiones a K,M,G,T
    printf("que deseas convertir,");
 scanf("%f,A");
 printf("A");
 printf("K");	
 printf("M");	
 printf("G");	
 printf("T");	
A=A/1024;
K=A*1024;
M=A*1024*1024*1024*8;
G=A/1024;
T=A*1024/1024;	
  printf("Conversiones a A es:%f,\n");
  printf("Conversiones a k es:%f,\n");
  printf("Conversiones a M es:%f,\n");
  printf("Conversiones a G es:%f,\n");
  printf("Conversiones a T es:%f,\n");	
}//Fin
