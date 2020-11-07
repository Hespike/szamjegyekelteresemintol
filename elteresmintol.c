#include <stdio.h>
#include <limits.h>

int readArray(int array[]){
int min = INT_MAX;
int i = 0;
    do{
        scanf("%d", &array[i]);
if (array[i] == -1){
    break;
}

       if(array[i] < 0) {
           printf("Csak pozitiv szamot adjon meg!\n");
           continue;
       }
        if(array[i] < min ){
            min = array[i];
        }
        i++;
        
    }while(i < 256);
if(i ==255){array[i] = -1;
}
    return min;
}

void printArray(int array[]){
    int i;
    for(i = 0; array [i] != -1; i++){
        printf("%d ", array[i]);
    }
    printf("-1\n");
    printf("\n");
}

void diffFromMin(int array[], int min, int result[]){
    int i;
    for( i = 0; array[i] != -1; i++){
        result[i] = array[i] - min;
    }
result[i] = -1;
}

int main (){
    int array[256], result[256];
    int min = readArray(array);
    printf("min = %d\n", min);
printArray(array);  
  diffFromMin(array, min, result);
printArray(result);
    return 0;
}