#include<stdio.h>
void selectionSort(int arr[],int size);
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
    //calling selectionsort sort function
    selectionSort(arr,n);

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

//function for selection sort
void selectionSort(int arr[],int size){
    for(int i=0;i<=size-2;i++){
        for(int j=i+1;j<=size-1;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

// Output
// Enter the size of the array: 5
// Enter the elements:
// 12
// 10
// 8
// 90
// 2
// The array entered is:
// 12 10 8 90 2
// The sorted array is:
// 2 8 10 12 90

// Algorithm SelectionSort
// Input: An array arr of size n
// Output: Sorted array arr

// 1. Start
// 2. Read n (size of the array) from the user
// 3. Declare an array arr of size n
// 4. Read n elements into the array arr
// 5. Print "The array entered is:"
// 6. Call the printArray function with parameters arr and n
// 7. Call the selectionSort function with parameters arr and n
// 8. Print "The sorted array is:"
// 9. Call the printArray function with parameters arr and n
// 10. End

// Algorithm printArray
// Input: An array arr of size n
// 1. For i = 0 to n-1
//     a. Print arr[i] followed by a space
// 2. Print a newline character
// 3. End

// Algorithm selectionSort
// Input: An array arr of size n
// 1. For i = 0 to n-2
//     a. For j = i+1 to n-1
//         i. If arr[i] > arr[j]
//             A. Swap arr[i] and arr[j]
// 2. End
// 3. End
