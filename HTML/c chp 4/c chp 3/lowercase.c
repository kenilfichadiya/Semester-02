#include<stdio.h>
int main()
{
    // 97-122=a-z
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("it is lower case");
    
    }
    else{
        printf("it is not lower case");

    }
    return 0;
}