#include<stdio.h>
#include<string.h>
 
main(){
    char s[101]; gets(s);
    puts(strstr(s,"0000000")||strstr(s,"1111111")?"YES":"NO");
}