#include <stdio.h> //预处理指令 标准的输入输出流
#include <math.h>

#include "min.h"    //预处理指令

#define MAX 100 //宏定义

int a = 1; //全局声明

int max(int x,int y){
    return x>y;
}

int main() {
    int b;
    //C语言本身不提供输入输出语句
    //本函数中的输入输出语句是由stdio标准库提供
    //b = 2
    scanf("%d",&b); //%d int %f float %c char
    //b = 0
    if (max(a,b)){
        printf("a > b");
    }else {
        printf("a < b");
    }
    return 0;
}
