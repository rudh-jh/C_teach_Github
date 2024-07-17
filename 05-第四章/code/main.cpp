#include <iostream>
#include <stdio.h>

void test_if(){
    int a = 2;
    if(a==0){
        printf("单一if语句");
    }
    else if(a==2){
        printf("if...else if...else结构");
    }
    else{
        printf("if...else结构");
    }
}

void test_swi(){
    int a = 1;
    char c = 'a';
    switch (c) {
        case 'b':
            printf("a = 0");
            break;
        case 97:
            printf("a = 1");
            break;
        default:
            printf("无");
            break;
    }
}

void test(){
    //P107,t2
    /*
     * 2012年A卷，第三大题第1题
     * 如何表示真和假：以整数来表示真和假
     * 如何判断？如果这个量他是=0的，那么这个量就是代表假；反之，若非零，则代表真
     */
    //P109 ,t8
    //给一个百分制成绩，输出等级
    int sc = 0;
    do {
        printf("输入成绩（百分制）：");
        scanf("%d",&sc);
    }
    while (sc<0||sc>100);
    if (sc>=90){
        printf("等级为A\n");
    }else if(sc>=80&&sc<=89){
        printf("等级为B\n");
    }else if(sc>=70&&sc<=79){
        printf("等级为C\n");
    }else if(sc>=60&&sc<=69){
        printf("等级为D\n");
    }else{
        printf("等级为E\n");
    }
}
int main() {
//    test_if();
//    test_swi();
    test();
    return 0;
}
