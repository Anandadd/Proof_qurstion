/*#include<stdio.h>
int a,b,c=0;
void ptrfun(void);
int main()
{
    auto int a=1;
    ptrfun();
    a+=1;
    ptrfun();
    printf("\n%d %d",a,b);
}
void ptrfun(void)
{
    register int a=2;
    int b=1;
    a+=++b;
    printf("\n%d %d",a,b);
}
*/

/*
4 2
4 2
2 0
Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.
*/

#include<stdio.h>
int a,b,c=0;
void ptrfun(void);
int main()
{
    static int a=1;
    ptrfun();
    a+=1;
    ptrfun();
    printf("\n%d %d",a,b);
}
void ptrfun(void)
{
    static int a=2;
    int b=1;
    a+=++b;
    printf("\n%d %d",a,b);
}


/*
4 2
6 2
2 0
Process returned 0 (0x0)   execution time : 0.061 s
Press any key to continue.
*/
