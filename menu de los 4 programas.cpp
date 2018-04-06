#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char ch;


do
{
int op,i,numero,factorial=1,suma=0,x,num, pctDescuento;
float a,b,res,importeCompra,descuento;
char ch;
printf("\n\t favor de seleccionar una opcion\n");
printf("\n\t opcion de la suma de los 20 primeros numeros pares 1\n");
printf("\n\t opcion del factorial 2\n");
printf("\n\t opcion de de la piramide 3\n");
printf("\n\t opcion de las bolitas de color 4\n\n\t\t\t");
scanf("%d",&op);
if(op>0 && op<5)

switch(op)

{
case 1:
	do
	{

	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			suma +=i;
		}
	}
	
		
	
	printf("\n la suma de los 20 primeros numeros es: %i",suma);
	 printf ("\nDesea realizar otra elegir otra opción (s/n): ");
    scanf ("%c",&ch);
	
	

}while (ch!='s' && ch!='S');


break;
case 2:
	do
    {
	 

	
	printf("Digite el numero para hallar: ");
	scanf("%i",&numero);
	
	for(i=1;i<=numero;i++)
      {
	  factorial *=i;
	
      }
printf("\n El factorial de numero dado es: %i",factorial);
 printf ("\nDesea realizar otra elegir otra opción (s/n): ");
    scanf ("%c",&ch);


   }while (ch!='s' && ch!='S');
break;
case 3:
	do
   { 

for(x=1;x<6;++x)
    { 
for(i=1;i<=x;i++)
printf("%d%s",(x+i-1)%10, (x-1)?"":"\n"); 
for(i=i+x-3;i>=x;--i) 
printf("%d%s", i%10, (x-i)?"":"\n");
 
    } 
     printf ("\nDesea realizar otra elegir otra opción (s/n): ");
    scanf ("%c",&ch);

 


   }while (ch!='s' && ch!='S');
break;
case 4:
do
{

srand(time(NULL));
num=rand() % 8; // rango de valores
printf ("\n----------------------------------------------------");
switch(num)
    {
case 0:
printf ("\nBolita de color negro");
descuento=10;
break;
case 1: printf ("\nBolita de color verde"); descuento=25;
break;
case 2: printf ("\nBolita de color amarillo"); descuento=50;
break;
case 3: printf ("\nBolita de color azul"); descuento=75;
break;
case 4: printf ("\nBolita de color rojo"); descuento=100;
break;
default:
descuento=0;
printf ("\n Sin descuento");
    }
printf ("\n\nSu descuento es de %f porciento", descuento);
printf ("\n----------------------------------------------------");
printf ("\nImporte total de la compra (sin descuento): $ ");
scanf ("%4.2f", &importeCompra);
descuento = importeCompra * ( 1 - descuento / 100);
printf ("\nSu importe total de compra fue: %4.2f", importeCompra);
printf ("\nEl importe total con el descuento será¡ de: $ %.2f \n\n", descuento);
printf ("\nDesea realizar otra elegir otra opción (s/n): ");
    scanf ("%c",&ch);


}while (ch!='s' && ch!='S');
break;
default:
printf("\n\t OPCION NO VALIDA\n");
}

}while (ch!='s' && ch!='S');
}
