// https://github.com/EriFrostl/TPs-Info1 //

#include <stdio.h>
#define TAM 5

int main()
{

int cod_bar[TAM];
float precio[TAM];
int i_preciomax=0, i_preciomin=0;

printf("Ingrese %d productos, se solicitará el código y precio: \n", TAM);

for(int i=0;i<TAM;i++){
    do{printf("%d- Ingrese el código de barras (1-999999999):\n", i+1);
        scanf("%d", &cod_bar[i]);
        
        if(cod_bar[i]<1 || cod_bar[i]>999999999)
            printf("Error. El código de barras debe estar entre 1 y 999999999\n");
    } while (cod_bar[i]<1 || cod_bar[i]>999999999);
    
    do{printf("%d- Ingrese el precio:\n", i+1);
        scanf("%f", &precio[i]);
        
        if(precio[i]<=0)
            printf("Error. El precio debe ser un número positivo\n");
    } while (precio[i]<=0);
    
    if(precio[i]>precio[i_preciomax])
        i_preciomax=i;
        
    if(precio[i]<precio[i_preciomin])
        i_preciomin=i;
    
}

printf("    Código      Precio  \n");
for(int i=0;i<TAM;i++){
    printf("%12d   %12.2f\n",cod_bar[i],precio[i]);
}

printf("\nMás caro:[%d]   %.2f\n", cod_bar[i_preciomax], precio[i_preciomax]);
printf("Más barato:[%d]   %.2f\n", cod_bar[i_preciomin], precio[i_preciomin]);


    return 0;
}
