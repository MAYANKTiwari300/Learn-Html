#include <stdio.h>

printHW(int count);

int main()
{

    printHW(5);
    //(Hello world)

    return 0;
}

printHW(int count)
{
    if (count == 0)
    {
        return;
    }

    printf("Hello World \n");

    printHW(count - 1);
}
