#include<stdio.h>
int main()
{
    printf("date %s",__DATE__);
    printf("\ntime %s",__TIME__);
    printf("\nFILE %s",__FILE__);
    printf("\nLINE %d",__LINE__);
    printf("\nANSI %d",__STDC__);
    return 0;
}
