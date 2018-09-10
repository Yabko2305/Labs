#include <stdio.h>
#include <cs50.h>

int main(void)
{
 printf("Give me m pls: ");
 int m = GetInt();
 printf("Give me n pls: ");
 int n = GetInt();
  
 printf("Result for m+--n = %i\n", m+(n-1));
  
   if((m+1) < (n+1))
     {
       printf("m++ <++n : TRUE\n");
     }
   else 
     {
       printf("m++ <++n : FALSE\n");
     }
    
   if((n-1) < (m-1))
     {
       printf("n-- <--m : TRUE\n");
     }  
   else
     {
       printf("n-- <--m : FALSE\n");
     }
}
