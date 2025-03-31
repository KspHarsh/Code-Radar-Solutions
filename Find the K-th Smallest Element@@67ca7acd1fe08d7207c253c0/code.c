void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    }
// int kthSmallest(int arr[], int n, int k) {
//     selectionSort(arr, n);
//     return arr[k - 1];
// }

int kthSmallest(int arr[], int n, int k) {
    if (k < 1 || k > n) {
        return -1; // Indicates invalid k (out of range)
    }
    selectionSort(arr, n);
    return arr[k - 1];
}