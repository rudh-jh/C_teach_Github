#include <iostream>
#include <stdio.h>
#include <math.h>

void printf_list(){
    int i = 0;
    printf("%d,%d",i++,i++);
    //i++,��ȥִ����һ����룬ִ������ٸ�i+1
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
    //�α���C������ƣ���̷��ǿ����棩��p82��t7
    double r = 1.5;
    int h = 3;
    printf("1=Բ���ܳ�\n"
           "2=Բ�����\n"
           "3=Բ������\n"
           "4=Բ�����\n"
           "5=Բ�����\n"
           "��������Ҫ��������ݣ�\n");
    int num = 0;
    double fin = 0;
    scanf("%d",&num);
    switch (num) {
        case 1:
            fin = 2*r*M_PI;
            printf("Բ���ܳ�Ϊ��%.2lf",fin);
            break;
        case 2:
            fin = M_PI*r*r;
            printf("Բ�����Ϊ��%.2lf",fin);
            break;
        case 3:
            fin = 4*M_PI*r*r;
            printf("Բ��ı����Ϊ��%.2lf",fin);
            break;
        case 4:
            fin = (double)3/4*M_PI*r*r*r;
            printf("Բ������Ϊ��%.2lf",fin);
            break;
        case 5:
            fin = h*M_PI*r*r;
            printf("Բ�������Ϊ��%.2lf",fin);
            break;
        default:
            printf("����Ƿ�");
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