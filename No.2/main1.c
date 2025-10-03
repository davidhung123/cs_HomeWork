#include <stdio.h>

int main() {
    char a[100];  //假設輸入字串長度不超過 100
    scanf("%s", a);  //從標準輸入讀取字串
    //請開始操作變數a
    
    int count = 1;
    int i = 0;
    
    for(; a[i]; i++){
        
        if(a[i] == a [i+1]){
            count++;
        }
        else{
            printf("%c%d", a[i], count);
            count = 1;
        }
        
    }
    
    return 0;
}
