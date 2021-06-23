#include <stdlib.h>
#include <stdio.h>
#include<process.h>
#define MAX 10
int num=0,nom,y;
int top=-1,stack[MAX],stack1[MAX],top1=-1,acum;
void push()
{
if(top==MAX-1)
{
printf("No se puede almacenar ");
}
else
{
nom=y;
top=top+1;
top1=top1+1;
stack[top]=num;
stack1[top]=nom;
}

}
void pop()
{
if(top==-1)
{
printf("\n no se puede quitar mas ");
}
else
{
top=top-1;
}
}


