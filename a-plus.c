#include<stdio.h>
int add(int a,int b){
    return a + b;
}
int main(){
    int a,b;

    printf("Insert a number\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("The sum of %d and %d is %d\n",a,b,add(a,b));
    return 0;
}