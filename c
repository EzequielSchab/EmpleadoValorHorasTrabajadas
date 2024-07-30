#include <stdio.h>
#include <stdlib.h>
// Importo la libreria para usar caracteres del español
#include <locale.h>
//Definir constantes
#define VHMINIMO 100
#define CHMINIMO 8


int main()
{
    //Defino el conjunto  de caracteres del español
    setlocale(LC_ALL, "spanish");
    //Defino las variables
    int vh, ch, sdo, emp = 0;
    //Ingreso los datos
    printf("INGRESE EL CÓDIGO DE EMPLEADO: ");
    scanf("%d",&emp);
    printf("INGRESE EL VALOR DE HORA: ");
    scanf("%d",&vh);
    printf("INGRESE CANTIDAD DE HORAS TRABAJADAS: ");
    scanf("%d",&ch);
    //Verifico el ingreso
    if(vh<=0){
        printf("INGRESÓ CERO o MENOS COMO VALOR HORA, SE TOMARÁ EL VALOR  MÍNIMO ESTABLECIDO DE $%d\n",VHMINIMO);
        vh = VHMINIMO;
    }
    if(ch<=0){
        printf("INGRESÓ CERO o MENOS COMO CANTIDAD DE HORAS, SE TOMARÁ EL VALOR  MÍNIMO ESTABLECIDO DE $%d\n",CHMINIMO);
        ch = CHMINIMO;
    }
    //Calculo el sueldo
    sdo = vh * ch;
    //Imprimo el sueldo
    printf("EL SUELDO CALCULADO PARA EL EMPLEADO %d POR %d HORAS A $%d C/HORA ES DE $%d...!\n",emp,ch,vh,sdo);
    return 0;
}
