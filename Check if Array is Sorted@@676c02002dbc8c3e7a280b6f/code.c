// // Your code here...
// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     int arr[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int isSorted = 1;

//     for (int i = 1; i < N; i++) {
//         if (arr[i] < arr[i - 1]) {
//             isSorted = 0;
//             break;
//         }
//     }

//     if (isSorted) {
//         printf("Sorted\n");
//     } else {
//         printf("Not Sorted\n");
//     }

//     return 0;
// }


void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            for (int j = i; j > 0; j--) {  
                if (arr[j] < arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1]; 
                    arr[j - 1] = temp;
                } else {
                    break;
                }
            }
        }
    }
    void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }