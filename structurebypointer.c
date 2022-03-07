#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
    
};
void display(struct student *stuarr);
int main()
{
    int i;
    
    struct student stuarr[3]={
                            {"anil",44,33},
                            {"rakesh",45,76},
                            {"rajesh",33,21}
                          };
        struct student *ptr; 
        ptr=stuarr;  
   
    for(i=0;i<3;i++)
    display(&stuarr[i]);
    return 0;
}

void display(struct student *stuarr)
{
    printf("name=%s\n",stuarr->name);
    printf("rollno=%d\n",stuarr->rollno);
    printf("marks=%0.2f\n",stuarr->marks);
    
}
