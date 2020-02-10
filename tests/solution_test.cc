#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(IncrementTest, Notabove100) {
  AcademicRecord obj(50,60,70);//math,sci,phy
  obj+=100;
  int max_marks=100;
  string actual = obj.print();
  string expected = "\nMaths::"+to_string(max_marks)+"\nScience::"+to_string(max_marks)+"\nPhysics::"+to_string(max_marks);
  EXPECT_EQ(expected, actual);
}
TEST(DecrementTest, Notbelow0) {
  AcademicRecord obj(40,30,20);
  obj-=100;
  int min_marks=0;
  string actual = obj.print();
  string expected = "\nMaths::"+to_string(min_marks)+"\nScience::"+to_string(min_marks)+"\nPhysics::"+to_string(min_marks);
  EXPECT_EQ(expected, actual);
}
TEST(CopyobjectTest, Equalsfirstobject)
{
  AcademicRecord obj1(40,30,20);
  AcademicRecord obj2;
  obj2=obj1;
  string actual = obj2.print();
  string expected = "\nMaths::"+to_string(obj1.maths)+"\nScience::"+to_string(obj1.science)+"\nPhysics::"+to_string(obj1.physics);
  EXPECT_EQ(expected, actual);
}
TEST(DecrementOperatorTest, Equalsreturnofprint)
{
  AcademicRecord obj(40,30,20);
  obj--;
  string actual = obj.print();
  //int increase=10,decrease=20;
  string expected = "\nMaths::"+to_string(20)+"\nScience::"+to_string(10)+"\nPhysics::"+to_string(0);
  EXPECT_EQ(expected, actual);
}
TEST(IncrementOperatorTest, Equalsreturnofprint)
{
  AcademicRecord obj(40,30,20);
  obj++;
  string actual = obj.print();
  //int increase=10,decrease=20;
  string expected = "\nMaths::"+to_string(50)+"\nScience::"+to_string(40)+"\nPhysics::"+to_string(30);
  EXPECT_EQ(expected, actual);
}
TEST(PlusEqualOperatorTest, Equalsreturnofprint)
{
  AcademicRecord obj(40,30,20);
  obj+=20;
  string actual = obj.print();
  //int increase=10,decrease=20;
  string expected = "\nMaths::"+to_string(60)+"\nScience::"+to_string(50)+"\nPhysics::"+to_string(40);
  EXPECT_EQ(expected, actual);
}
TEST(MinusEqualOperatorTest, Equalsreturnofprint)
{
  AcademicRecord obj(40,30,20);
  obj-=20;
  string actual = obj.print();
  //int increase=10,decrease=20;
  string expected = "\nMaths::"+to_string(20)+"\nScience::"+to_string(10)+"\nPhysics::"+to_string(0);
  EXPECT_EQ(expected, actual);
}
TEST(ComparisonTest, ReturnsTrue)
{
  AcademicRecord obj1(40,30,20),obj2;
  obj2=obj1;
  bool actual=(obj2==obj1);
  bool expected=true;
  EXPECT_EQ(expected, actual);
}
