#include<stdio.h>
int main()
{
//writing a read only memory raises a segmentation fault
char *s="rakesh";
*s="h";
}
