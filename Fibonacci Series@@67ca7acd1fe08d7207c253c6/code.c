// void fibonacciSeries(int n) {
//     int first = 0, second = 1, next;

//     for (int i = 1; i <= n; i++) {
//         if (i == 1) {
//             printf("%d ", first);
//             continue;
//         }
//         if (i == 2) {
//             printf("%d ", second);
//             continue;
//         }
//         next = first + second;
//         printf("%d ", next);
//         first = second;
//         second = next;
//     }
//     printf("\n");


void fibonacciSeries(int n){
    int first = 0 ; second = 1 ,  next;
    for (i=1;i<=n;i++) {
        if(i==1){
            printf("%d ",first);
            continue;
        }
        if(i==2){
            printf("%d ",second);
            continue;
        }
        next = first+second;
        printf("%d ",next);
        first=second;
        second=next;
    }
    printf("\n");
}
