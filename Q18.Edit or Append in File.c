#include <stdio.h>

int main() {
    FILE *fp, *temp;
    char buffer[256];
    int delete_line, current_line = 1, n, i;

    fp = fopen("sample.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the line number to delete: ");
    scanf("%d", &delete_line);

    // Copy all lines except the line to be deleted
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (current_line != delete_line) {
            fputs(buffer, temp);
        }
        current_line++;
    }

    fclose(fp);
    fclose(temp);

    remove("sample.txt");
    rename("temp.txt", "sample.txt");

    // Append multiple lines to the end of the file
    fp = fopen("sample.txt", "a");
    printf("How many lines do you want to append? ");
    scanf("%d", &n);
    getchar(); // Clear newline from input buffer

    printf("Enter the lines:\n");
    for (i = 0; i < n; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        fputs(buffer, fp);
    }

    fclose(fp);
    printf("File updated successfully.\n");
    return 0;
}