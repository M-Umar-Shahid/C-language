#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "Umar is a programmer";
    char regNo[] = "FA21-BCS-107";
    char *ptr;
    ptr = strtok(str, " ");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
    ptr = strtok(regNo, "-");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-");
    }
    return 0;
}