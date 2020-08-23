#include <stdio.h>

int main()
{
    int t, target, ball, opponantRun, batsmanRun;
    double finishedOver, restOver, currentRate, requiredRunRat;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &opponantRun, &batsmanRun, &ball);

        target = opponantRun + 1;
        finishedOver = ((300 - ball) / 6.0);
        restOver = (ball / 6.0);        

        if(batsmanRun > opponantRun){
            currentRate = (batsmanRun / finishedOver);
            requiredRunRat = 0.00;
        }
        
        else{
            currentRate = (batsmanRun / finishedOver);
            requiredRunRat = ((target - batsmanRun) / restOver);
        }

        printf("%0.2lf %0.2lf\n", currentRate, requiredRunRat);
    }

    return 0;
}