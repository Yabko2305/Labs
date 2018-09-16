#include <stdio.h>
#include <cs50.h>

int main(void)
{
printf("Expression :((!x <=> !y) <=> ((z => (x || y)) => !z)).(False = 0, True = 1)\n");
printf("Enter x please : ");
int x = GetInt();
printf("Enter y please : ");
int y = GetInt();
printf("Enter z please : ");
int z = GetInt();

if(x == 0 && y == 0 )
    {
    printf("The answer is 1 (TRUE)\n");
    }
if((x == 0 && y == 1 )|| (x == 1 && y == 0))
    {
    if(z == 0)
        {
        printf("The answer is 0 (False)\n");
        }
    else if(z == 1)
        {
        printf("The answer is 1 (TRUE)\n");
        }
    }
if(x == 1 && y == 1)
    {
    if(z == 1)
        {
        printf("The answer is 0 (False)\n");
        }
    else if(z == 0)
        {
        printf("The answer is 1 (TRUE)\n");
        }
    }
return 0;
}
