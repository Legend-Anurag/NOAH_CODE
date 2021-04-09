#include <stdio.h>

int main(void) 
{
    int p, q, r; // 25 paisa : 50 paisa : 1 Re ratio
    // each persons having different amount stored in a list
    double personsAmount[100];
    int n = 5, i; // n persons
    double x, y;
    int coins25, coins50, coins1;
    
    // get the ration
    printf("Enter coins ration as p, q and r: ");
    scanf("\n%d\n%d\n%d", &p, &q, &r);
    
    // get number of persons
    printf("Enter number of persons: ");
    scanf("\n%d", &n);
    
    printf("\n===== Enter amount of each persons =====\n");
    for(i = 0; i < n; i++) 
    {
        printf("Enter amount of Person (%d): \n", (i + 1));
        scanf("\n%lf", &personsAmount[i]);
    }
    
    printf("\n\n===== Coins Cout of each Persons as Below =====\n");
    for(i = 0; i < n; i++) 
    {
        // ration of amount and ration wise coins
        x = personsAmount[i] / (0.25 * p + 0.5 * q + r);
        coins25 = p * x; // number of 25 Paisa coins
        coins50 = q * x; // number of 50 Paisa coins
        coins1 = r * x; // number of 1 Rs coins
    
        printf("\nCoins of Person (%d) as 25 Paisa: %d; 50 Paisa: %d; 1 Rs: %d; Total: %lf", (i + 1), coins25, coins50, coins1, personsAmount[i]);
    }
    getchar();
    return 0;
}