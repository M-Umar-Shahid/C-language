#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Item {
    int a;
    float b;
    char* name;
} Item;

int main() {
    FILE *fp;
    fp = fopen("file.txt","w+");
    Item item1,item = {5, 2.2, "George"};
    // fwrite(&item,sizeof(struct Item),1,fp);
    fwrite(&item,sizeof(Item),1,fp);
    rewind(fp);
    fread(&item1,sizeof(Item),1,fp);
    printf("The name of item is %s",item1.name);

    fclose(fp);
    return 0;
}