#include<bits/stdc++.h>
using namespace std;

class university{
    private:
        string varName;
        string subject;
    public:
        university(string a,string b):varName(a),subject(b){}
        void showDetails() const;
};

void university::showDetails() const{
    cout<<"University : "<<varName<<endl;
    cout<<"Subkect : "<<subject<<endl;
}

class address{
    private:
        string city;
    public:
        address(string c):city(c){}
        void showDetails() const;
};

void address::showDetails() const{
    cout<<"City : "<<city<<endl;
}

class student{
    private:
        string name;
        int roll;
        university* uni;
        address* add;
    public:
        student(string d,int e,university* u,address* a):name(d),roll(e),uni(u),add(a){}
        void showDetails() const;
};

void student::showDetails() const{
    cout<<"Name : "<<name<<endl;
    cout<<"Roll : "<<roll<<endl;
    uni->showDetails();
    add->showDetails();
}

int main(){
    university u("Islamic University of Technology","Computer Science & Engineering");
    address a("Gazipur");
    student s("Khandaker Musabbir Ashad",253,&u,&a);
    s.showDetails();
    return 0;
}