

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack {
    char data[100];
};
void push(struct stack *s,char c){
    int len=strlen(s->data);
    s->data[len]=c;
    s->data[len+1]='\0';
}
void pop(struct stack *s){
    int len=strlen(s->data);
    s->data[len-1]='\0';
}

int validateParantheses(char * string){

    struct stack s;
    s.data[0]='\0';
    int len=strlen(string);
    for(int i=0;i<len;i++){
        if(string[i]=='(' || string[i]=='{'||string[i]=='['){
            push(&s,string[i]);
        }
        else if(string[i]==')' || string[i]=='}'||string[i]==']'){
            if(strlen(s.data)==0){
                return 0;
            }
            else if(string[i]==')' && s.data[strlen(s.data)-1]=='('){
                pop(&s);
            }
            else if(string[i]=='}' && s.data[strlen(s.data)-1]=='{'){
                pop(&s);
            }
            else if(string[i]==']' && s.data[strlen(s.data)-1]=='['){
                pop(&s);
            }
            else{
                return 0;
            }
        }
    }
    if(strlen(s.data)==0){
        return 1;
    }
    else{
        return 0;
    }
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = (char *)malloc(alloc_length);
    while (1) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) {
            break;
        }
        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }
        alloc_length <<= 1;
        data = (char *)realloc(data, alloc_length);
        if (!data) {
            data[0] = '\0';
            break;
        }
    }
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        data = (char *)realloc(data, data_length);
        if (!data) {
            data[0] = '\0';
        }
    } else {
        data = (char *)realloc(data, data_length + 1);
        if (!data) {
            data[0] = '\0';
        } else {
            data[data_length] = '\0';
        }
    }
    return data;
}
int main() {
    char * string = readline();
    printf("%d", validateParantheses(string));
    return 0;
}