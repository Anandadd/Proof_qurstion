#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    (x>y&&x>z)?printf("%d is greatest",x):((y>z)?printf("%d is greatest",y):printf("%d is greatest",z));
}
/*
enter three no.6
9
7
9 is greatest
Process returned 0 (0x0)   execution time : 5.202 s
Press any key to continue.*/

#include<stdio.h>
main()
{
    int x,y,z,r;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    r=(x>y&&x>z)?x:(y>z)?y:z;
    printf("%d is greatest",r);
}
/*
enter three no.6
8
2
8 is greatest
Process returned 0 (0x0)   execution time : 4.032 s
Press any key to continue.*/

#include<stdio.h>
main()
{
    int x,y,z,r;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    r=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("%d is greatest",r);
}
/*
enter three no.5
4
9
9 is greatest
Process returned 0 (0x0)   execution time : 4.976 s
Press any key to continue.*/
