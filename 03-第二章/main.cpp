#include <stdio.h>
// �ж�����
//�ܱ�4���������Ҳ��ܱ�100�����������ܱ�400����
void year(){
    int y;
    printf("��������ݣ�");
    scanf("%d",&y);
    if ((y%4 == 0 && y%100 != 0 ) || y%400 == 0){
        printf("%d������\n",y);
    }else{
        printf("%d��������\n",y);
    }
}

// �ж�����
// �����ǳ����������1����������С��������������
void num(){
    int n;
    printf("���������֣�");
    scanf("%d",&n);
    int flag = 0;
    for (int i = 2; i < n; ++i) {
        if (n%i==0){
            flag = 1;
            printf("%d��������\n",n);
            break;
        }
    }
    if (!flag){
        printf("%d������\n",n);
    }
}

int main() {
    year();
    num();
    return 0;
}
