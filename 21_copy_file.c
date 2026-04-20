#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *source, *dest ;
    char ch;

    source = fopen("source.txt", "r");
    if(source == NULL){
        printf("Unable to open source file.\n");
        exit(1);
    }
    dest = fopen("destination.txt", "w");
    if(dest == NULL){
        printf("Unable to open destination file.\n");
        fclose(source);
        exit(1);
    }
    while((ch = fgetc(source)) != EOF){
        fputc(ch, dest);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(dest);
    return 0;
}

