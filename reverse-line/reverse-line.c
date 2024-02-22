#include<stdio.h>

#define MAXSIZE 1000

void reverse(char input[], char output[]);

int my_getline(char buffer[], int limit);


int main(){
    //Line to read
    char line[1000];
    
    //Put the reverse character array
    char reverse_line[1000];


    while(my_getline(line, MAXSIZE) > 0){
        reverse(line, reverse_line);
        printf("Line: %s\n", line);
        printf("Line (Reverse): %s\n\n", reverse_line);        
    }

        

}

int my_getline(char buffer[], int limit){
    char c;
    int i = 0;
    while((c=getchar()) != EOF && c != '\n' && i < limit - 1){
        buffer[i++] = c;
    }
    buffer[i] = '\0';

    return i;    
}


void reverse(char input[], char output[]){
    int count = 0;
    int i = 0;
    while(input[count++] != '\0');
    
    
    count -=2;
    while(count >= 0){
        output[i] = input[count];
        i++;
        count--;
    }
}
