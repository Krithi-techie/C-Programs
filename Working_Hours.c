#include <stdio.h>
#include <math.h>

int main() {
    const int workHoursPerDay = 8;
    const int trainingDaysPercentage = 10;
    const int overtimeHoursPerDay = 2;

    int projectHours, availableDays, totalDays, trainingDays;
    int totalProjectHours, totalWorkableHours, remainingHours;

    printf("Enter total hours needed for the project: ");
    scanf("%d", &projectHours);
    printf("Enter available days for the project: ");
    scanf("%d", &availableDays);

    totalDays = availableDays;
    trainingDays = (int)(totalDays * (trainingDaysPercentage / 100.0));

    totalProjectHours = projectHours + (overtimeHoursPerDay * totalDays);
    totalWorkableHours = (totalDays - trainingDays) * workHoursPerDay;

    remainingHours = totalProjectHours - totalWorkableHours;

    if (remainingHours <= 0) {
        printf("The project can be finished on time.\n");
    } else {
        printf("The project cannot be finished on time.\n");
        printf("Additional hours needed: %f\n", ceil((double)remainingHours / overtimeHoursPerDay));
    }

    return 0;
}
