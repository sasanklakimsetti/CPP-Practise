//write a code for the class of animals using some types of animals as objects with properties a)legs b)tail c)breeds 4)color and methods 'Eat'

#include<iostream>
using namespace std;
class animal
{
    //body
    public:
    //data member
    string name;
    int legs,tail; //data members
    string breed,color;
    //member function
    void Eat(string food) //method
    {
        cout<<this->name<<" has "<<legs<<" and "<<tail<<" tail "<<"and it's breed is "<<breed<<" and it's color is "<<color<<" and it eats "<<food<<endl;
    }
};
int main()
{
    //objects of class
    animal dog;
    dog.name="Dog";
    dog.legs=4;
    dog.tail=1;
    dog.breed="Husky";
    dog.color="Brown";
    dog.Eat("Biscuits");

    animal cat;
    cat.name="Cat";
    cat.legs=4;
    cat.tail=1;
    cat.breed="unknown";
    dog.color="Brown";
    cat.Eat("Rat");
}