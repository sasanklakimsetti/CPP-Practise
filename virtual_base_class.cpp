//In diamond problem, instead of using scope resolution we can use virtual base class. 
//As of diamond problem, it will occur when a derived class was derived from two classes that has same base class
//When we call the instance of derived class and the class the value that was in the base class will lead to ambiguity as there are two path to get data of base class. This will lead to ambiguity as the compiler gets confused which class should it choose? SO we use scope resolution to mention that the value belongs to base class
//Instead of scope resolution, we can also use virtual base class to the classes that the derived class got derived. then there is no need to use scope resolution
//using virtual will let the compiler choose the path automatically
#include<iostream>
using namespace std;
class baseClass
{
    public:
    int x;
};
class class1:public virtual baseClass
{
    public:
    int y;
};
class class2:public virtual baseClass
{
    public:
    int z;
};
class derived_class:public class1,public class2
{
    public:
    int sum;
};
int main()
{
    derived_class obj;
    obj.x=10;  //now it will be unambiguous and we don't need to use scope resolution
    obj.y=20;
    obj.z=30;
    obj.sum=obj.x+obj.y+obj.z;
    cout<<obj.sum;
}