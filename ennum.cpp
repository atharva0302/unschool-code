#include<stdio.h>
int main()
{
    enum bull{bull1,bull2=23,bull3};
    printf("%d,%d,%d", bull1,bull2,bull3);

    return 0;
}
