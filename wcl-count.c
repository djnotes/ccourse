#include<stdio.h>

#define IN 0
#define OUT 1

int main(){
    int nw,nc,nl,state;
    nc = nw = nl = 0;
    char c;

    state = IN;
    while((c=getchar()) != EOF){
        nc++;
        if(c == '\n'){
            nl++;
        }
        if (c == '\n' || c == ' ' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            nw++;
        }
    }
    
    printf("characters: %4d, words: %4d, lines: %4d\n", nc, nw, nl);
    return 0;
}