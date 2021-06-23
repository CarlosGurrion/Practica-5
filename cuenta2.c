#include <stdio.h>
#include <stdlib.h>
struct productos{
	char *p;
	int x;
	int precio;
	int alm;
};
struct productos uno={"[1]1Kg de huervo",5,35},dos={"[2]Garrafon ",10,19},tres={"[3]Bolsa de papas ",20,15},cuatro={"[4]Botella de coca cola",5,15};
struct productos cinco= {"[5]1kg de tortillas ",10,10},seis={"[6]Lata de atun",10,12},siete={"[7]Galletas",12,10},ocho={"[8]1kg de frijoles",10,10};
struct productos nueve={"[9]encendedor",10,15},diez={"[10]platos de unicel",15,7};
int cont;
void cuenta(){
int i;
if(top==-1)
{
printf("\n No hay nada ");
}
else
{
printf("\nCuenta\n");
for(i=top;i>=0;--i){
	if(stack1[i]==1){
		printf("\n\nUsted tiene %d kilos de huevo y son %c%d",stack[i],36,stack[i]*uno.precio);
		acum+=uno.precio*stack[i];
	}
	if(stack1[i]==2){
		printf("\n\nUsted tiene %d garafone(s) y son %c%d",stack[i],36,stack[i]*dos.precio);
		acum+=stack[i]*dos.precio;
}if(stack1[i]==3){
		printf("\n\nUsted tiene %d bolsa(s) de papas y son %c%d",stack[i],36,stack[i]*tres.precio);
		acum+=stack[i]*tres.precio;
	}if(stack1[i]==4){
		printf("\n\nUsted tiene %d botella(s) de coca cola y son %c%d",stack[i],36,stack[i]*cuatro.precio);
		acum+=stack[i]*cuatro.precio;
	}if(stack1[i]==5){
		printf("\n\nUsted tiene %d kilo(s) de tortilla y son %c%d",stack[i],36,stack[i]*cinco.precio);
		acum+=stack[i]*cinco.precio;
}	if(stack1[i]==6){
		printf("\n\nUsted tiene %d lata(s) de atun y son %c%d",stack[i],36,stack[i]*seis.precio);
		acum+=stack[i]*seis.precio;
}	
	if(stack1[i]==7){
		printf("\n\nUsted tiene %d Galleta(s) y son %c%d",stack[i],36,stack[i]*siete.precio);
		acum+=stack[i]*siete.precio;
}
if(stack1[i]==8){
		printf("\n\nUsted tiene %d kilo(s) de frijoles y son %c%d",stack[i],36,stack[i]*ocho.precio);
		acum+=stack[i]*ocho.precio;
}		
if(stack1[i]==9){
		printf("\n\nUsted tiene %d Encededore(s) y son %c%d",stack[i],36,stack[i]*nueve.precio);
		acum+=stack[i]*nueve.precio;
}	
if(stack1[i]==10){
		printf("\n\nUsted tiene %d Plato(s) de unicel y son %c%d",stack[i],36,stack[i]*diez.precio);
		acum+=stack[i]*diez.precio;
}	
}
printf("\n\n\tSu cuenta seria %c%d",36,acum);
}
}
