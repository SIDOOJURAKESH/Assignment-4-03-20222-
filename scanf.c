//this is how we should use scanf - scanf("%c",&ch);
#include<stdio.h>
int main()
{
int p=10;
scanf("%d",p);//this is bug!!we can't pass value here
		//it has to be an address

return 0;
}
//it is also out of memory access
