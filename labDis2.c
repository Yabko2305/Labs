#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main()
{
int sizeV = 0;
printf("Please give me the size of universum: ");
int sizeU = GetInt();
printf("Give me the sive of array please: ");
int size = GetInt();

string universum[sizeU];
string array[size];

for(int i = 0 ; i<sizeU ; i++)
    {
    printf("give me the value for the universum's cell #%i : " , i+1);
    universum[i] = GetString();
    }

for(int i = 0 ; i<size ; i++)
    {
    printf("give me the value for the array's cell #%i : " , i+1);
    array[i] = GetString();
    }
    
printf("the answer is : ");
for(int i = 0 ; i < sizeU ; i++)
    {
    bool check;
    check = true;
    for(int f = 0 ; f < size ; f++)
        {
        if(strcmp(universum[i] ,array[f]) == 0)
        {
        check = false;
        }
        }
       if(check == true)
       {
       sizeV++;
       printf("|%s|" , universum[i]);
       } 
    }
    printf("\n");
int c = pow(2 , sizeV);
printf("|P| = %i\n" , c);

}
