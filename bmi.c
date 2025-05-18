#include <stdio.h>

int main()
{

float peso, altura;  

    printf("Ingrese el peso en kg: ");
    scanf("%f",&peso);
    
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    
float index=peso/(altura*altura);

    printf("Su índice de masa corporal es: %.2f\n\nÍndice | Condición\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad",index);

    return 0;
}
