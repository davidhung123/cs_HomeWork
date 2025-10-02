#include <stdio.h>
int main() {
    int y = 1;
    
    for (int i=1, x=1; i<=9*9; i++, x++) {
        
        printf("%d*%d=%d ", y, x, y*x);
        
        if(x == 9){
            
            x = 0;
            y += 1;
        }
        
        if(i % 9 == 0){
            printf("\n");
        }
        
    }
    return 0;
}
