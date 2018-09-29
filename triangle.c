#include <stdio.h>
#include <math.h>

int main()
{
    int j, x, K, y;
    unsigned i;
// Var i is a value of triangle number
    i = 1;
// Var j is quantity of current triangle numbers
    j = 1;
// Var K is minimum requirement quantity of factors for i
    K = 1;
    for (j = 2; K < 50; j++)
    {
        K = 2; // Every iteration K get 2 (obviously, i devided by 1 and i)
        i += j;
        for (y = 2; y <= floor(i / 2); y++)
        {
            if (!(i % y)) K++;
        }
    }
    printf ("#%d triangle number %d have %d factors.", (j-1), i, K);
    return 0;
}