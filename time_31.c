#include <stdio.h>

int main()
{
    int time, hour, min, sec, rem, day, month, year, mod, minute, second, remd, rem2, sum;

    scanf("%d", &time);

    if(time >= 1 && time < 60){
        sec = time;
        if(sec == 1) printf("%d second\n", sec);
        else printf("%d seconds\n", sec);
    }

    else if(time >= 60 && time < 3600){
        min = time / 60;
        sec = time % 60;

        if(sec == 0 && min == 1) printf("%d minute\n", min);
        else if(sec == 0 && min > 1) printf("%d minutes\n", min);
        else printf("%d minutes %d seconds\n", min, sec);
    }

    else{
        hour = time / 3600;
        rem = time % 3600;
        min = rem / 60;
        sec = rem % 60;

        if(hour < 24){
            if(sec == 0 && min == 0 && hour == 1) printf("%d hour\n", hour);
            else if(sec == 0 && min == 1 && hour == 1) printf("%d hour %d minute\n", hour, min);
            else if(sec == 1 && min == 0 && hour == 1) printf("%d hour %d second\n", hour, sec);
            else if(sec == 1 && min == 1 && hour == 1) printf("%d hour %d minute %d second\n", hour, min, sec);
            else if(sec > 1 && min == 0 && hour == 1) printf("%d hour %d seconds\n", hour, sec);
            else if(sec == 0 && min > 1 && hour == 1) printf("%d hour %d minutes\n", hour, min);
            else if(sec > 1 && min > 1 && hour == 1) printf("%d hour %d minutes %d seconds\n", hour, min, sec);
            else if(sec == 0 && min == 0 && hour > 1) printf("%d hours\n", hour);
            else if(sec == 0 && min > 1 && hour > 1) printf("%d hours %d minutes\n", hour, min);
            else if(sec > 1 && min == 0 && hour > 1) printf("%d hours %d seconds\n", hour, sec);
            else if(sec == 1 && min == 1 && hour > 1) printf("%d hours %d minute %d second\n", hour, min, sec);
            else if(sec == 1 && min == 0 && hour > 1) printf("%d hours %d second\n", hour, sec);
            else if(sec == 0 && min == 1 && hour > 1) printf("%d hours %d minute\n", hour, min);        
            else if(sec > 1 && min == 1 && hour > 1) printf("%d hours %d minute %d seconds\n", hour, min, sec);
            else if(sec == 1 && min > 1 && hour > 1) printf("%d hour %d minutes %d second\n", hour, min, sec);
            else if(sec > 1 && min > 1 && hour > 1) printf("%d hours %d minutes %d seconds\n", hour, min, sec);
        }

        else if(hour >= 24 && min >= 0 && sec >= 0){
            day = hour / 24;
            mod = hour % 24;
            minute = min;
            second = sec;            

            if(day < 30){
                if(second == 0 && minute == 0 && mod == 0 && day == 1) printf("%d day\n", day);
                else if(second == 0 && minute == 0 && mod == 1 && day == 1) printf("%d day %d hour\n", day, mod);
                else if(second == 0 && minute == 1 && mod == 0 && day == 1) printf("%d day %d minute\n", day, minute);
                else if(second == 1 && minute == 0 && mod == 0 && day == 1) printf("%d day %d second\n", day, second);
                else if(second == 0 && minute == 1 && mod == 1 && day == 1) printf("%d day %d hour %d minute\n", day, mod, minute);
                else if(second == 1 && minute == 0 && mod == 1 && day == 1) printf("%d day %d hour %d second\n", day, mod, second);
                else if(second == 1 && minute == 1 && mod == 1 && day == 1) printf("%d day %d hour %d minute %d second\n", day, mod, minute, second);
                else printf("%d days %d hours %d minutes %d seconds\n", day, mod, minute, second);
            }

            else if(day >= 30 && mod >= 0 && minute >= 0 && second >= 0){
                month = day / 30;
                day = day % 30;
                hour = mod;
                minute = minute;
                second = second;

                if(second == 0 && minute == 0 && hour == 0 && day == 0 && month == 1) printf("%d month\n", month);
                else if(second == 0 && minute == 0 && hour == 0 && day == 0 && month > 1) printf("%d months\n", month);
                else if(second == 0 && minute == 0 && hour == 0 && day == 1 && month == 1) printf("%d month %d day\n", month, day);
                else if(second == 0 && minute == 0 && hour == 1 && day == 0 && month == 1) printf("%d month %d hour\n", month, hour);
                else if(second == 0 && minute == 1 && hour == 0 && day == 0 && month == 1) printf("%d month %d minute\n", month, minute);
                else if(second == 1 && minute == 0 && hour == 0 && day == 0 && month == 1) printf("%d month %d second", month, second);
                else if(second == 1 && minute == 1 && hour == 1 && day == 1 && month == 1) printf("%d month %d day %d hour %d minute %d second\n", month, day, hour, minute, second);
                else if(second == 0 && minute == 0 && hour == 1 && day == 1 && month == 1) printf("%d month %d day %d hour\n", month, day, hour);
                else if(second == 0 && minute == 1 && hour == 0 && day == 1 && month == 1) printf("%d month %d day %d minute\n", month, day, minute);
                else if(second == 1 && minute == 0 && hour == 0 && day == 1 && month == 1) printf("%d month %d day %d second\n", month, day, second);
                else if(second == 0 && minute == 1 && hour == 1 && day == 0 && month == 1) printf("%d month %d hour %d minute\n", month, hour, minute);
                else if(second == 1 && minute == 0 && hour == 1 && day == 0 && month == 1) printf("%d month %d hour %d second\n", month, hour, minute);
            }
            
        }
    }

    return 0;
}