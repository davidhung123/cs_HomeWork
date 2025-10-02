#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);  //這邊是程式碼接收變數i的地方
    //請開始操作變數i
    long a, b;
    
    a = i % 10;
    b = i / 1000 % 10;
    
  	int result;
  	
  	result = i + (b-a) + (a-b)*1000;
  	
    printf("%d\n", result);
    return 0;
}
