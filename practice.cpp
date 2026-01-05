#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
        string name;
        int age;
    public:
        person():name("Unnamed"),age(0){}
        string getPersonName() const;
        int getPersonAge() const;
        void setPersonName(string a);
        void setPersonAge(int b);
        void showPersonDetails() const;
};

string person::getPersonName() const{
    return name;
}
int person::getPersonAge() const{
    return age;
}
void person::setPersonName(string a){
    name=a;
}
void person::setPersonAge(int b){
    age=b;
}
void person::showPersonDetails() const{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

class student:public person{
    protected:
        int roll;
    public:
        student():person(),roll(-1){}
        int getStudentRoll() const;
        void setStudentRoll(int c);
        void showStudentDetails() const;
};

int student::getStudentRoll() const{
    return roll;
}

void student::setStudentRoll(int c){
    roll=c;
}

void student::showStudentDetails() const{
    cout<<"Roll : "<<roll<<endl;
}

class engiStudent:public student{
    private:
        string varName;
        string subject;
    public:
        engiStudent():student(),varName("N/A"),subject("N/A"){}
        string getUniName() const;
        string getSubName() const;
        void setUniName(string d);
        void setSubName(string e);
        void showEngiStudentDetails() const;
};

string engiStudent::getUniName() const{
    return varName;
}
string engiStudent::getSubName() const{
    return subject;
}
void engiStudent::setUniName(string d){
    varName=d;
}
void engiStudent::setSubName(string e){
    subject=e;
}
void engiStudent::showEngiStudentDetails() const{
    cout<<"University : "<<varName<<endl;
    cout<<"Subject : "<<subject<<endl;
}

int main(){
    engiStudent es;
    es.showPersonDetails();
    es.showStudentDetails();
    es.showEngiStudentDetails();
    es.setPersonName("Ryan Doeschate");
    es.setPersonAge(22);
    es.setStudentRoll(230);
    es.setUniName("University of Prague");
    es.setSubName("Computer Science");
    es.showPersonDetails();
    es.showStudentDetails();
    es.showEngiStudentDetails();
    return 0;
}