#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int totalsize;
    int usedsize;
    int *ptr;
};

 void createarr(struct myArray *a,int tsize, int usize ){
    // (*a).totalsize=tsize;
    // (*a).usedsize=usize;
    // (*a).ptr = (int*)malloc(tsize*sizeof(int));
    
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));

 }

 void showarr(struct myArray *a){
    for(int i=0;i<a->usedsize;i++){
        printf("%d\n",(a->ptr)[i]);
    }
 }

 void setarr(struct myArray *a){
    int n;
    for(int i = 0; i<a->usedsize;i++){
        printf("Enter element %d -> ",i+1);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
 }
int main(){
    struct myArray marks;
    createarr(&marks,10,5); 
    printf("\nWe are runnint setArray now\n");
    setarr(&marks);
    printf("\nWe are runnint showArray now\n");
    showarr(&marks);

    printf("hello");
    return 0;
}  