#include <iostream>
#include <stdio.h>

void test_if(){
    int a = 2;
    if(a==0){
        printf("��һif���");
    }
    else if(a==2){
        printf("if...else if...else�ṹ");
    }
    else{
        printf("if...else�ṹ");
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
            printf("��");
            break;
    }
}

void test(){
    //P107,t2
    /*
     * 2012��A�����������1��
     * ��α�ʾ��ͼ٣�����������ʾ��ͼ�
     * ����жϣ�������������=0�ģ���ô��������Ǵ���٣���֮�������㣬�������
     */
    //P109 ,t8
    //��һ���ٷ��Ƴɼ�������ȼ�
    int sc = 0;
    do {
        printf("����ɼ����ٷ��ƣ���");
        scanf("%d",&sc);
    }
    while (sc<0||sc>100);
    if (sc>=90){
        printf("�ȼ�ΪA\n");
    }else if(sc>=80&&sc<=89){
        printf("�ȼ�ΪB\n");
    }else if(sc>=70&&sc<=79){
        printf("�ȼ�ΪC\n");
    }else if(sc>=60&&sc<=69){
        printf("�ȼ�ΪD\n");
    }else{
        printf("�ȼ�ΪE\n");
    }
}
int main() {
//    test_if();
//    test_swi();
    test();
    return 0;
}
