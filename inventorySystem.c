// AVA 2
// Systems Analysis and Development

#include <stdio.h>
#include <stdlib.h>

typedef struct { // Structure that holds each product and its characteristics: name, quantity and price.
    char name[20];
    int quantity;
    float price;
} Product;

float calculateInventory(Product *prod, int n) { // Loops through the whole array by index and calculates the total inventory value.
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        total = total + prod[i].quantity * prod[i].price; // Each product adds quantity x price to the total.
    }
    return total;
}

int main() {

    int n, i;

    printf("Enter the number of products: "); // Asks for the number of products and stores it in "n".
    scanf("%d", &n);

    Product *prod = (Product *)malloc(n * sizeof(Product)); // Pointer to the structure defined above, using dynamic memory allocation.
    if (prod == NULL) { // Checks whether the memory allocation worked.
        printf("Memory allocation error!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the name of product %d: ", i + 1);
        scanf("%s", prod[i].name); // Reads each product's name and stores it in the array.

        printf("Enter the quantity of product %d: ", i + 1);
        scanf("%d", &prod[i].quantity); // Reads each product's quantity and stores it in the array.

        printf("Enter the price of product %d: ", i + 1);
        scanf("%f", &prod[i].price); // Reads each product's price and stores it in the array.
    }

    float total = calculateInventory(prod, n); // Calls the function above, passing the array and the number of items.
    for (i = 0; i < n; i++) {
        printf("Product: %s | Qty: %d | Unit price: $ %.2f | Subtotal: $ %.2f\n", // Shows each product's name, quantity, price and subtotal.
            prod[i].name,
            prod[i].quantity,
            prod[i].price,
            prod[i].quantity * prod[i].price);
    }

    printf("Total inventory value: %.2f\n", total); // Shows the total value of all products in stock.
    free(prod); // Gives back to the operating system all the memory reserved by malloc.

    return 0;
}
