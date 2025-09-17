#include <stdio.h>
#include <string.h>
int main()
{
    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";

    printf("type your word:");
    fgets(noun, sizeof(noun), stdin);

    printf("type your word:");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("type your word:");
    fgets(verb, sizeof(verb), stdin);

    printf("type your word:");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("type your word:");
    fgets(adjective3, sizeof(adjective3), stdin);

    printf("%s\n",noun);
    printf("%s\n",verb);
    printf("%s\n",adjective1);
    printf("%s\n",adjective2);
    printf("%s\n",adjective3);

    return 0;
}