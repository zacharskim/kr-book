#include <stdio.h> 

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, state;

    state = OUT;
    nl = nw  = 0;
    while ((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            printf("\n");
        } else if(state == OUT){
            state = IN;
            putchar(c);
            ++nw;
        } else if(state == IN){
            putchar(c);
        }
    }
}