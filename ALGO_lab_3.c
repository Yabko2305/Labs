#include <stdio.h>
#include <math.h>
long fact(int num);
int ans = 0;

int main(void)
{
    double y ,a  = 0.1 , b = 1 , k=10 , SN = 1 , SE = 1;
    for(double x = a ; x<=b ; x+= (b-a)/k)
    {
        y = acos(x);
        
        for(int n  = 1 ; n < 10 ; n++)
        {
        SN = SN + pow(-1 , n)* (pow(x , 2*n) / fact(2*n));
        }
        int n = 1;
        do
        {
            SE = SE + pow(-1 , n) * (pow(x , 2*n) / fact(2*n));
            n++;
        }       
        while(pow(-1 , n) * (pow(x , 2*n) / fact(2*n)) > 0.0001);
        
        printf("X: %f SN: %f SE : %f Y : %f\n" , x , SN , SE , y);
        
    
    }
    
}



long fact(int num)
{
if(num > 0)
{
return num * fact(num-1);
}

return 1;
}
