#include<bits/stdc++.h>
using namespace std;
class setAbstract{
    virtual void AskForPromotion()=0;
};
class Employee:setAbstract{
protected:
    string name;
    int age;
public:
    void setName(string s)
    {
        this->name=s;
    }
    string getName()
    {
        return name;
    }

    void setAge(int n)
    {
        this->age=age;
    }
    int getAge()
    {
        return age;
    }
    Employee(string x,int y)
    {
        this->name=x;
        this->age=y;
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }

    void AskForPromotion()
    {
        if(age>=30)
            cout<<"you are promoted!!"<<endl;
        else
            cout<<"Not promoted!!"<<endl;
    }

};
class Developer:public Employee{
public:
    string preferredLanguage;
    Developer(string name, int age,string preferredLanguage)
    :Employee(name,age)
    {
        this->preferredLanguage=preferredLanguage;
    }
    void print()
    {
        cout<<name<<" " <<age<<" "<<preferredLanguage<<endl;
    }

};
class Teacher:public Employee{
public:
    string subject;
    Teacher(string name,int age, string sub)
    :Employee(name,age)
    {
        this->subject=sub;
    }
    void print()
    {
        cout<<name<<" "<<age<<" "<<subject<<endl;
    }
};
int main()
{
    Developer d("xyz", 33, "c++");
    d.print();

    Teacher t("Khan",30,"Geography");
    t.print();
    return 0;
}

