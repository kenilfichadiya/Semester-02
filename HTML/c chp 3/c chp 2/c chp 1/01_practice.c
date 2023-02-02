#include<stdio.h>
int main()
{
    int length,breadth;
    int area=length*breadth;
    printf("enter length of rectangle\n");
    scanf("%d",&length);
    printf("enter breadth of rectangle\n");
    scanf("%d",&breadth);
    printf("the area of rectangle is%d",length*breadth);
    return 0;
}