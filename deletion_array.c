#include<stdio.h>
void display(int arr[], int size){
 for(int i =0; i<size;i++){
    printf("%d ",arr[i]);
 }
 printf("\n");
}

//  deletion code
void delete(int arr[],int size, int index){
    for(int i= index; i< size; i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,0};
    int arrcapacity =20, size = 10,index =3;
    printf("\n Before deletion array element ");
    display(arr,size);
    delete(arr,size,index);
    printf("\n After deletion array element ");
    display(arr,size-1);
return 0;

}