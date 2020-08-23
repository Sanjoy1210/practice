#include <stdio.h>

int main()
{
    int sec, hour, min, sec1;
    scanf("%d", &sec);

    while(sec < 0){
        printf("Invalid input\n");
        break;
    }

    if(sec > 0){
        if(sec >= 0 && sec < 60){
            sec1 = sec;
            printf("%d s = %d s\n", sec, sec1);
        }

        else if(sec >= 60 && sec < 3600){
            min = (sec / 60);
            sec1 = (sec - (min * 60));
            if(sec1 == 0) printf("%d s = %d m\n", sec, min);
            else printf("%d s = %d m %d s\n", sec, min, sec1);
        }

        else{
            hour = sec / 3600;
            min = (sec - (3600 * hour)) / 60;
            sec1 = (sec - (3600 * hour) - (min * 60));

            if(sec1 == 0 && min == 0) printf("%d s = %d h\n", sec, hour);
            else if(min == 0) printf("%d s = %d h %d s\n", sec, hour, sec1);
            else{
                if(sec1 == 0){
                    printf("%d s = %d h %d m\n", sec, hour, min);
                }
                else{
                    printf("%d s = %d h %d m %d s\n", sec, hour, min, sec1);
                }
            }
        }
    }
    return 0;
}
