#include<stdio.h>

int main()
{
    int i=10;
    void *p=&i;
    printf("hahaahah:%f",*(float*)p);
    return 0;
}

