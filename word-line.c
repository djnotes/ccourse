#include<stdio.h>


int main(){
    char c;
    
    while((c=getchar()) != EOF){ 
       if(c == ' ' || c == '\t' || c == '\n'){
        putchar('\n');
       }
       else {
        putchar(c);
       }     
    }

    
}