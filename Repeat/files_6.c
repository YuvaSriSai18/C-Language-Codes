//fread and fwrite program

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float price;
    char name[50];
} Product;

int main() {
    FILE *file;
    int count;
    Product products[3];

    // Create and initialize sample data
    Product sample_products[3] = {
        {1, 10.99, "Product A"},
        {2, 5.49, "Product B"},
        {3, 15.75, "Product C"}
    };

    // Write the sample data to a binary file
    file = fopen("products.bin", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    count = fwrite(sample_products, sizeof(Product), 3, file);
    fclose(file);

    printf("Wrote %d products to file.\n", count);

    // Read the data back from the binary file
    file = fopen("products.bin", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    count = fread(products, sizeof(Product), 3, file);
    fclose(file);

    printf("Read %d products from file:\n", count);
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Price: %.2f, Name: %s\n", products[i].id, products[i].price, products[i].name);
    }

    return 0;
}
