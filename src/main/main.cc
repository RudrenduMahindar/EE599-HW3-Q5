#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  AcademicRecord obj1,obj2;
  obj1.maths=5;
  obj1.science=10;
  obj1.physics=95;
  cout<<"Value before incrementation ::"<<obj1.print()<<endl;
  obj1++;
  cout<<"Value after incrementation ::"<< obj1.print() << endl;
  obj1--;
  cout<< "Value after decrementation ::"<< obj1.print() << endl;
  obj2=obj1;
  cout<< "Value of Object 2::" << obj2.print() << endl;
  obj2+=50;
  cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << obj2.print() << endl;
  obj2-=30;
  cout<<"Value of Object 2 after decreasing marks by 30 for each subject::"<<obj2.print()<<endl;
  obj2=obj1;
  bool check=(obj1==obj2);
  if(check==true)cout<<"objects equal"<<endl;
  else cout<<"objects unequal"<<endl;
  return EXIT_SUCCESS;
}