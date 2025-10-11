#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  //從輸入讀取要產生的樂透組數
    srand(1);  //固定亂數種子，否則 Judge 結果會不同
    //開啟作答
    if(n<1){
        n = 1;
    }
    if(n>5){
        n = 5;
    }
    
    FILE* fp;
    
    fp = fopen("lotto.txt", "w+");
    fprintf(fp, "========= lotto649 =========\n");
    
    fprintf(fp, "=====  ");
    
    time_t curtime;
    time(&curtime);
    struct tm *lt = localtime(&curtime);
    char buf[32];
    strftime(buf, sizeof(buf), "%B %02d %Y", lt);
    fprintf(fp, "%s", buf);
    
    char month[64];
    strftime(month, sizeof(month), "%B", lt);
    int len = 16 + strlen(month);
    
    fprintf(fp, "  ");
    for(int i = 0; i < 27-len; i++){
        fprintf(fp, "=");
    }
    fprintf(fp, "\n");
    
    for(int i = 1; i <= n; i++){
        fprintf(fp, "[%d]: ", i);
        
        int used[70] = {0};
        
        for(int j = 0; j < 7; j++){
            int num;
            do{
                num = rand()%69 + 1;
            }
            while(used[num]);
            
            used[num] = 1;
            fprintf(fp, "%02d", num);
            
            if(j != 6){
                fprintf(fp, " ");
            }
        }
        
        fprintf(fp, "\n");
    }
    
    for(int i = n+1; i <= 5; i++){
        fprintf(fp, "[%d]: ", i);
        
        fprintf(fp, "__ __ __ __ __ __ __\n");
        
    }
    fprintf(fp, "========= csie@CGU =========\n");
    
    fclose(fp);
  
    return 0;
}
