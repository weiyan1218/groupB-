#include<stdio.h>

int add_int(int a,int b)
{
    return a+b;
}

int sub_int(int a,int b)
{
    return a-b;
}


float sub_float(float a,float b)
{
    return a-b;
}

int main()
{
    int a=5;
    int b=10;
    float fa=12.3;
    float fb=5.5;
    printf("%d + %d = %d\n",a,b,add_int(a,b));
    printf("%d - %d = %d\n",a,b,sub_int(a,b));
    printf("%f - %f = %f\n",fa,fb,sub_float(fa,fb));
    return 0;

}