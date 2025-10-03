#include <stdio.h>

int main() {
    char a[10];
    scanf("%s", a);  //從標準輸入讀取字串
    //請開始操作變數a
    
    int v = 0;
    
    for(int i = 0; a[i]; i++){
        v = (v << 1) | (a[i] - '0');
    }
  
	printf("%X\n", v);
    return 0;
}
