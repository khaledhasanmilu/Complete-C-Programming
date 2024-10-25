#include <stdio.h>

int main()
{
    int numBooks, totalTime;
    scanf("%d %d", &numBooks, &totalTime);

    int bookTime, sum = 0, count = 0;

    for (int i = 0; i < numBooks; i++)
    {
        scanf("%d", &bookTime);
        if (sum + bookTime <= totalTime)
        {
            sum += bookTime;
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
