#include <iostream>
using namespace std;
void swap( float *, float *);   // Prototype of swap()
int main()
{
   float x = 11.1F;
   float y = 22.2F;
      .
      .
      .
 swap( &x, &y );
      .
      .
 // p2 = &y
      .
}
 // p1 = &x
void swap( float *p1, float *p2)
{
   float temp;          // Temporary variable
   temp = *p1;          // At the above call p1 points
   *p1  = *p2;          // to x and p2 to y.
   *p2  = temp;
}
