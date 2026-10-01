//Scenario: You are writing the billing logic for a movie theatre's ticket counter. A single customer wants to book tickets for a group. The cashier enters the number of people in the group and then enters the ticket price category for each person one at a time (there are 3 categories: 1 = Regular ₹150, 2 = Premium ₹250, 3 = Recliner ₹400). Using only a for loop (no arrays, no functions), your program must:
//1. Ask the user how many tickets (n) are being booked.
//2. Loop n times, and in each iteration ask for the category (1/2/3) of that ticket.
//3. Add the correct price to a running total based on category.
//4. Keep a running count of how many Regular, Premium, and Recliner tickets were booked (using simple counter variables, not arrays).
//5. After the loop ends:
//If the total number of tickets is 5 or more, apply a 10% discount on the total bill.
//Print the final bill, along with a breakdown of how many tickets were sold in each category.
//Submission guidelines
//Expected Output
//Enter number of tickets: 3
//Enter category for ticket 1 (1/2/3): 1
//Enter category for ticket 2 (1/2/3): 2
//Enter category for ticket 3 (1/2/3): 3
//--- Final Bill ---
//Regular tickets: 1
//Premium tickets: 1
//Recliner tickets: 1
//Total (before discount): 800
//Discount applied: No
//Final Amount: 800




#include <stdio.h>
int main(){
    int n, category;
    int regular;
    int premium;
    int recliner;
    int total = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter category for ticket (1/2/3): ", i);
        scanf("%d", &category);

        if (category == 1) {
            total += 150;                                             
            regular++;
        }  if (category == 2) {
            total += 250;
            premium++;
        }  if (category == 3) {
            total += 400;
            recliner++;
        } else{
            printf("Invalid category. Please enter 1, 2, or 3.\n");
        
        }
   }

    printf("--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total (before discount): %d\n", total);

    if (n >= 5) {
        int discount = total * 0.10;
        total -= discount;
        printf("Discount applied: Yes\n");
        printf("Final Amount: %d\n", total);
    } else {
        printf("Discount applied: No\n");
        printf("Final Amount: %d\n", total);
    }

    return 0;
}