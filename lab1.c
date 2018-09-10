#include <stdio.h>
#include <math.h>

int main(void)
{

double a_f = 1000.0;
double b_f = 0.0001;
float a = 1000.0000;     
int a_int = a*10000;     //Input 
a_int = round(a_int);   //Transformed float into int and rounded to make the calculation as accurate as possible 
float b = 0.0001;
int b_int = b*10000;
b_int = round(b_int);

float result_float_noround = (pow(a-b,3) - (pow(a,3)))/(pow(b,3)- 3*a*pow(b,2) - 3*pow(a,2)*b);
float result_float = (pow(a_int-b_int,3) - (pow(a_int,3)))/(pow(b_int,3)- 3*a_int*pow(b_int,2) - 3*pow(a_int,2)*b_int);
double result_double = (pow(a_f-b_f,3) - (pow(a_f,3)))/(pow(b_f,3)- 3*a_f*pow(b_f,2) - 3*pow(a_f,2)*b_f);  //Formula
 
printf("Result for float is %.30f ; Result for rounded float is %.30f ; Result for double is %.30f\n",result_float_noround, result_float , result_double); //Output
}
