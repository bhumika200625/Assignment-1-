#include<stdio.h>

int main() {
    int total_days, years, weeks, days;

    // Input total number of days
    printf("Number of days: ");
    scanf("%d", &total_days);

    // Conversion calculations
    years = total_days / 365; // Calculate years
    int remaining_days = total_days % 365; // Remaining days after years
    weeks = remaining_days / 7; // Calculate weeks
    days = remaining_days % 7; // Remaining days after weeks

    // Output results
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
