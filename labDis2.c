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

for(int i = 0 ; i <sizeU ; i++)
{
    for(int j = 0 ; j<sizeU ; j++)
    {
        if(universum[i] == universum[j+1])
        {
        for(int k = j+1 ; k < sizeU ; k++)
        universum[k] = universum[k+1];
        
        sizeU--;
        }
    }

}


for(int i = 0 ; i<size ; i++)
    {
    printf("give me the value for the array's cell #%i : " , i+1);
    array[i] = GetString();
    } 
      
printf("Your array was : ");   
for(int i = 0 ; i < size ; i++)
printf("|%s|" , array[i]);  

printf("\n");  
     
printf("The answer is : ");
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
    if(sizeV == 0)
    printf("||");
    
    printf("\n");
int c = pow(2 , sizeV);
printf("|P| = %i\n" , c);

}
