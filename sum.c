#include<stdio.h>

int main() {

    int no;
    printf("enter a no: \n");
    scanf("%d", &no);   

    if(no % 2 == 0) {
        printf("no is even");
    }
    else {
        printf("no is odd");
    }
    return 0;
}
