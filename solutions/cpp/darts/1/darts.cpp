#include "darts.h"

namespace darts
{
    int score(double x, double y)
    {
        double r2 = x * x + y * y;
        if (r2 > 100.0)
        {
            return 0;
        }
        else if (r2 > 25.0)
        {
            return 1;
        }
        else if (r2 > 1.0)
        {
            return 5;
        }
        else
        {
            return 10;
        }
    }

} // namespace darts

