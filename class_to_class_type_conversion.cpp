//class to class type:  data type of one class is converted into data type of other class. the one which is getting converted is called and source and the other is said to be destination.
#include<iostream>
using namespace std;
class invent2; //prototype    --- we want to use this in future
class invent1
{
    int code;
    int item;
    float price;
    public:
    //constructor
    invent1(int a, int b, float c)
    {
        code=a;
        item=b;
        price=c;
    }
    //function to display data
    void display()
    {
        cout<<"Code: "<<code<<endl<<"Item: "<<item<<endl<<"Price: "<<price<<endl;
    }
    int getCode(){return code;}
    int getItem(){return item;}
    float getPrice(){return price;}
    operator float(){return (item*price);}  //returning item*price in float
    //a type of operator overloading
    //also converting class to basic
};
class invent2
{
    int code;
    float value;
    public:
    //defualt constructor
    invent2()
    {
        code=0;
        value=0;
    }
    //constructor
    invent2(int x, float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"Code: "<<code<<endl<<"Value: "<<value<<endl;
    }
    //giving an instance of class invent1 as parameter to invent2
    invent2(invent1 p)  // p is an instance/object of the class invent1
    {
        code=p.getCode();  //will return the code of the item as we have defined it in class invent1
        value=p.getItem()*p.getPrice();  //first will get the data of item and price as we defined in the class invent1 and later multiply both and return the value.
    }
};
int main()
{
    invent1 s1(100,5,140.0);   //object of invent1
    invent2 d1;  //object of invent2
    float tv; 
    tv=s1;  // This is an assignment statement that assigns the float value of the object s1 to the variable tv. This invokes the operator float() function of the class invent1.
    d1=s1;  //class to class type conversion  //will call invent2(invent1 p) function and copy the data of invent1 into invent2 // This is an assignment statement that assigns the object of invent1 type to the object of invent2 type. This invokes the invent2(invent1 p) constructor of the class invent2.
    cout<<"Product details-invent1 type\n";
    s1.display();
    cout<<"\n Stock value\n";
    cout<<"Value of TV: "<<tv<<"\n";
    cout<<"Product details- invent2 type\n";
    d1.putdata();
    return 0;
}