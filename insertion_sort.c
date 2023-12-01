#include<stdio.h>
void insertionSort(int arr[],int size);
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
    insertionSort(arr,n);

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

//function for insertion sort

void insertionSort(int arr[],int size){
    for(int i=1;i<=size-1;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

//Output

// Enter the size of the array: 5
// Enter the elements:
// 12
// 1
// 45
// 234
// 3
// The array entered is:
// 12 1 45 234 3
// The sorted array is:
// 1 3 12 45 234

// Algorithm InsertionSort
// Input: An array arr of size n
// Output: Sorted array arr

// 1. Start
// 2. Read n (size of the array) from the user
// 3. Declare an array arr of size n
// 4. Read n elements into the array arr
// 5. Print "The array entered is:"
// 6. Call the printArray function with parameters arr and n
// 7. Call the insertionSort function with parameters arr and n
// 8. Print "The sorted array is:"
// 9. Call the printArray function with parameters arr and n
// 10. End

// Algorithm printArray
// Input: An array arr of size n
// 1. For i = 0 to n-1
//     a. Print arr[i] followed by a space
// 2. Print a newline character
// 3. End

// Algorithm insertionSort
// Input: An array arr of size n
// 1. For i = 1 to n-1
//     a. Set temp = arr[i]
//     b. Set j = i-1
//     c. While j >= 0 and arr[j] > temp
//         i. Set arr[j+1] = arr[j]
//         ii. Decrement j by 1
//     d. Set arr[j+1] = temp
// 2. End

