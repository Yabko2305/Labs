#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
 printf("Please give me n:");
 int n = GetInt();
 double result = 0;
 
 for(int i = 1 ;i <= n ; i++)
 {
  double a = (3*i-2)*(3*i+1);
  a = 1/a;
  result = result + a;
 }
 printf("Result is : %.5f\n", result);
return 0;  
}
