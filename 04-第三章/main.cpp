#include <iostream>
#include <stdio.h>
#include <math.h>

void printf_list(){
    int i = 0;
    printf("%d,%d",i++,i++);
    //i++,先去执行这一句代码，执行完后再给i+1
}
void scanf_list(){
//    int a,b;
//    scanf("%d%d",&a,&b);
//    printf("%d,%d",a,b);
    char c,g;
    scanf("%c %c",&c,&g);
    printf("%c,%c",c,g);
}
void get_char(){
    char a;
    a = getchar();
    putchar(a);
}

void test_sev(){
    //课本（C程序设计）（谭浩强第五版），p82，t7
    double r = 1.5;
    int h = 3;
    printf("1=圆的周长\n"
           "2=圆的面积\n"
           "3=圆球表面积\n"
           "4=圆球体积\n"
           "5=圆柱体积\n"
           "请输入您要计算的内容：\n");
    int num = 0;
    double fin = 0;
    scanf("%d",&num);
    switch (num) {
        case 1:
            fin = 2*r*M_PI;
            printf("圆的周长为：%.2lf",fin);
            break;
        case 2:
            fin = M_PI*r*r;
            printf("圆的面积为：%.2lf",fin);
            break;
        case 3:
            fin = 4*M_PI*r*r;
            printf("圆球的表面积为：%.2lf",fin);
            break;
        case 4:
            fin = (double)3/4*M_PI*r*r*r;
            printf("圆球的体积为：%.2lf",fin);
            break;
        case 5:
            fin = h*M_PI*r*r;
            printf("圆柱的体积为：%.2lf",fin);
            break;
        default:
            printf("输入非法");
            break;
    }

}
int main() {
//    printf_list();
//    scanf_list();
//    get_char();
    test_sev();
    return 0;
}