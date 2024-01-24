//UNDERSTANDING CONSTRUCTOR AND DESTRUCTOR IN CPP
#include<iostream>
#include<string>
using namespace std;
class Cars
{
    private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;
    public:
    Cars(){
        company_name="Kia";
        cout<<"Default Constructor called";
    }
    //Parameterized Constructor
    Cars(string mname,string ftype,float m, float p){
        cout<<endl<<"Parameterized Constructor called";
        model_name = mname;
        fuel_type  = ftype;
        mileage    = m;
        price = p;
    }
    //Copy COnstructor
    Cars(Cars& obj)
    {
        cout<<"Copy constructor called";
        company_name=obj.company_name;
        model_name   =obj.model_name;
        fuel_type    =obj.fuel_type;
        mileage      =obj.mileage;
        price        =obj.price;
    }
    void setData(string cname, string mname,string ftype, float m, double p)
    {
        company_name=cname;
        model_name = mname;
        fuel_type  = ftype;
        mileage    = m;
        price = p;
    }
    void displayData()
    {
        cout<<endl<<"Car Properties"<<endl<<"Company Name: "<<company_name<<endl<<"Model Name: "<<model_name<<endl<<"Fuel Type: "<<fuel_type<<endl<<"Mileage: "<<mileage<<endl<<"Price: "<<price<<endl<<endl;
    }
    //Destructor
    ~Cars()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Cars car1,car2("Carnival","Petrol",20,150000);
    car1.setData("Kia","Seltos","Petrol",15.5,2500000);
    car1.displayData();
    car2.displayData();
    Cars car3=car2;  //copying data of car1 to car3 using copy constructor
    car3.displayData();
}
