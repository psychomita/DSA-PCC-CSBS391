#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insert(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to delete a node with a specific value from the linked list
void delete(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to reverse the linked list
void reverse(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to sort the linked list using bubble sort
void sort(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    struct Node* current = *head;
    struct Node* nextNode;
    int temp;

    while (current != NULL) {
        nextNode = current->next;

        while (nextNode != NULL) {
            if (current->data > nextNode->data) {
                temp = current->data;
                current->data = nextNode->data;
                nextNode->data = temp;
            }
            nextNode = nextNode->next;
        }

        current = current->next;
    }
}

int main() {
    struct Node* head = NULL;
    int ch, value;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Reverse\n");
    printf("5. Sort\n");
    printf("6. Exit\n");
    while (1) 
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter number to be inserted: ");
                scanf("%d", &value);
                insert(&head, value);
                break;
            case 2:
                printf("Enter number to be deleted: ");
                scanf("%d", &value);
                delete(&head, value);
                break;
            case 3:
                display(head);
                break;
            case 4:
                reverse(&head);
                printf("Linked list reversed.\n");
                break;
            case 5:
                sort(&head);
                printf("Linked list sorted.\n");
                break;
            case 6:
                exit(1);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}