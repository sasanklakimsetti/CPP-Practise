#include<iostream>
using namespace std;
class Car
{
    private:
    string company;
    string model;
    int mielage;
    public:
    Car(string company, string model, int mielage)
    {
        this->company=company;
        this->model=model;
        this->mielage=mielage;
    }
    ~Car(){};
    string Company()
    {
        return company;
    }
    string Model()
    {
        return model;
    }
    int Mielage()
    {
        return mielage;
    }
    virtual void display()
    {
        cout<<"Company: "<<company<<endl<<"Model: "<<model<<endl<<"Mielage: "<<mielage<<endl;
    }
};
class Honda:public Car
{
    public:
    Honda(string company, string model, int mielage):Car(company,model,mielage){};
    ~Honda(){};
    void display() override
    {
        cout<<"Company: "<<Company()<<endl<<"Model: "<<Model()<<endl<<"Mielage: "<<Mielage()<<endl;
    }
};
class Kia:public Car
{
    public:
    Kia(string company, string model, int mielage):Car(company,model,mielage){};
    ~Kia(){};
    void display() override
    {
        cout<<"Company: "<<Company()<<endl<<"Model: "<<Model()<<endl<<"Mielage: "<<Mielage()<<endl;
    }
};
int main()
{
    Kia k("Kia","Seltos",40);
    Honda h("Honda","Amaze",50);
    k.display();
    h.display();
    return 0;
}