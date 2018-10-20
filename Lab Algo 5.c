#define _XOPEN_SOURCE
#include <stdlib.h>

#include <stdio.h>
#include <cs50.h>
#include <time.h>
int array[5][5];
void initArr();
void printArr();
void swap(int i ,int j);




int main()

{
initArr();

printArr();

printf("\n");
for(int i = 0 ; i < 5 ; i++)
{
    for(int j = 0 ; j < 5 ; j++)
    {
    if(i == 0 && j==0)
    {}
    else if(array[i][0] == array[0][j])
    swap(i , j);
    }
}
printArr();
return 0;
}





void initArr()
{

srand48(time(NULL));
for(int i = 0 ; i < 5;i++)
    {
    for(int j = 0 ; j < 5; j++)
    {
    array[i][j] = drand48()*12;
    }
    }  
}

void printArr()
{

for(int i = 0 ; i < 5;i++)
    {
    for(int j = 0 ; j < 5; j++)
    {
    printf("|%i|" , array[i][j]);
    }
    printf("\n");
    }   
}

void swap(int i  ,int j)
{
for(int n = 0 ; n < 5 ; n++)
{
int temp = array[i][n];
array[i][n] = array[n][j];
array[n][j] = temp;
}
}
