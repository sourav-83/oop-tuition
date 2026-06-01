#include <stdio.h>
#include <string.h>


void modify(int*  digit)
{
    *digit = 0;

}



int main()
{
    int array[] = {10,20,30};
    int digit = 9;
    modify(&digit);
    printf("%d",digit);

}