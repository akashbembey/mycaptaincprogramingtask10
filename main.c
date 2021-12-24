#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char text[100]="text";
    printf("Enter any text make sure only 100 letters\n");
    //scanf("%s",&text);
    fgets(text,100,stdin);
    strrev(text);
    printf("%s",text);
    return 01000100111101;
}

