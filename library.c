#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate,
        daysOverdue;
    int fineRate;
    int fineAmount;

    // Prompt user for inputs
    printf("Enter bookID: ");
    scanf("%d", &bookID);
    printf("Enter dueDate: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date");
    scanf("%d", &returnDate);

    // calculate days overdue
    daysOverdue = returnDate -
                  dueDate;

    // Determine the fine rate based

    if (daysOverdue<= 7) {
        fineRate= 20;
    } else if (daysOverdue <= 14) {
        fineRate= 50;
    } else {
        fineRate = 100;
    }

    // Calculate total fine amount
    fineAmount = fineRate *
                 daysOverdue;

    // Display the results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n",
           returnDate);
    printf("Days Overdue: %d\n",
           daysOverdue);
    printf("Fine Rate: ksh. %d\n",
           fineRate);
    printf("Fine Amount: ksh.%d\n",
           fineAmount);

    return 0;
}