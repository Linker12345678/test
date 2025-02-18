#include <stdio.h>
#include <stdlib.h>

// Function to display the menu
void displayMenu() {
    printf("\tMENU:\t\t\t|\n");
    printf("---------------------------------\n\tDRINKS\n");
    printf("\n--------------------------------\n\n\n");
    printf("1. Rich creamy Coffee - $3.00\t|\n");
    printf("2. Hot Tea - $2.50\t\t|\n");
    printf("3. Chocolate shake - $2.50\t|\n");
    printf("4. Kit kat Milk shake- $3.00\t|\n");
    printf("5. Dark coffee - $4.00\t\t|\n");
    printf("6. Coke - $2.00\t\t\t|\n");
    printf("7. Mojito - $3.50\t\t|\n");
    printf("8. Fresh juice - $4.50\t\t|\n");
    printf("----------------------------------\n\tSTARTERS\n");
    printf("-----------------------------------\n\n\n");
    printf("9. Crispy Sandwich - $4.00\t|\n");
    printf("10. White sauce pasta - $4.50\t|\n");
    printf("11. Crispy burger - $4.00\t|\n");
    printf("12. Cheesy pizza - $3.00\t|\n");
    printf("13. Veg kebab - $3.00\t\t|\n");
    printf("14. Chilly potato - $2.50\t|\n");
    printf("15. Veg momo - $2.00\t\t|\n");
    printf("-----------------------------------\n\tDESERTS\n\n");
    printf("-----------------------------------\n\n\n");
    printf("16. Chocolate pastry - $2.50\t|\n");
    printf("17. Vanilla ice cream - $3.00\t|\n");
    printf("18. Cup cake - $1.00\t\t|\n");
    printf("19. Exit\t\t\t|\n\n");
    printf("----------------------------------\n\n");
}


// Function to process the order
void takeOrder() {
    int choice, quantity;
    float totalAmount = 0.0;

    while (1) {
        displayMenu();
        printf("Enter your choice (1-19): ");
        scanf("%d", &choice);

        if(choice==19){
            printf("EXIT......THANK YOU FOR VISITING!\n\nHAVE A NICE DAY\n");
            break;
        }



        switch (choice) {
            case 1: // Coffee
                printf("You selected rich creamy Coffee.\n Enter quantity: ");
                scanf("%d", &quantity);
                totalAmount += 3.00 * quantity;

                break;
            case 2: // Tea
                printf("You selected HOT Tea.\n Enter quantity: ");
                scanf("%d", &quantity);
                totalAmount += 2.50 * quantity;
                break;
            case 3: // Sandwich
                printf("You selected Chocolate shake.\n Enter quantity: ");
                scanf("%d", &quantity);
                totalAmount += 2.50 * quantity;
                break;
            case 4: // Pastry
                printf("You selected Kit kat milkshake .\n Enter quantity: ");
                scanf("%d", &quantity);
                totalAmount += 3.00 * quantity;
                break;
            case 5: // Juice
                printf("You selected Dark coffee.\n Enter quantity: ");
                scanf("%d", &quantity);
                totalAmount += 4.00 * quantity;
                break;
            case 6:
                printf("You have selected Coke.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 2.00* quantity;
                break;
            case 7:
                printf("You have selected Mojito.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 3,50 * quantity;
                break;
            case 8:
                printf("You have selected fresh juice.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 4.50 * quantity;
                break;
            case 9:
                printf("You have selected Crispy Sandwich.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 4.00 * quantity;
                break;
            case 10:
                printf("You have selected White sauce pasta.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 4.50 * quantity;
                break;
            case 11:
                printf("You have selected crispy burger.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 4.00 * quantity;
                break;
            case 12:
                printf("You have selected cheesy pizza.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 3.00 * quantity;
                break;
            case 13:
                printf("You have selected Veg kebab\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 3.00 * quantity;
                break;
            case 14:
                printf("You have selected Chilly potato.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 2.50 * quantity;
                break;
            case 15:
                printf("You have selected Veg momo.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 2.00 * quantity;
                break;
            case 16:
                printf("You have selected Chocolate pastry.\n Enter quantity:");
                scanf("%d",&quantity);
                totalAmount += 2.50 * quantity;
                break;
            case 17:
                printf("You have selected Vanilla ice cream.\nEnter quantity:");
                scanf("%d",&quantity);
                totalAmount += 3.00 * quantity;
                break;
            case 18:
                printf("You have selected Cup cake.\nEnter quantity:");
                scanf("%d",&quantity);
                totalAmount += 1.00 * quantity;
                break;


            default:
                printf("Invalid choice! Please select a valid option (1-19).\n");
                break;
        }
        printf("\nCurrent Total: $%.2f\n\n", totalAmount);
    }

    printf("Your final bill is: $%.2f\n", totalAmount);
}

// Main function
int main() {
    printf("\n\n\t\t\t\t********** Cafe Management System **********\n\n");
    printf("\n\n\t\t\t\t-----------aapka swagat hai:)-------------\n\n");
    printf("---------------------------------\n");
    takeOrder();
    return 0;
    }
