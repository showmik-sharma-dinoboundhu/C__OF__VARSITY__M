#include<stdio.h>
void fun1(){
    fun2();
    printf("Body of Fun1\n");
}
void fun2(){
    printf("Body of Fun2\n");
}
int main(){
    fun1();
    printf("Body of Main");
}
