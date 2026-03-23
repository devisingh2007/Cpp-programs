#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = NULL;
    char buffer[256];
    
    // Open file for reading
    file = fopen("sample.txt", "r");
    
    if (file == NULL)
    {
        perror("Error: Could not open file");
        return 1;
    }
    
    printf("===========================================\n");
    printf("File Contents:\n");
    printf("===========================================\n");
    
    // Read and print file contents
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }
    
    printf("===========================================\n");
    printf("File reading completed successfully.\n");
    
    // Close file
    if (fclose(file) != 0)
    {
        perror("Error closing file");
        return 1;
    }
    
    return 0;
}