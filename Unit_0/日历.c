#include<stdio.h>
//输入这个月有几天，第一天是周几，每周第一天是周一还是周日
//输出该月日历

int main() {
    int days = 0, firstDay = 0, weekFirst = 0, index = 1, i = 1;

    // 这个月有几天
    while (days == 0) {  
        printf("Enter how many days in this month(28,29,30,31):    ");
        scanf("%d",&days);
        if (days < 28 || days > 31) {
            printf("Wrong Number!\n");
            fflush(stdin);
            days = 0;
            continue;
        }
    }

    // 这个月第一天是周几
    while (firstDay == 0) {
        printf("This month's first day is (1-7):    ");
        scanf("%d",&firstDay);
        if (firstDay < 1 || firstDay > 7) {
            printf("Wrong Number!\n");
            fflush(stdin);
            firstDay = 0;
            continue;
        }
    }

    // 每周第一天是周一还是周日
    while (weekFirst == 0) {
        printf("Each week's first day is (1 = Monday, 7 = Sunday):    ");
        scanf("%d",&weekFirst);
            if (!(weekFirst == 1 || weekFirst == 7)) {
            printf("Wrong Number!\n");
            fflush(stdin);
            weekFirst = 0;
            continue;
        }
    }
    printf("\n");
    // 输出日历
    if (weekFirst == 1) {  // 每周第一天为周一
        printf(" Mon Tue Wed Thu Fri Sat Sun\n");
        while (i < firstDay) {
            printf("    ");
            i++;
        }
        while (index <= days) {
            printf("%4d", index);
            if ((index + i-1) % 7 == 0) {
                printf("\n");
            }
            index++;
        }
        printf("\n");
        printf("\n");
        return 0;
    } else {  // 每周第一天为周日
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        while (i < firstDay + 1) {
            printf("    ");
            i++;
        }
        while (index <= days) {
            printf("%4d", index);
            if ((index + i - 1) % 7 == 0) {
                printf("\n");
            }
            index++;
        }
        printf("\n");
        printf("\n");
        return 0;  
    }
}