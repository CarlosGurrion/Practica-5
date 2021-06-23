#include <stdio.h>
#include <stdlib.h>

void ventas(){
	printf("ingrese el numero del producto\n");
	scanf("%d",&y);
	if(1<=y && y<=5){
	switch(y){
		case 1:
			printf(" \n Usted escogio 1Kg de huevo \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			uno.x-=num;
			if (uno.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				nom=1;
				push();
				acum=acum+(num*uno.precio);
				uno.alm+=num;
			}
			break;
		case 2:
			printf(" \n Usted escogio el garrafon \n cuantos Garrafones quieres%c\n",63);
			scanf("%d",&num);
			dos.x-=num;
			if (dos.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum+=(num*dos.precio);
				dos.alm+=num;
			}
			break;
		case 3:
			printf(" \n Usted escogio papas \n cuantas papas quieres%c\n",63);
			scanf("%d",&num);
			tres.x-=num;
			if (tres.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
			    push();
				acum=acum+(num*tres.precio);
				tres.alm+=num;
			}
			break;
		case 4:
			printf(" \n Usted escogio coca cola \n cuantas coca colas quieres%c\n",63);
			scanf("%d",&num);
			cuatro.x-=num;
			if (cuatro.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*cuatro.precio);
				cuatro.alm+=num;
			}
			break;
		case 5:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			cinco.x-=num;
			if (cinco.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*cinco.precio);
				cinco.alm+num;
			}
			break;
		case 6:
			printf(" \n Usted escogio Lata de atun \n Cuantas latas quiere%c\n",63);
			scanf("%d",&num);
			seis.x-=num;
			if (seis.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*seis.precio);
				seis.alm+num;
			}
			break;
		case 7:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			siete.x-=num;
			if (siete.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*siete.precio);
				siete.alm+num;
			}
			break;
		case 8:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			ocho.x-=num;
			if (ocho.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*ocho.precio);
				ocho.alm+num;
			}
			break;
		case 9:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			nueve.x-=num;
			if (nueve.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*nueve.precio);
				nueve.alm+num;
			}
			break;
		case 10:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			diez.x-=num;
			if (diez.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				push();
				acum=acum+(num*diez.precio);
				diez.alm+num;
			}
			break;
	}
}else{
		printf("Respuesta no valida");
	}	
}
