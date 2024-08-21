// Sum of non repeating values in given array

#include <stdio.h>

int countOccurrences(int a[], int num, int l) {
    int count = 0;
    for (int j = 0; j < l; j++) {
        if (num == a[j]) {
            count++;
        }
    }
    return count;
}

int sumNonRepeating(int a[], int l) {
    int sum = 0;
    for (int i = 0; i < l; i++) {
        if (countOccurrences(a, a[i], l) == 1) {
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int l;
    printf("Enter the length of the array: ");
    scanf("%d", &l);
    int a[l];
    
    // Getting Array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < l; i++) {
        scanf("%d", &a[i]);
    }
    
    int result = sumNonRepeating(a, l);
    printf("Sum of non-repeating values: %d\n", result);
    return 0;
}
