//queue implementation using array

#include<stdio.h>
int queue[100],front,rear,size,choice,element;

//Enqueue

void enqueue(int element){
    if(rear>=size-1){
        printf("Queue is full");
    }
    else if(rear==-1){
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else{
        rear++;
        queue[rear]=element;
    }
}

//Dequeue

void dequeue(){
    if(front==-1){
        printf("Queue is empty");
    }
    else if(front==rear){
        printf("Dequeued item : %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("Dequeued item : %d",queue[front]);
        front++;
    }
}

//Display
void display(){
    if(front==-1){
        printf("The queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    front=-1;
    rear=-1;
    printf("enter the size of the queue : ");
    scanf("%d",&size);
    printf("Enter the choice\n1 enqueue\n2 dequeue\n3 display\n4 Exit");
    do{
        printf("\nEnter the choice : ");
        scanf("%d",&choice);
        switch (choice){
            case 1:printf("Enter the element to enqueue : ");
                scanf("%d",&element);
                enqueue(element);
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:printf("Exiting...");
                break;
            
            default:
                printf("Check your input");
                break;
        }
    } while (choice!=4);
    return 0;
    
}


// Output

// enter the size of the queue : 5
// Enter the choice
// 1 enqueue
// 2 dequeue
// 3 display
// 4 Exit
// Enter the choice : 1
// Enter the element to enqueue : 4

// Enter the choice : 1
// Enter the element to enqueue : 7

// Enter the choice : 3
// 4 7
// Enter the choice : 2
// Dequeued item : 4
// Enter the choice : 3
// 7
// Enter the choice : 4
// Exiting...


// Algorithm for Queue Operations in C

// Step 1: Start

// Step 2: Declare global variables
//     2.1: Declare global variables - queue (an array to store queue elements), front (front index of the queue),
//          rear (rear index of the queue), size (size of the queue), choice (user's choice for operations), and element (to store the element to be enqueued).

// Step 3: Define enqueue operation
//     3.1: If rear is greater than or equal to size - 1, print "Queue is full".
//     3.2: If rear is -1 (empty queue), set front and rear to 0 and enqueue the element at the rear.
//     3.3: If the queue is not full and not empty, increment rear and enqueue the element at the rear.

// Step 4: Define dequeue operation
//     4.1: If front is -1 (empty queue), print "Queue is empty".
//     4.2: If front is equal to rear (single element in the queue), print and dequeue the item, then set front and rear to -1.
//     4.3: If the queue has more than one element, print and dequeue the item at the front and increment front.

// Step 5: Define display operation
//     5.1: If front is -1 (empty queue), print "The queue is empty".
//     5.2: If the queue is not empty, use a loop to iterate from front to rear and print each element in the queue.

// Step 6: Main function
//     6.1: Initialize front and rear to -1.
//     6.2: Prompt the user to enter the size of the queue.
//     6.3: Display a menu with choices: enqueue, dequeue, display, and exit.
//     6.4: Use a do-while loop to repeatedly ask for user input until the choice is to exit.
//         6.4.1: Prompt the user to enter a choice.
//         6.4.2: Use a switch statement to perform the corresponding operation based on the user's choice.
//             - Case 1: Call the enqueue() function.
//             - Case 2: Call the dequeue() function.
//             - Case 3: Call the display() function.
//             - Case 4: Print "Exiting...".
//             - Default: Print "Check your input".
//     6.5: End the program.

// Step 7: End
