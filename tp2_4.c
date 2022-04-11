#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char tipo_cpu[10];
}; typedef struct compu pc;

void lista(pc *compu);
void pcvieja(pc *compu);
void pcvelocidad(pc *compu);

int main(){

    srand(time(NULL));
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    pc maquinas[5];
    int k=0,marca;
do
{
    puts("Ingrese las caracteristicas de la pc");
    puts("Ingrese la velocidad de procesamiento (entre 1 y 3)");
    scanf("%d",&maquinas[k].velocidad);
    puts("Ingrese el anio (entre 2000 y 2017)");
    scanf("%d",&maquinas[k].anio);
    puts("Ingrese la cantidad de nucleos (entre 1 y 4)");
    scanf("%d",&maquinas[k].cantidad);
    puts("Elija la marca");
    puts("[0]Intel [1]AMD [2]Celeron [3]Athlon [4]Core [5]Pentium");
    scanf("%d",&marca);
    strcpy(maquinas[k].tipo_cpu,tipos[marca]);
    k++;
} while (k < 5);
    lista(maquinas);
    pcvieja(maquinas);
    pcvelocidad(maquinas);
    fflush(stdin);
    getchar();
}

void lista(pc *compu) {
    for (int i = 0; i < 5; i++)
    {
        puts("---------------------------------------");
        printf("Velocidad: %d Gherz\n",compu[i].velocidad);
        printf("Anio: %d\n",compu[i].anio);
        printf("Cantidad de nucleos: %d\n",compu[i].cantidad);
        printf("Marca: %s\n",compu[i].tipo_cpu);
        puts("---------------------------------------");
    }
}

void pcvieja(pc *compu){
    int indice=0, edad=2017;
    for (int i = 0; i < 5; i++)
    {
        if (compu[i].anio < edad)
        {
            indice = i;
            edad=compu[i].anio;
        }
    }
    puts("La pc mas vieja es:");
    puts("---------------------------------------");
    printf("Velocidad: %d Gherz\n",compu[indice].velocidad);
    printf("Anio: %d\n",compu[indice].anio);
    printf("Cantidad de nucleos: %d\n",compu[indice].cantidad);
    printf("Marca: %s\n",compu[indice].tipo_cpu);
    puts("---------------------------------------");
}

void pcvelocidad(pc *compu){
    int indice=0,velocidad=0;
    for (int i = 0; i < 5; i++)
    {
        if (compu[i].velocidad > velocidad)
        {
            indice = i;
            velocidad = compu[i].velocidad;
        }
    }
    puts("La pc mas rapida es:");
    puts("---------------------------------------");
    printf("Velocidad: %d Gherz\n",compu[indice].velocidad);
    printf("Anio: %d\n",compu[indice].anio);
    printf("Cantidad de nucleos: %d\n",compu[indice].cantidad);
    printf("Marca: %s\n",compu[indice].tipo_cpu);
    puts("---------------------------------------");
}
