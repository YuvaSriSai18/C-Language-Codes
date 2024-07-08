//C program for file status functions

#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *filename = "Deletion_Linked_List.c";  //filename 
    struct stat file_info;

    // Use the stat function to get file status
    if (stat(filename, &file_info) == 0) {
        printf("File: %s\n", filename);
        printf("Size: %ld bytes\n", file_info.st_size);
        printf("Permissions: ");
        printf((S_ISDIR(file_info.st_mode)) ? "d" : "-");
        printf((file_info.st_mode & S_IRUSR) ? "r" : "-");
        printf((file_info.st_mode & S_IWUSR) ? "w" : "-");
        printf((file_info.st_mode & S_IXUSR) ? "x" : "-");
        printf((file_info.st_mode & S_IRGRP) ? "r" : "-");
        printf((file_info.st_mode & S_IWGRP) ? "w" : "-");
        printf((file_info.st_mode & S_IXGRP) ? "x" : "-");
        printf((file_info.st_mode & S_IROTH) ? "r" : "-");
        printf((file_info.st_mode & S_IWOTH) ? "w" : "-");
        printf((file_info.st_mode & S_IXOTH) ? "x" : "-");
        printf("\n");
        printf("Last modified: %s", ctime(&file_info.st_mtime));
    } else {
        perror("Error getting file status");
    }

    return 0;
}
