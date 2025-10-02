#include <stdio.h>
// #include <math.h>

int main() {
    double pi = 0.0;
    int x = 0;
    double a = 0.0;
    int b = 1;
    long long r;
    
    for(int i = 1;; i += 2){
            
        a = (4.0/i);
        
        pi += a * b;
        
        b = - b;
            
        x++;
        
        r = pi * 100000 + 0.5;
        if(r == 314159){
            break;
        }
        
        // if(fabs(pi - 3.14159) < 5E-06){
        //     break;
        // }
    }
        
    printf("x = %d\n", x);
    return 0;
}
