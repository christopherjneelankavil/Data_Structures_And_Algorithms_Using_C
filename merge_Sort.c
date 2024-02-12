#include<stdio.h>

void mergeSort(int arr[],int low,int high);

void merge(int arr[],int low,int mid,int high);

void printArray(int arr[],int size);

int main(){
    int n;

    //read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];

    //reading array elements
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //printing array elements
    printf("The array entered is: \n");
    printArray(arr,n);
    //calling bubble sort function
    mergeSort(arr,0,n);

    //printing sorted array
    printf("The sorted array is: \n");
    printArray(arr,n);
    return 0;
}

//function to print the array
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//merge sort function

void mergeSort(int arr[],int low,int high){
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

//merge function

void merge(int arr[],int low,int mid,int high){
    int i=low;
    int x=low;
    int y=mid+1;
    int b[high-low+1];
    while(x<=mid && y<=high){
        if(arr[x]<=arr[y]){
            b[i]=arr[x];
            x++;
        }
        else{
            b[i]=arr[y];
            y++;
        }
        i++;
    }
    while(x<=mid){
        b[i]=arr[x];
        x++;
        i++;
    }
    while(y<=high){
        b[i]=arr[y];
        y++;
        i++;
    }
    for(int k=low;k<=high;k++){
        arr[k]=b[k];
    }
}
