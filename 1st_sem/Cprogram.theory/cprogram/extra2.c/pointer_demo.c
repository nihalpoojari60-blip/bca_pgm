#include  <stdio.h>
int main(){
    int x =0;
    int* p;
    p=&x;
    printf("enter the value of x:");
    scanf("%d",& x);

    printf("%d", x);
    printf("%p", &x);
    printf("%p", p);
}