#include <stdio.h>

void main(){
    int arr[5] = {12,56,3,89,34};

    int m = arr[0];

    for(int i = 0 ; i < 5 ; i++){
        
        if(m > arr[i]){
            m = arr[i];
        }
        
    }

    // printf("%d ",m);

    

}

