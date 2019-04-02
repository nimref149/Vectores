#include <stdio.h>
#include <stdlib.h>
#define T 5
#include "vectores.h"
/*
int main()
{
   int numeros[5];
   int i;

   // el i tiene q empesar en 0



  for (i=0; i<5 ; i++){
   printf("Ingrese un numero: ");
   scanf("%d",&numeros[i]);

   }

    for(i=0; i<5 ; i++){
   printf("%d",&numeros[i]);
}

}

*/



int main(){
   int numeros[T];
   int indice;
   int valor=4;
   cargarVector(numeros,T);
// mostrarVector(numeros, T);
   mostrarVector(numeros,T);
   int maximo=BuscarMaximo(numeros,T);
   printf("El maximo es %d \n",maximo);

   indice=buscarValor(numeros,T,valor);

   if(indice!=-1)
    {
        printf("El numero %d esta en el array %d\n",valor ,indice);

    }else
    {
        printf("No se a encontrado el valor buscado\n");
    }
   return 0;
   }






//buscar el maximo valor que la funcion devuelva//





/*
#include define T 5

//LA T ES COMO UNA CONSTANTE, PUEDE SER C O CUALQUIER LETRA DE SOLO LECTURA
int main()
{
    int vector[5];
    int i;
    printf("ingrese numero para vector");
    scanf("%d",&vector[4]);
    mostrar(vector[5]);

}

void mostrar(numero)
{

for (i

}
*/









