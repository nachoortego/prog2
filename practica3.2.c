#include <stdio.h>

int main() {
    int vector [5] = {10 , 20 , 30 , 40 , 50};
    int a = 3;
    int * ptr = & a ;
    int * qtr = vector ;

    printf("%d %p NULL %p\n",a,&a,ptr);
    printf("%p %d %p %p\n",&ptr,*ptr,qtr,&qtr);
    printf("%d %p %p %d\n",*qtr,vector,&vector,*vector);

    return 0;
}
