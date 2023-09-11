#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char text;
    FILE *pokazivacFajla;

    pokazivacFajla=fopen("treciC","w");
    do{
        text=getchar();
        putc(text,pokazivacFajla);
    }
    while(text!='0');
    fclose(pokazivacFajla);
    return 0;
}
