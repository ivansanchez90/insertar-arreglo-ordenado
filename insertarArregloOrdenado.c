#include <stdio.h>
void insertarOrdenadoNuevo(int arreglo[], int nuevoArreglo[], int n, int num);
void mostrarArreglo(int arreglo[],int n);
int main() {
	int arreglo[5]={1,3,6,9,15};
	int nuevoArreglo[6];
	int num;
	printf("Arreglo original: ");
    mostrarArreglo(arreglo, 5);
	printf("Ingrese un numero para agregarlo al arreglo y que se ordene automaticamente:");
	scanf("%d",&num);
	insertarOrdenadoNuevo(arreglo, nuevoArreglo, 5, num);
	mostrarArreglo(nuevoArreglo,6);
	
	
	return 0;
}

void insertarOrdenadoNuevo(int arreglo[], int nuevoArreglo[], int n, int num) {
    int i,j,insertado;
	j=0;
    insertado=0;

    for (i = 0; i < n; i++) {
        if (!insertado && num < arreglo[i]) {
            nuevoArreglo[j++] = num;
            insertado = 1;
        }
        nuevoArreglo[j++] = arreglo[i];
    }

    if (!insertado) {
        nuevoArreglo[j++] = num; 
    }
}
void mostrarArreglo(int arreglo[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}