#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
        string name;
        int age;
    public:
        person(string a,int b):name(a),age(b){}
        virtual void showDetails() const;
};

void person::showDetails() const{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

class student:public person{
    protected:
        int roll;
    public:
        student(string a,int b,int c):person(a,b),roll(c){}
        void showDetails() const override;
};

void student::showDetails() const{
    person::showDetails();
    cout<<"Roll : "<<roll<<endl;
}

class engiStudent:public student{
    private:
        string varName;
        string subject;
    public:
        engiStudent(string a,int b,int c,string d,string e):student(a,b,c),varName(d),subject(e){}
        void showDetails() const override;
};

void engiStudent::showDetails() const{
    student::showDetails();
    cout<<"University : "<<varName<<endl;
    cout<<"Subject : "<<subject<<endl;
}

int main(){
    person* p;
    engiStudent es(
        "Lewis Gregory",
        23,
        247,
        "Warwickshire University",
        "Computer Science"
    );
    p=&es;
    p->showDetails();
    return 0;
}