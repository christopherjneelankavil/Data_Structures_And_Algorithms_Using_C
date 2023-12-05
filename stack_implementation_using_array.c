//stack implementation using array

#include<stdio.h>
int top,stack[100],size,element,choice;

//push

void push(){
    printf("Enter the element to be pushed : ");
    scanf("%d",&element);
    if(top>=size-1){
        printf("\nStack Overflow\n");
    }
    else{
        top++;
        stack[top]=element;
    }
}

//pop

void pop(){
    if(top==-1){
        printf("\nStack Underflow\n");
    }
    else{
        printf("Poped element %d",stack[top]);
        top--;
    }
}

//display

void display(){
    if(top==-1){
        printf("\nStack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}

//main function

int main(){
    top=-1;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    printf("\nEnter the choice:\n1 Push\n2 Pop\n3 Display\n4 Exit");
    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            display();
            break;
        case 4 :
            printf("Exiting...");
            break;
        default:
            printf("Check your input");
            break;
        }
    }while(choice!=4);
    return 0;
}

// Output

// Enter the size of the array: 3

// Enter the choice:
// 1 Push
// 2 Pop
// 3 Display
// 4 Exit
// Enter your choice:1
// Enter the element to be pushed : 2

// Enter your choice:1
// Enter the element to be pushed : 3

// Enter your choice:1
// Enter the element to be pushed : 4

// Enter your choice:1
// Enter the element to be pushed : 5

// Stack Overflow

// Enter your choice:3
// 4 3 2
// Enter your choice:2
// Poped element 4
// Enter your choice:2
// Poped element 3
// Enter your choice:2
// Poped element 2
// Enter your choice:2

// Stack Underflow

// Enter your choice:4
// Exiting...


// Algorithm for Stack Operations in C

// Step 1: Start

// Step 2: Declare global variables
//     2.1: Declare global variables - top (to track the top of the stack), stack (an array to store stack elements),
//          size (size of the stack), element (to store the element to be pushed), and choice (user's choice for operations).

// Step 3: Define push operation
//     3.1: Prompt the user to enter the element to be pushed.
//     3.2: Check if the stack is full (top >= size-1).
//         3.2.1: If true, print "Stack Overflow".
//         3.2.2: If false, increment top and push the element onto the stack.

// Step 4: Define pop operation
//     4.1: Check if the stack is empty (top == -1).
//         4.1.1: If true, print "Stack Underflow".
//         4.1.2: If false, print the popped element and decrement top.

// Step 5: Define display operation
//     5.1: Check if the stack is empty (top == -1).
//         5.1.1: If true, print "Stack is empty".
//         5.1.2: If false, use a loop to iterate from top to 0 and print each element in the stack.

// Step 6: Main function
//     6.1: Initialize top to -1.
//     6.2: Prompt the user to enter the size of the stack.
//     6.3: Display a menu with choices: push, pop, display, and exit.
//     6.4: Use a do-while loop to repeatedly ask for user input until the choice is to exit.
//         6.4.1: Prompt the user to enter a choice.
//         6.4.2: Use a switch statement to perform the corresponding operation based on the user's choice.
//             - Case 1: Call the push() function.
//             - Case 2: Call the pop() function.
//             - Case 3: Call the display() function.
//             - Case 4: Print "Exiting...".
//             - Default: Print "Check your input".
//     6.5: End the program.

// Step 7: End
