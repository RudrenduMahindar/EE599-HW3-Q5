#include "solution.h"
#include <stack>
#include <string>
#include <iostream>
using namespace std;

string AcademicRecord::print()
{
  return "\nMaths::"+to_string(maths)+"\nScience::"+to_string(science)+"\nPhysics::"+to_string(physics);
}

