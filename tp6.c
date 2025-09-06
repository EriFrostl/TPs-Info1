#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo (float, float);
float calcularPerimetroRectangulo (float, float);
float calcularDiagonalRectangulo (float, float);
float calcularAreaCirculo (float);
float calcularPerimetroCirculo (float);
void imprimirResultados (int, float, float, float);

int main(void)
{
int figura;
float longitud, altura, radio, area, perimetro, diagonal;

do {printf ("\nIngrese la figura que desea calcular (1: rectángulo, 2: círculo):");
    scanf ("%d", &figura);
    
    if (figura!=1 && figura!=2)
        printf("\nError, el número ingresado no se corresponde con ninguna opción");
}while (figura!=1 && figura!=2);


if(figura==1){
    printf("\nOpción de rectángulo seleccionada.");
    
   do{printf("\nIngrese la longitud del rectángulo:");
        scanf ("%f", &longitud);
        if(longitud<=0)
        printf("\nError, la longitud debe ser un número positivo");
   }while (longitud<=0);
   
    do{printf("\nIngrese la altura del rectángulo:");
        scanf ("%f", &altura);
        if(altura<=0)
        printf("\nError, la altura debe ser un número positivo");
   }while (altura<=0);
        
    area=calcularAreaRectangulo (longitud, altura);
    perimetro=calcularPerimetroRectangulo (longitud, altura);
    diagonal=calcularDiagonalRectangulo (longitud, altura);
} 


else {
    printf("\nOpción de círculo seleccionada.");
    
    do{printf("\nIngrese el radio del círculo:");
        scanf ("%f", &radio);
        if(radio<=0)
        printf("\nError, el radio debe ser un número positivo");
   }while (radio<=0);  
   
    area=calcularAreaCirculo (radio);
    perimetro=calcularPerimetroCirculo (radio);
    }

imprimirResultados (figura, area, perimetro, diagonal);
    

    return 0;
}

float calcularAreaRectangulo (float longitud, float altura){
    return longitud*altura;
}

float calcularPerimetroRectangulo (float longitud, float altura){
    return longitud*2+altura*2;
}

float calcularDiagonalRectangulo (float longitud, float altura){
    return sqrt(longitud*longitud+altura*altura);
}

float calcularAreaCirculo (float radio){
    return M_PI*radio*radio;
}

float calcularPerimetroCirculo (float radio){
    return 2*M_PI*radio;
}

void imprimirResultados (int figura, float area, float perimetro, float diagonal){
    printf("\nEl área del %s es %.2f", figura==1?"rectángulo":"círculo", area);
    printf("\nEl perímetro del %s es %.2f", figura==1?"rectángulo":"círculo", perimetro);
    
    if(figura==1)
        printf("\nLa diagonal del rectángulo es %.2f", diagonal);
    
    return ;
    
}
