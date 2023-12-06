//circularqueue implementation using array

#include<stdio.h>
int queue[100],front,rear,element,choice,size;

//Enqueue

void enqueue(int element){
    if((rear+1)%size==front){
        printf("Queue is full");
    }
    else if(rear==-1){
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else{
        rear=(rear+1)%size;
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
        front=(front+1)%size;
    }
}

//Display

void display(){
    if(front==-1){
        printf("The queue is empty");
    }
    else if(front<=rear){
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
    else{
        for(int i=front;i<=size-1;i++){
            printf("%d ",queue[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
    
}


//main function

int main(){
    front=-1;
    rear=-1;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    
    printf("Enter the choice :\n1 Enqueue\n2 Dequeue\n3 Display\n4 Exit");
    do{
        printf("\nEnter the choice : ");
        scanf("%d",&choice);
        switch (choice){
        case 1:printf("Enter the element: ");
               scanf("%d",&element);
               enqueue(element);
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:printf("Exiting...");
               break;
        
        
        default:printf("Check your input");
            break;
        }
    } while (choice!=4);
    return 0;
}


// Enter the size of the queue: 5
// Enter the choice :
// 1 Enqueue
// 2 Dequeue
// 3 Display
// 4 Exit
// Enter the choice : 1
// Enter the element: 2

// Enter the choice : 1
// Enter the element: 4

// Enter the choice : 1
// Enter the element: 6

// Enter the choice : 3
// 2 4 6
// Enter the choice : 2
// Dequeued item : 2
// Enter the choice : 2
// Dequeued item : 4
// Enter the choice : 3
// 6
// Enter the choice : 4
// Exiting...


// Algorithm for Circular Queue Operations in C

// Step 1: Start

// Step 2: Declare global variables
//     2.1: Declare global variables - queue (an array to store queue elements), front (front index of the queue),
//          rear (rear index of the queue), element (to store the element to be enqueued), choice (user's choice for operations),
//          and size (size of the queue).

// Step 3: Define enqueue operation
//     3.1: Check if the next position of rear in a circular manner is equal to front (queue is full).
//         3.1.1: If true, print "Queue is full".
//     3.2: If rear is -1 (empty queue), set front and rear to 0 and enqueue the element at the rear.
//     3.3: If the queue is not full and not empty, update rear in a circular manner and enqueue the element at the new rear.

// Step 4: Define dequeue operation
//     4.1: If front is -1 (empty queue), print "Queue is empty".
//     4.2: If front is equal to rear (single element in the queue), print and dequeue the item, then set front and rear to -1.
//     4.3: If the queue has more than one element, print and dequeue the item at the front and update front in a circular manner.

// Step 5: Define display operation
//     5.1: If front is -1 (empty queue), print "The queue is empty".
//     5.2: If front is less than or equal to rear, use a loop to iterate from front to rear and print each element in the queue.
//     5.3: If front is greater than rear (circular situation), use two loops:
//         5.3.1: Iterate from front to size-1 and print each element.
//         5.3.2: Iterate from 0 to rear and print each element.

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
