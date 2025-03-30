void insertionSort(char arr[], char n) {
        for (int i = 1; i < n; i++) {
            for (int j = i; j > 0; j--) {  // Ensure j > 0 to avoid accessing arr[-1]
                if (arr[j] < arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];  // Swap with previous element
                    arr[j - 1] = temp;
                } else {
                    break;
                }
            }
        }
    }
    
    void printArray(char arr[], char n) {
        for (int i = 0; i < n; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
    }