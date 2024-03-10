## My programing in C
- I like C
- i love C

```c
#include<stdio.h>
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a - b;
}
int main(){
    int a,b;

    printf("Insert a number\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("The sum of %d and %d is %d\n",a,b,add(a,b));
    printf("The sub of %d and %d - %d\n",a,b,sub(a,b));
    return 0;
}
```