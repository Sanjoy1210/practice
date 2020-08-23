#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{
    double n1, n2, x, m;

    scanf("%lf %lf", &n1, &n2);
    
    if(n1 != 0.0 && n2 == 0.0) printf("Eixo X\n");
    else if(n1 == 0.0 && n2 != 0.0) printf("Eixo Y\n");
    else
    {
        double i = fabs(n2) / fabs(n1);
    
        x = (atan(i) * 180.0) / PI;

        if(n1 > 0.0 && n2 > 0.0){
            m = x;
        }

        else if(n1 < 0.0 && n2 > 0.0){
            m = 180.0 - x;
        }

        else if(n1 < 0.0 && n2 < 0.0){
            m = 180.0 + x;
        }

        else{
            m = 360.0 - x;
        }
        
        if(m > 0.0 && m < 90.0) printf("Q1\n");
        else if(m > 90.0 && m < 180.0) printf("Q2\n");
        else if(m > 180.0 && m < 270.0) printf("Q3\n");
        else if(m > 270.0 && m < 360.0) printf("Q4\n");
        else printf("Origem\n");

    }

    return 0;
}