#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tempfile;
    char buffer[100];
    int num;

    // Create a temporary file
    tempfile = tmpfile();
    if (tempfile == NULL) {
        perror("Error creating temporary file");
        return 1;
    }

    // Write some data to the temporary file
    fputs("This is a temporary file.\n", tempfile);
    fflush(tempfile);

    // Read data from the temporary file
    fseek(tempfile, 0, SEEK_SET); // Seek to the beginning of the file
    while ((num = fread(buffer, 1, sizeof(buffer), tempfile)) > 0) {
        fwrite(buffer, 1, num, stdout);
    }

    // Close and automatically remove the temporary file
    fclose(tempfile);

    return 0;
}
