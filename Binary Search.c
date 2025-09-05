
#include <stdio.h>
int main() {
    int arr[] = {0, 2, 5, 10, 12, 14, 32, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, low = 0, high = n - 1, mid, found = -1;

    printf("Enter element to search: ");
    scanf("%d", &x);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == x) {
            found = mid;
            break;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found != -1)
        printf("Element %d found at index %d (position %d)\n", x, found, found + 1);
    else
        printf("Element %d not found in the array.\n", x);

    return 0;
}
