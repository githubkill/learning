#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numberOfDays(int year,int month) {
    int days = 0;
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;  // ���Ϊ���꣬isLeapYear����Ϊ1���棩����Ϊ0���٣�

    switch (month){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        days = 31;
        break;
    case 4:case 6:case 9:case 11:
        days = 30;
        break;
    case 2: 
        if (isLeapYear == 1) {
            days = 29;
        }
        if (isLeapYear == 0) {
            days = 28;
        }
        break;
    
    default: 
        days = -1;
        break;
    }

    return days;
}

int main() {
    printf("Please input year and month:");
    int year, month;
    scanf("%d %d",&year,&month);

    int days = numberOfDays(year, month);

    if (days == -1) {
        printf("invaild month input\n");
    }if (days != -1) {
        printf("number of days is %d\n", days);
    }

    return 0;
}
