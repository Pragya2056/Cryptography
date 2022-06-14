#include <stdio.h>

int power(int x, unsigned int y, int p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int x = 2;
    int y = 5;
    int p = 13;
    printf("%d ^ %d mod %d = %u",x,y,p, power(x, y, p));
    return 0;
}
