#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){

if (argc == 2)
{
string a;

int k=atoi(argv[1]);

a=get_string("plaintext: ");

printf("cyphertext: ");
for(int i=0; i<strlen(a); i++)

if(isalpha(a[i]))
{
    if(islower(a[i]))
        {
            printf("%c",(((a[i]- 97)+ k)%26)+ 97);
        }
    if(isupper(a[i]))
        {
            printf("%c",(((a[i]- 65)+ k)%26)+ 65);
        }
}
else
        {
            printf("%c",a[i]);
        }
    printf("\n");
    }
}
