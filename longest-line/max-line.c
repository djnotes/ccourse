#include<stdio.h>

#define MAXLINE 1000

int my_getline(char [], int max);
void copy(char [], char []);

int main() {
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    int count;
    while((count = my_getline(line, MAXLINE)) > max){
        if(count > max){
            max = count;
            copy(line, longest);
        }
    }

    if(max > 0){
        printf("Line with max length: %s\n", longest);
    }
    else {
        printf("No line to read");
    }
}

int my_getline(char input[], int max){
    char c;
    int length = 0;
    while((c=getchar()) != EOF && c != '\n' && length < max - 1){
        input[length] = c;
        length++;
    }

    if (c == '\n'){
        input[length] = '\0';
    }
    printf("Line length is: %d\n", length);
    return length;
}

void copy(char from[], char to[]){
    int i = 0;
    while((to[i]=from[i]) != '\0')
    i++;
    printf("New copy: %s\n", to);
}
