#include<stdio.h>
void bubbleSort(int arr[],int size);
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
    bubbleSort(arr,n);

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

//function for bubble sort
void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// Output
// Enter the size of the array: 5
// Enter the elements:
// 16
// 1
// 456
// 2
// 6
// The array entered is:
// 16 1 456 2 6
// The sorted array is:
// 1 2 6 16 456

// Algorithm BubbleSort
// Input: An array arr of size n
// Output: Sorted array arr

// 1. Start
// 2. Read n (size of the array) from the user
// 3. Declare an array arr of size n
// 4. Read n elements into the array arr
// 5. Print "The array entered is:"
// 6. Call the printArray function with parameters arr and n
// 7. Call the bubbleSort function with parameters arr and n
// 8. Print "The sorted array is:"
// 9. Call the printArray function with parameters arr and n
// 10. End

// Algorithm printArray
// Input: An array arr of size n
// 1. For i = 0 to n-1
//     a. Print arr[i] followed by a space
// 2. Print a newline character
// 3. End

// Algorithm bubbleSort
// Input: An array arr of size n
// 1. For i = 0 to n-2
//     a. For j = 0 to n-i-2
//         i. If arr[j] > arr[j+1]
//             A. Swap arr[j] and arr[j+1]
// 2. End
// 3. End

