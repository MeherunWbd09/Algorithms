#include <stdio.h>

int main() {
    int arr[] = {2, 72, 32, 0, 5, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, i, found = -1;

    printf("Enter element to search: ");
    scanf("%d", &x);


    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element %d found at index %d (position %d)\n", x, found, found + 1);
    else
        printf("Element %d not found in the array.\n", x);

    return 0;
}
