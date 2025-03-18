// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}