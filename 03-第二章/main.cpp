#include <stdio.h>
// 判断闰年
//能被4整除，并且不能被100整除，或者能被400整除
void year(){
    int y;
    printf("请输入年份：");
    scanf("%d",&y);
    if ((y%4 == 0 && y%100 != 0 ) || y%400 == 0){
        printf("%d是闰年\n",y);
    }else{
        printf("%d不是闰年\n",y);
    }
}

// 判断质数
// 质数是除了他自身和1，其他比他小的数都不能整除
void num(){
    int n;
    printf("请输入数字：");
    scanf("%d",&n);
    int flag = 0;
    for (int i = 2; i < n; ++i) {
        if (n%i==0){
            flag = 1;
            printf("%d不是质数\n",n);
            break;
        }
    }
    if (!flag){
        printf("%d是质数\n",n);
    }
}

int main() {
    year();
    num();
    return 0;
}
