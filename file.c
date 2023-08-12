#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[] = "Odd.txt";
    char destinationFileName[] = "file2.txt";
    char buffer[MAX_SIZE];
    int bytesRead;

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the content from source file to destination file
    while ((bytesRead = fread(buffer, 4, sizeof(buffer), sourceFile)) != 0) {
        fwrite(buffer, 4, bytesRead, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
