#include <string>
using namespace std;
extern string line;             // extern declaration
void cutline()
{
    int i = line.size();         // Position after the
    // last character.
    while( i-- >= 0 )
    if(   line[i] != ' '       // If no blank and
    && line[i] != '\t' )    // no tab ->
    break;                   // stop the loop.
    line.resize(++i);            // Fix new length.
}
