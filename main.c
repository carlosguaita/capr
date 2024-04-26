#include <stdio.h>

int main (int argc, char *argv[]) {
    double totalintereses, tiempo, montoinicial, tasainteres, cuota, montoanual,montocancelado=0,capitalanual;
    double interes1, interes2, interes3, interes4, interes5;
    double cuota1, cuota2, cuota3, cuota4, cuota5;
    printf("Ingrese monto del crédito: ");
    scanf("%lf",&montoinicial);
    printf("Ingrese la tasa de interes: ");
    scanf("%lf",&tasainteres);
    printf("Ingrese el numero de años: ");
    scanf("%lf",&tiempo);

    montoanual=montoinicial/tiempo;
    int j=1;
    for (int i = 0; i < tiempo; i++)
    {
         interes1=(montoinicial-montoanual*i)*tasainteres;
         cuota1=(montoanual+interes1)/12;
         totalintereses+=interes1;
         j=i+1;
         printf("interes anual %d: %lf\t",j,interes1);
         printf("valor cuota mensual año %d: %lf\n",j,cuota1);
    }
    printf("total intereses: %lf\n",totalintereses);
/*
    interes1=(montoinicial-montoanual*0)*tasainteres;
    interes2=(montoinicial-montoanual*1)*tasainteres;
    interes3=(montoinicial-montoanual*2)*tasainteres;
    interes4=(montoinicial-montoanual*3)*tasainteres;
    interes5=(montoinicial-montoanual*4)*tasainteres;

    cuota1=(montoanual+interes1)/12;
    cuota2=(montoanual+interes2)/12;
    cuota3=(montoanual+interes3)/12;
    cuota4=(montoanual+interes4)/12;
    cuota5=(montoanual+interes5)/12;

    double totalintereses=interes1+interes2+interes3+interes4;

    printf("interes anual 1: %lf\n",interes1);
    printf("interes anual 2: %lf\n",interes2);
    printf("interes anual 3: %lf\n",interes3);
    printf("interes anual 4: %lf\n",interes4);
    printf("interes anual 5: %lf\n",interes5);

    printf("valor cuota mensual año 1: %lf\n",cuota1);
    printf("valor cuota mensual año 2: %lf\n",cuota2);
    printf("valor cuota mensual año 3: %lf\n",cuota3);
    printf("valor cuota mensual año 4: %lf\n",cuota4);
    printf("valor cuota mensual año 5: %lf\n",cuota5);

    printf("total intereses: %lf\n",totalintereses);
*/

    return 0;
}