#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <cs50.h>

int main()
{
srand48(time(NULL));
int num = drand48()*14;
int array[1000];

    for(int i = 0 ; i < num ; i++)
    {
    array[i] = drand48()*10;
    printf("|%i|" , array[i]);
    
    }
    printf("\n");
printf("Give me the num pls ");
int k = GetInt();
int key = 80000000;

    for(int i = 0 ; i < num ; i++)
    {
        if(array[i] == 0)
        {
        key = i;
        }

    }
    
    if(key !=80000000 )
    {
    for(int i = key ; i < num ; i++)
    {
    if(i == num - 1)
    array[i] = 0;
    else
    array[i] = array[i+1]; 
    }
    }
    else
    num++;
    
for(int i = num-1 ; i > k-1 ; i--)
array[i] = array[i-1] ;

array[k] =100;   
    



for(int i = 0 ; i < num ; i++)
    {
    printf("|%i|" , array[i]); 
    }
    printf("\n");
}
