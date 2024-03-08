#include <stdio.h>

int main()
{
    int c, lastc;

    lastc = -1;
    while((c = getchar()) != EOF){
        if(c != ' ' || lastc != ' '){
            putchar(c);
        }
        lastc = c;
    }

    return 0;
}