#include <stdio.h>

int main() {
    int a[] = {4, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int choice, num, pos, i;

    while(1) {
        printf("1. Insert\n2. Delete\n3. Update\n4. Select/Read\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter the number to insert: ");
                scanf("%d", &num);
                printf("Enter the position to insert: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n + 1) {
                    printf("Invalid position\n");
                    break;
                }

                for(i = n; i >= pos; i--) {
                    a[i] = a[i - 1];
                }
                a[pos - 1] = num;
                n++;
                break;

            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }

                for(i = pos - 1; i < n - 1; i++) {
                    a[i] = a[i + 1];
                }
                n--;
                break;

            case 3:
                printf("Enter the position to update: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }

                printf("Enter the new number: ");
                scanf("%d", &num);
                a[pos - 1] = num;
                break;

            case 4:
                printf("Array elements are: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
