#include <stdio.h>

void dropBomb(void);     /* prototype */

int main()
{
    char x;
    printf("Press Enter to drop the bomb:");
    x = getchar();
    dropBomb();
    printf("Key code %d used to drop bomb.\n",x);
    return(0);
}
void dropBomb()
{
    int x;
    for(x = 20; x > 1; x--)
    {
        puts("      *");
    }
    puts("      BOOM!");
}