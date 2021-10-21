#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void quickSort(A,lb, ub){
    int loc;
    if(lb<ub){
        loc=Partition(A,*lb,*ub);
        quickSort(A,lb,loc-1);
        quickSort(A,loc+1,ub);
    }
}
int Partition(A, lb, ub){
    int pivot;
    int start,end;
        pivot=A[lb];
        start=lb;
        end=ub;
        while(start<end){
            while(A[start]<=pivot){
                start++;
            }
            while(A[end]>pivot){
                end--;
            }
            if(start<end){
                swap(A[start],A[end]);
            }
        }

}


int main(){
    int A[]={7,6,10,5,9,2,1,15,7};
    int n=9;
    int lb,ub;
    printArray(A,9);
    quickSort(A,lb,ub);
}