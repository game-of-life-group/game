
#include <stdio.h>
#include <stdlib.h>
#define WIDTH 25
#define LEN 80
void map(char **fieldToRead, char choose);
void map2(char **fieldToRead);// тестовый вывод карты
void freeal(char **field);
int main() {
    char **field;
    char choose;
    scanf("%c",&choose);
    field=(char**)malloc(WIDTH*sizeof (char));
    for(int i=0; i<WIDTH;i++) {
        field[i]=(char*)malloc(LEN*sizeof (char));
    }

   map(field,choose);
    map2(field);// тестовый вывод карты
    //freeal(field);
    return 0;
}

void map(char **fieldToRead, char choose){

    FILE *file=fopen("C:\\Users\\just_\\CLionProjects\\game\\1.txt", "r"); ;
        for(int i=0; i <WIDTH ;i++){
            for(int j=0;j<LEN ;j++){
                fscanf(file,"%c",&fieldToRead[i][j]);
                printf("i:%d j:%d\n",i,j);
            }
        }

    fclose(file);
}



/*void freeal(char **field){
    for(int i=0; i<WIDTH;i++) {
        free(field[i]);
    }
    free(field);
}*/

void map2(char **fieldToRead){ // тестовый вывод карты
    for(int i=0; i <WIDTH-1 ;i++){
        for(int j=0;j<LEN-1;j++){
            printf("%c",fieldToRead[i][j]);
        }
        printf("\n");
    }
    printf("end");
}