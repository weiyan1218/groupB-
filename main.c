#include<stdio.h>

int add_int(int a,int b)
{
    return a+b;
}

int sub_int(int a,int b)
{
    return a-b;
}


int main()
{
    int a=5;
    int b=10;
    printf("%d + %d = %d\n",a,b,add_int(a,b));
    printf("%d - %d = %d\n",a,b,sub_int(a,b));
    return 0;

}