#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <stack>
using namespace std;

/*class Solution {
public:
  bool checkvalidstring(string&);

};*/
class AcademicRecord
{
public:
  int maths,science,physics;
  AcademicRecord():maths(0),science(0),physics(0)
  {}
  AcademicRecord(int maths_score,int science_score,int physics_score)
  :maths(maths_score),science(science_score),physics(physics_score)
  {}
  AcademicRecord(const AcademicRecord& obj)
  :maths(obj.maths),science(obj.science),physics(obj.physics)
  {}
  AcademicRecord operator ++()
  {
    maths=maths+10;
    if(maths>100)maths=100;
    physics=physics+10;
    if(physics>100)physics=100;
    science=science+10;
    if(science>100)science=100;
    return *this;
  }
  AcademicRecord operator ++(int)
  {
    AcademicRecord temp=*this;
    maths=maths+10;
    if(maths>100)maths=100;
    physics=physics+10;
    if(physics>100)physics=100;
    science=science+10;
    if(science>100)science=100;
    return temp;
  }
  AcademicRecord operator --()
  {
    maths=maths-20;
    if(maths<0)maths=0;
    physics=physics-20;
    if(physics<0)physics=0;
    science=science-20;
    if(science<0)science=0;
    return *this;
  }
  AcademicRecord operator --(int)
  {
    AcademicRecord temp=*this;
    maths=maths-20;
    if(maths<0)maths=0;
    physics=physics-20;
    if(physics<0)physics=0;
    science=science-20;
    if(science<0)science=0;
    return temp;
  }
  AcademicRecord& operator +=(const int& rhs)
  {
    this->maths+=rhs;
    if(this->maths>100)this->maths=100;
    this->physics+=rhs;
    if(this->physics>100)this->physics=100;
    this->science+=rhs;
    if(this->science>100)this->science=100;
    return *this;
  }
  AcademicRecord& operator -=(const int& rhs)
  {
    this->maths-=rhs;
    if(this->maths<0)this->maths=0;
    this->physics-=rhs;
    if(this->physics<0)this->physics=0;
    this->science-=rhs;
    if(this->science<0)this->science=0;
    return *this;
  }
  AcademicRecord operator =(AcademicRecord& rhs)
  {
    this->maths=rhs.maths;
    this->physics=rhs.physics;
    this->science=rhs.science;
    return *this;
  }
  bool operator ==(AcademicRecord& rhs)
  {
    if(this->maths == rhs.maths && this->physics == rhs.physics && this->science == rhs.science)return true;
    else return false;
  }
  
  string print();
};

#endif