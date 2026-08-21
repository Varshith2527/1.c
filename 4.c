#include <stdio.h>

int main() {
    int num_of_10_coins, num_of_5_coins, num_of_2_coins, num_of_1_coins;
    int total_amt = 0;

    printf("Enter the number of Rs10 coins in the piggybank: ");
    scanf("%d", &num_of_10_coins);

    printf("Enter the number of Rs5 coins in the piggybank: ");
    scanf("%d", &num_of_5_coins);

    printf("Enter the number of Rs2 coins in the piggybank: ");
    scanf("%d", &num_of_2_coins);

    printf("Enter the number of Rs1 coins in the piggybank: ");
    scanf("%d", &num_of_1_coins);

    total_amt = (num_of_10_coins * 10) + 
                (num_of_5_coins * 5) + 
                (num_of_2_coins * 2) + 
                (num_of_1_coins * 1);

    printf("\nTotal amount in the piggybank = Rs %d\n", total_amt);

    return 0;
}
