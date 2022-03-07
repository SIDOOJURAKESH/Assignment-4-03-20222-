#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
    
};
void decmark(struct student stuarr[]);
void display(struct student stu);
int main()
{
    int i;
    struct student stuarr[3]={
                            {"anil",44,33},
                            {"rakesh",45,76},
                            {"rajesh",33,21}
                          };
    decmark(stuarr);
    for(i=0;i<3;i++)
    display(stuarr[i]);
    return 0;
}
void decmark(struct student stuarr[])
{
    int i;
    struct student stu;
    for(i=0;i<3;i++)
    stu.marks=stu.marks-10;
    
}
void display(struct student stu)
{
    printf("name-%s\n",stu.name);
    printf("rollno-%d\n",stu.rollno);
    printf("marks-%f\n",stu.marks);
    
}

