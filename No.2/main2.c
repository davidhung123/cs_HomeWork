#include <stdio.h>

int main() {
    char a[100];  //假設輸入字串長度不超過 100
    scanf("%s", a);  //從標準輸入讀取字串
    //請開始操作變數a
    
    for(int i = 0; a[i]; i+=2){
        
        for(int j = 0; j < a[i+1]- '0'; j++){
            
            printf("%c", a[i]);   
        } 
    }
    return 0;
}
