#include <stdio.h>

int main() {
    int month;
    
    // Ask the user for the month number 
    printf("Enter month number (1-12): ");
    scanf("%d", &month); // Fixed scanf syntax
    
    // Determine the number of days using switch case
    switch (month) {
        // Months with 31 days
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("Total number of days: 31\n");
            break;
            
        // Months with 30 days
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("Total number of days: 30\n");
            break;
            
        // February
        case 2:
            printf("Total number of days 28 or 29 (depending on leap year)\n");
            break;
            
        // Handling invalid inputs
        default:
            printf("Invalid month number! Please enter a value between 1 and 12.\n");
    }

    return 0;
}
