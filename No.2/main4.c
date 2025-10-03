#include <stdio.h>

int main() {
    char a[100];  //假設輸入字串長度不超過 100
    scanf("%s", a);  //從標準輸入讀取字串
    //請開始操作變數a
    
    char tmp;
    
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    
    for(int i = 0; i < len/2; i++){
        tmp = a[len - 1 - i];
        a[len - 1 - i] = a[i];
        a[i] = tmp;
    }
    
    printf("%s", a);

    return 0;
}
