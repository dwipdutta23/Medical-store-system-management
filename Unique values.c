#include <stdio.h>

void printUniqueValues(int arr[], int size) {
    int seen[1000] = {0};  // Assuming numbers are within a reasonable range
    printf("Output (Unique Values): ");
    
    for (int i = 0; i < size; i++) {
        if (seen[arr[i]] == 0) {  // If not seen before
            printf("%d ", arr[i]);
            seen[arr[i]] = 1;  // Mark as seen
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printUniqueValues(arr, n);
    return 0;
}

