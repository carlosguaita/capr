#include <stdio.h>

int main (int argc, char *argv[]) {
double montoahorro, tasainteres, meses, totalahorro, totalinteres;
double tasainteresmensual, interesmensual,ahorromasinteres=0;
    printf("Ingrese el monto mensual a ahorrar:");
    scanf("%lf",&montoahorro);
    printf("Ingrese la tasa de interes anual:");
    scanf("%lf",&tasainteres);
    printf("ingrese el numero de meses:");
    scanf("%lf",&meses);
    tasainteresmensual=tasainteres/100/12;
    printf("ahorro\t\tinteres\t\ta+i\n");

    for(int i=1;i<=meses;i++){
        totalahorro=montoahorro*i;
        interesmensual=(ahorromasinteres+montoahorro)*tasainteresmensual;
        totalinteres+=interesmensual;
        ahorromasinteres+=montoahorro+interesmensual;
    printf("%.2lf\t\t%.2lf\t\t%.2lf\n",totalahorro,interesmensual,ahorromasinteres);
    }

    printf("El monto ahorrado es: %.2lf\n",totalahorro);
    printf("El total de intereses es: %.2lf\n",totalinteres);
    printf("El monto acumulado es: %.2lf\n",ahorromasinteres);
    return 0;
}