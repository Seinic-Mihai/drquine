#include <stdio.h>
/*
m
*/
#define T
#define S "#include <stdio.h>%c/*%cm%c*/%c#define T%c#define S %c%s%c%c#define M int main(){FILE*f=fopen(%cGrace_kid.c%c,%cw+%c);if(!f){return(1);}fprintf(f,S,10,10,10,10,10,34,S,34,10,34,34,34,34,10,10);fclose(f);return(0);}%cM%c"
#define M int main(){FILE*f=fopen("Grace_kid.c","w+");if(!f){return(1);}fprintf(f,S,10,10,10,10,10,34,S,34,10,34,34,34,34,10,10);fclose(f);return(0);}
M
