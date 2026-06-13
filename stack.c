#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == MAX - 1) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                    printf("Pushed %d\n", value);
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("Popped %d\n", stack[top--]);
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements: ");
                    for (int i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
