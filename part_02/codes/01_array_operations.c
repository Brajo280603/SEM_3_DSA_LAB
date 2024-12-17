#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, value, pos;

    while (1) {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            printf("Insert at: 1. Begin 2. End 3. Specific position\nChoose: ");
            scanf("%d", &pos);
            if (pos == 1) {
                for (int i = n; i > 0; i--) arr[i] = arr[i - 1];
                arr[0] = value; n++;
            } else if (pos == 2) {
                arr[n++] = value;
            } else {
                printf("Position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                for (int i = n; i >= pos; i--) arr[i] = arr[i - 1];
                arr[pos - 1] = value; n++;
            }
        } else if (choice == 2) {
            printf("Delete at: 1. Begin 2. End 3. Specific position\nChoose: ");
            scanf("%d", &pos);
            if (pos == 1) {
                for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
                n--;
            } else if (pos == 2) {
                n--;
            } else {
                printf("Position (1 to %d): ", n);
                scanf("%d", &pos);
                for (int i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1];
                n--;
            }
        } else if (choice == 3) {
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
