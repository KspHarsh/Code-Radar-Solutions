// // Your code here...
// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     int arr[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int candidate = arr[0], count = 1;

//     for (int i = 1; i < N; i++) {
//         if (arr[i] == candidate) count++;
//         else count--;
//         if (count == 0) {
//             candidate = arr[i];
//             count = 1;
//         }
//     }

//     count = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] == candidate) count++;
//     }

//     if (count > N / 2) printf("%d\n", candidate);
//     else printf("-1\n");

//     return 0;
// }


#include <stdio.h>

int main() {
    int N, candidate, count = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++) {
        if (count == 0) candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }

    count = 0;
    for (int i = 0; i < N; i++) if (arr[i] == candidate) count++;
    printf(count > N / 2 ? "%d\n" : "-1\n", candidate);

    return 0;
}