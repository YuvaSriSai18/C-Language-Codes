//merging two files into one file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *output;
    char ch;

    // Open the first input file
    file1 = fopen("Bubble_Sort.c", "r");
    if (file1 == NULL) {
        perror("Error opening file1.txt");
        return 1;
    }

    // Open the second input file
    file2 = fopen("DSA.txt", "r");
    if (file2 == NULL) {
        perror("Error opening file2.txt");
        fclose(file1);
        return 1;
    }

    // Open the output file
    output = fopen("MERGE.txt", "w");
    if (output == NULL) {
        perror("Error creating output.txt");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Merge data from file1 to output
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, output);
    }

    // Merge data from file2 to output
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, output);
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(output);

    printf("Files merged successfully.\n");

    return 0;
}
