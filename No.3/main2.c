#include <stdio.h>
#include <string.h>

int main() {
    
    FILE* in = fopen("main.c", "r");
    
    FILE*out = fopen("main.txt", "w+");
    
    char buf[4096];
    int line = 0;
    int ans = -1;
    
    while(fgets(buf, sizeof(buf), in)){
        line++;
        
        if(strstr(buf, "int main()")){
            ans = line;
            break;
        }
    }
    
    fprintf(out, "%d\n", ans);
    
    fclose(in);
    fclose(out);

    return 0;
}
