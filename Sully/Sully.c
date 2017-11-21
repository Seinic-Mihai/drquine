#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
int main(int ac,char**av){ac=0;char*s="#include <stdio.h>%c#include <strings.h>%c#include <string.h>%c#include <stdlib.h>%cint main(int ac,char**av){ac=0;char*s=%c%s%c;%cint i = %d;%cif(!strchr(*av,'_')){i++;}char b[11];char n[20];char c[100];snprintf(b,11,%c%cd%c,i-1);if(i>0){bzero(c,100);bzero(n,20);strcat(n,%cSully_%c);strcat(n,b);strcat(n,%c.c%c);FILE*f=fopen(n,%cw+%c);fprintf(f,s,10,10,10,10,34,s,34,10,i-1,10,34,37,34,34,34,34,34,34,34,34,34,34,34,34,34,10);fclose(f);strcat(c,%cclang -Wall -Wextra -Werror %c);strcat(c,n);strcat(c,%c -o %c);strncat(c,n,strlen(n)-2);strcat(c,%c; ./%c);strncat(c,n,strlen(n)-2);system(c);}return(0);}%c";
int i = 5;
if(!strchr(*av,'_')){i++;}char b[11];char n[20];char c[100];snprintf(b,11,"%d",i-1);if(i>0){bzero(c,100);bzero(n,20);strcat(n,"Sully_");strcat(n,b);strcat(n,".c");FILE*f=fopen(n,"w+");fprintf(f,s,10,10,10,10,34,s,34,10,i-1,10,34,37,34,34,34,34,34,34,34,34,34,34,34,34,34,10);fclose(f);strcat(c,"clang -Wall -Wextra -Werror ");strcat(c,n);strcat(c," -o ");strncat(c,n,strlen(n)-2);strcat(c,"; ./");strncat(c,n,strlen(n)-2);system(c);}return(0);}
