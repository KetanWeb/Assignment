#include <stdio.h>


int total_amount = 0;  

 menu() {
    int price = 0,quantity,amount = 0;

    printf("\nMenu:\n");
    printf("1. Pizza\t\t100 Rs/-\n");
    printf("2. Burger\t\t60 Rs/-\n");
    printf("3. Sandwich\t\t120 Rs/-\n");
    printf("4. Vadapav\t\t30 Rs/-\n");
    printf("5. Exit\n");

    int choice;
    printf("Enter Your Choice: ");
    scanf("%d", &choice);



    switch (choice) {
        case 1:
            printf("You chose Pizza\n");
            price = 100;
            break;
        case 2:
            printf("You chose Burger\n");
            price = 60;
            break;
        case 3:
            printf("You chose Sandwich\n");
            price = 120;
            break;
        case 4:
            printf("You chose Vadapav\n");
            price = 30;
            break;
        case 5:
        	printf("\nExiting... Thank you!\n");
        	printf("Final Total Amount: %d Rs\n", total_amount);
        	break;
        default:
            printf("Invalid choice! Please select from the menu.\n");
			break;  
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    amount = price * quantity;
    total_amount += amount;

    printf("Amount for this order: %d Rs\n", amount);
    printf("Total Amount : %d Rs\n", total_amount);
}

 main() {
    char order;

    while (1) {
        menu();  

        printf("\nDo you want to order more? (Y/N): ");
        scanf(" %c", &order);

        if (order == 'Y' || order == 'y') {
            menu();x
        } 
        else if (order == 'N' || order == 'n') {
           printf("\nFinal Total Amount: %d Rs\n", total_amount);
		    printf("Thank you!\n");
            break;
        } 
        else {
            printf("Invalid input. \n");
            break;
        }
    }

    
}
