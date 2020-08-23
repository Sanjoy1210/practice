#include <stdio.h>

int main()
{
    int oponent_ran, current_ran, ball, t, ballPlayed;
    double cur_ranRate, rq_ranRate;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &oponent_ran, &current_ran, &ball);

        ballPlayed = 300 * 1.00 - ball;
        cur_ranRate = (current_ran * 1.0 / ballPlayed) * 6;
        rq_ranRate = ((oponent_ran * 1.0 - current_ran + 1) / ball) * 6;

        printf("%.2lf %.2lf\n", cur_ranRate, rq_ranRate);
    }

    return 0;
}