# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main (void)
{
    int a = 500;
    int b = 250;
    int c = 200;
    int d = 100;
    int e =50;
    int f = 25;
    int g =10;
    int h = 5;
int n = 0;
    int counter = 0;
    do
    {
        n = get_int("amount : ");
    }
    while (n<0);

    while (n>=a)
    {
        counter++;
        n=n-a;
    }
    while (n>=b)
    {
        counter++;
        n=n-b;
    }

    while (n>=c)
    {
        counter++;
        n=n-c;
    }
    while (n>=d)
    {
        counter++;
        n=n-d;

    }
    while (n>=e)
    {
        counter++;
        n=n-e;
    }
    while (n>=f)
    {
        counter++;
        n=n-f;
    }
    while (n>=g)
    {
        counter++;
        n=n-g;
    }
    while (n>=h)
    {
        counter++;
        n=n-h;
    }
    {
printf("the max coins is %i \n", counter);
    }

}
