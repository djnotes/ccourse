#include<stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int counts[10];
    
    nwhite = nother = 0;
    while((c=getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ++counts[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("Stats: \n");
    printf("Digits:\n");
    for(i = 0; i<10; i++){
        printf("%c: %5d\n",'0' + i ,counts[i]);
    }

    printf("Whitespaces: %5d\n", nwhite);
    printf("Other: %5d\n", nother);
    

}