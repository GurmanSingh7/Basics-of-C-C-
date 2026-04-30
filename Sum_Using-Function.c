#include<stdio.h>
int sum(int a,int b){
    int c = a+b;
    return c;
}
int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    printf("%d", sum(a,b));
    return 0;
}