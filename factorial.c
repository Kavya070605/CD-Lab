#include<stdio.h>
int main(){
    int fac;
    for(int i=0; i<10; i++) {
    fac=i*fac;
    }
    printf("%d", fac);
    }
