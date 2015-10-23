#include<stdio.h>//libreria de E/S
/*Tienda*/
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)refresco $10\n(2)aguas $8\n(3)chicles $3\n(4)bombon $1\n(5)rollo de papel $12\n(6)sabritas $15\n(7)danonino $8\n(8)gomitas $5\n(9)yogurt activia $14\n(10)tostadas $30\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantas refresco quieres?\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d",total);
		break;
	}
	case 2: {
		printf("¿cuantas aguas quieres?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 3: {
		printf ("¿cuantas chicles quiere?\n");
		scanf("%d",&N1);
		total=N1*3;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿cuantos bombon quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿cuantos rollo de papel quiere?\n");
		scanf("%d",&N1);
		total=N1*12;
		printf ("total:%d",total);
		break;
	}
	case 6:{
		printf("cuantas sabritas quiere\n");
		scanf("%d",&N1);
		total=N1*15;
		printf("total:%d",total);
		break;
	}
	case 7:{
		printf("¿cuantas danonino quiere?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 8:{
		printf("¿cuantas gomitas quiere?\n");
		scanf("%d",&N1);
		total=N1*5;
		printf("total:%d",total);
		break;
	}
	case 9:{
		printf("¿cuantos yogurt activia quiere?\n");
		scanf("%d",&N1);
		total=N1*14;
		printf("total:%d",total);
		break;
	}
	case 10:{
		printf("¿cuantas tostadas quiere?\n");
		scanf("%d",&N1);
		total=N1*30;
		printf("total:%d",total);
		break;
	}
	defaul:{
	printf("no hay");
		break;	
}
}
}//fin

