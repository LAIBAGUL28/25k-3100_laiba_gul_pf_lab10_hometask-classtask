#include <stdio.h>
//pf lab 10 q 8

int main() {

    // categories
    char categories[3][20] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };
    
    char items[9][30] = {
        "Spring Rolls", "Garlic Bread", "Salad",                 
        "Grilled Chicken", "Pasta Alfredo", "Beef Burger",       
        "Ice Cream", "Brownie", "Cheesecake"                 
    };

    // Prices 
    float prices[9] = {
        6.50, 8.00, 5.75,    
        12.00, 14.50, 11.00,  
        7.00, 9.50, 10.50     
    };
    
    int startIndex[3] = {0, 3, 6};

    int count[3] = {3, 3, 3};
    
    printf("\n================ RESTAURANT MENU ================\n");
	int c;
    for (c = 0; c < 3; c++) {
        printf("\n--- %s ---\n", categories[c]);

        int start = startIndex[c];
        int i;
        for (i = 0; i < count[c]; i++) {
            printf("%-20s  $%.2f\n", items[start + i], prices[start + i]);
        }
    }

    printf("\n=========== Budget-Friendly Options (Under $10) ===========\n");

    int found = 0;

    for (c = 0; c < 3; c++) {
        int start = startIndex[c];
        int i;
        for (i = 0; i < count[c]; i++) {
            if (prices[start + i] < 10.0) {
                printf("%-20s  $%.2f   (%s)\n",//"%-20s format specifier
                       items[start + i], prices[start + i], categories[c]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No budget-friendly items available.\n");
    }

    return 0;
}

