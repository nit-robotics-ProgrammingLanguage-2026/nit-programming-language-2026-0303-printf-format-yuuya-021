#include <stdio.h>

int main(void) {
    /* 課題0303: カッコの中を埋めて、入力されたdoubleのデータを，小数点以下15桁まで表示するプログラムを書け． */
    double d;
    scanf("%lf" , &d);
    printf("%.15f\n", d); 
    return 0;
}
