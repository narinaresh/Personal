#include<stdio.h>

int mul(int a,int b);
int div(int a,int b);

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int main(){

    int a=1,b=3;
    printf("%d\t",add(a,b));
    printf("%d",mul(a,b));

}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}