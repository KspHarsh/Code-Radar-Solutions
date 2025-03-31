#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, count = 0;
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}