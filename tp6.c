
#include <stdio.h>

float calcularAreaRectangulo (float, float);
float calcularPerimetroRectangulo (float, float);
float calcularDiagonalRectangulo (float, float);
float calcularAreaCirculo (float);
float calcularPerimetroCirculo (float);
void imprimirResultados (int, float, float, float);

int main(void)
{
int fig;
float longi, alt, radio, area, perim, diag=-1;

do
    {printf ("\nIngrese la figura que desea calcular (1: rectángulo, 2: círculo):");
    scanf ("%d", &fig);
    
    if (fig!=1 && fig!=2)
        printf("\nError, el número ingresado no se corresponde con ninguna opción");
}while (fig!=1 && fig!=2);


if(fig==1){
    printf("\nOpción de rectángulo seleccionada.");
    
    printf("\nIngrese la longitud del rectángulo:");
        scanf ("%f", &longi);
    printf("\nIngrese la altura del rectángulo:");
        scanf ("%f", &alt);
        
    area=calcularAreaRectangulo (longi, alt);
    perim=calcularPerimetroRectangulo (longi, alt);
    diag=calcularDiagonalRectangulo (longi, alt);
} 


else {
    printf("\nOpción de círculo seleccionada.");
    
    printf("\nIngrese el radio del círculo:");
        scanf ("%f", &radio);
        
    area=calcularAreaCirculo (radio);
    perim=calcularPerimetroCirculo (radio);   
}

imprimirResultados (fig, area, perim, diag);
    

    return 0;
}

float calcularAreaRectangulo (float longi, float alt){
    return longi*alt;
}

float calcularPerimetroRectangulo (float longi, float alt){
    return longi*2+alt*2;
}

float calcularDiagonalRectangulo (float longi, float alt){
    return longi*longi+alt*alt;
}

float calcularAreaCirculo (float radio){
    return 3.14159*radio*radio;
}

float calcularPerimetroCirculo (float radio){
    return 2*3.14159*radio;
}

void imprimirResultados (int fig, float area, float perim, float diag){
    printf("\nEl área del %s es %.2f", fig==1?"rectángulo":"círculo", area);
    printf("\nEl perímetro del %s es %.2f", fig==1?"rectángulo":"círculo", perim);
    
    if(diag>0)
        printf("\nLa diagonal del rectángulo es la raiz cuadrada de %.2f", diag);
    
    return ;
    
}

