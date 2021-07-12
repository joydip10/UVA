#include<stdio.h>

int main()
{
    char str[1000];
    char string[1000];
    while(gets(str)){
    int i;
    for(i=0;i<strlen(str);i++)
    {
        string[i]=str[i]-7;
    }
    string[i]=str[i];
    puts(string);
    }
    return 0;
}
