#include <stdio.h>

struct {
    int id;
    char name[50];
}sData[100];

int main(void)
{
    FILE *file;

    file = fopen("data.csv", "w");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    printf("Enter the data in the format\n");
    for (size_t i = 0; i < 2; i++)
    {
        printf("Id Number, Name.\n");
        scanf("%d%*c%[^\n]%*c", &sData[i].id, sData[i].name);
        fprintf(file, "%d,%s\r\n", sData[i].id, sData[i].name);
    }
    
    fclose(file);

    return 0;
}