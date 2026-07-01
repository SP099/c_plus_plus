#include "max_utils.hpp"

int findMax(int a, int b, int c)
{
    if(a >= b && a >=c)
        return a;
    else if(b >= a && b >= c)
        return b;
    return c;
}
