#include <stdio.h>
// LINEAR SEARCH 
int linearsearch(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;

        }
    }
    return -1;
}
int main(){
    int arr[]= {1,2,5,6,9,7,4,9,8,3}, size;
    size = sizeof(arr)/sizeof(int);
    // printf("%d",size);
    int res = linearsearch(arr,size,4);
    
    if(res == -1)
            printf("\nnahiiiiiii milla element\n\n");
    else
    printf("\nelement mill gaya at index of %d \n\n", res);
    return 0;
    }