#include<stdio.h>
int main()
{
int arr[10];
arr[11]=100; //this is illegal!! core dump
             //in this we trying to acces memory location which dosent belong to u

return 0;
}
