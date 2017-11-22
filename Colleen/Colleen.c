#include <stdio.h>
/*
M
*/
int d(){return(0);}int main(){
/*
s
*/
char*s="#include <stdio.h>%c/*%cM%c*/%cint d(){return(0);}int main(){%c/*%cs%c*/%cchar*s=%c%s%c;printf(s,10,10,10,10,10,10,10,10,34,s,34,10);return(d());}%c";printf(s,10,10,10,10,10,10,10,10,34,s,34,10);return(d());}
