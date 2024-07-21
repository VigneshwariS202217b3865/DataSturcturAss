#include <stdio.h>
#include <stdlib.h> // for exit() function
#include <conio.h> // for getch() function
#define N 5

void main() {
    int queue[N], ch = 1, front = 0, rear = 0, i, j = 1;
    // clrscr(); // Uncomment if you are using Turbo C/C++ or similar
    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");
    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (rear == N) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter no %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;
            case 2:
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front++]);
                }
                break;
            case 3:
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong Choice: Please see the options");
                break;
        }
    }
    getch();
}