#include <stdio.h>
#include<string.h>

char* revstring( char string[], int start,int end)
{
    if(start >= end)
    {
        return 0;
    }
    char temp = string[start];
    string[start] = string[end];
    string[end] = temp;
    revstring(string , start+1,end-1);
}


int main()
{
    char string1[] ="Hello World";
    int len =strlen(string1);
    string1=revstring(string1 , 0,len - 1);
    printf("Reversed string = %s",string1);
    return 0;
}

