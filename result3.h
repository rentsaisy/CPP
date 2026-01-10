#ifndef  _RESULT_
#define  _RESULT_
#include "DayTime.h"            // Class DayTime
class Result
{
private:
double val;
const  DayTime time;
// Declaration of static members:
static double min, max;    // Minimum, maximum
static bool first; // true, if it is the first value.
void setMinMax(double w);  // private function
public:
Result(double w, const DayTime& z = currentTime());
Result(double w, int hr, int min, int sec);
// ...  The other member functions as before
};
#endif  //  _RESULT_