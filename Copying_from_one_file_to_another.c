#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int c;

    fp1 = fopen("Welcome.txt", "r");
    if (fp1 == NULL) {
        printf("Error: Cannot open source file (Welcome.txt). Check if it exists.\n");
        return 1;
    }

    fp2 = fopen("copy.txt", "w");
    if (fp2 == NULL) {
        printf("Error: Cannot create destination file (copy.txt).\n");
        fclose(fp1); // Close the first one before leaving
        return 1;
    }

    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    printf("File copied successfully!\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}