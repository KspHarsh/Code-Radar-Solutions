void bubbleSort(int arr[],int n){

    for (int i<0;i<n;i++){
        for (int j=i;j>0;j--){
            if (arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                a[j-1]=temp;
            }else {
                break;
            }
        }
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}