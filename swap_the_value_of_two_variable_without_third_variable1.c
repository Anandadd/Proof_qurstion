#include<stdio.h>
main()
{
    int x,y;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    printf("x is %d \ny is %d\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d",x,y);
}

/*enter two no.5
8
x is 5 
y is 8

 after interchange
x is 8
y is 5
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/