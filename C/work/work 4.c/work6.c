#include <stdio.h>

int main() {
    int year, month, day, hours, minutes, seconds1, seconds2;

    printf("请输入日期（格式：年 月 日 时 分 秒）：");
    scanf("%d %d %d %d %d %d", &year, &month, &day, &hours, &minutes, &seconds1);
    printf("请输入经过多少秒：");
    scanf("%ld", &seconds2);

    seconds1 += seconds2;
    if (seconds1>=60){
        minutes += seconds1/60;
        seconds1 = seconds1%60;
        if (minutes>=60){
            hours += minutes/60;
            minutes = minutes%60;
            if (hours>=24){
                day += hours/24;
                hours = hours%24;
                if (day>31){
                    month += day/31;
                    day = day%31;
                    if (month>12){
                        year += month/12;
                        month = month%12;
                    }
                }
        }
            }
            
        }
    printf("经过%ld秒后，新的日期和时间为：%d年%d月%d日 %d时%d分%d秒\n", seconds2, year, month, day, hours, minutes, seconds1);    
    return 0;
}
    
    

    
