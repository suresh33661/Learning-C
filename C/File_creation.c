#include <stdio.h>

int main(){
    FILE *fp;
    
    fp = fopen("D:\\C\\demo_file.txt","w");
    if (fp == NULL){
        printf("File does not exist\n");
    }

    printf("Enter number");
    int num;
    scanf("%d", &num);
    fprintf(fp, "Number is %d",num);
    fclose(fp);
}