#include <stdio.h>

int main() {
    int bookCode, dayDue, dayReturned, extraDays;
    int penaltyPerDay;
    float totalPenalty;

    printf("Enter the Book Code: ");
    scanf("%d", &bookCode);
    printf("Enter the Due Date : ");
    scanf("%d", &dayDue);
    printf("Enter the Date Returned : ");
    scanf("%d", &dayReturned);

    extraDays = dayReturned - dayDue;

    if (extraDays <= 7) {
        penaltyPerDay = 20;
    } else if (extraDays <= 14) {
        penaltyPerDay = 50;
    } else {
        penaltyPerDay = 100;
    }

    totalPenalty = penaltyPerDay * extraDays;

    printf("\nBook Code: %d\n", bookCode);
    printf("Due Date: %d\n", dayDue);
    printf("Returned On: %d\n", dayReturned);
    printf("Days Overdue: %d\n", extraDays);
    printf("Penalty Rate: Ksh %d per day\n", penaltyPerDay);
    printf("Total Penalty: Ksh %.2f\n", totalPenalty);

    return 0;
}
