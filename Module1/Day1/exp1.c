#include <stdio.h>
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n1 , n2 ;
    scanf(“%d%d”,&n1,&n2);
    int m= findMax(n1, n2);
    printf("The biggest number is= %d\n", m);
    return 0;
}
