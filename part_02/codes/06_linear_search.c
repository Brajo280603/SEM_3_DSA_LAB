#include <stdio.h>

int main(){
    int array[] = {23,53,12,32,13,87,56};
    int element;
    printf("what element to find : ");
    scanf("%d",&element);

    for(int i = 0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i] == element){
            printf("element found at index : %d",i);
            break;
        }else if(i+1 == sizeof(array)/sizeof(array[0])){
            printf("element not found in array");
        }
    }

    return 0;
}