#include<iostream>
using namespace std;
class Weight
{
    private:
    int kg;
    public:
    //Default Constructor
    Weight()
    {
        kg=0;
    }
    Weight(int x)
    {
        kg=x;
    }
    void printWeight()
    {
        cout<<"Weight in KG: "<<kg<<endl;
    }
    //prefix unary increment operator overloading
    /*void operator ++()
    {
        ++kg;
    }*/
    Weight operator ++()
    {
        Weight temp;
        temp.kg= ++kg;
        return temp;
    }
    //postfix unary increment operator overloading
    /*void operator ++ (int)
    {
        kg++;
    }*/
    Weight operator ++(int)
    {
        Weight temp;
        temp.kg=kg++;
        return temp;
    }
    //prefix unary decrement operator overloading
    /*void operator--()
    {
        --kg;
    }*/
    Weight operator --()
    {
        Weight temp;
        temp.kg=--kg;
        return temp;
    }
    //postfix unary decrement operator overloading
    /*void operator--(int)
    {
        kg--;
    }*/
    Weight operator --(int)
    {
        Weight temp;
        temp.kg=kg--;
        return temp;
    }
    //Difference b/w prefix and postfix operator overloading is that prefix operator overloading doesn't take any parameter inside the function definition whereas postfix operator overloading takes parameter inside the function definition
};
int main()
{
    Weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();
    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();
    Weight obj1,obj2;
    //obj2 = ++obj1;  -> will throw an error coz the operator overloading has return type void as it has return a value and the operator overloading is going on RHS. so to avoid we need to change the return type to class name from void and do some operations mentioned above in the overloading function
    obj2= ++obj1;  // now it doesn't give any error. will give if function return type in void
    //If we use void return type, it can be done only on the LHS  or we can say without any assignment to it whereas Weight return type can be used both for assignment and without assignment
    obj2.printWeight() ;
    obj1=++obj2;
    obj1.printWeight();
    obj1=--obj2;
    obj1.printWeight();
    obj2=obj1++;
    obj2.printWeight();
    obj2=--obj1;
    obj2.printWeight();
    return 0;
}