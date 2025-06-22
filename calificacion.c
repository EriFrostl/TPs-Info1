#include <stdio.h>

int main()
{
int cal;
printf("Ingrese su calificación: ");
scanf("%d", &cal);
    while(cal<0){
    printf("Error, no se permiten números negativos.\n");
    printf("Ingrese una nueva calificación: \n");
    scanf("%d", &cal);}
    
if(cal>=90)
printf("Calificación:A");
else{
    if(cal>=80)
    printf("Calificación:B");
    else{
        if(cal>=70)
        printf("Calificación:C");
        else{
            if(cal>=60)
            printf("Calificación:D");
            else{
                if(cal<60)
                printf("Calificación:F");
            }}}}


    return 0;
}
