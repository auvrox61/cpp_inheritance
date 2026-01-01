#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
        string name;
        int age;
    public:
        person(string a,int b):name(a),age(b){}
        string getName() const;
        int getAge() const;
        void setName(string c);
        void setAge(int d);
        void showPersonDetails() const;
};

string person::getName() const{
    return name;
}

int person::getAge() const{
    return age;
}

void person::setName(string c){
    name=c;
}

void person::setAge(int d){
    age=d;
}

void person::showPersonDetails() const{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

class student:public person{
    protected:
        int roll;
    public:
        student(int e):person("Unnamed",0),roll(e){}
        int getRoll() const;
        void setRoll(int f);
        void showStudentDetails() const;
};

int student::getRoll() const{
    return roll;
}

void student::setRoll(int f){
    roll=f;
}

void student::showStudentDetails() const{
    cout<<"Roll : "<<roll<<endl;
}

class engiStudent:public student{
    private:
        string university;
        string subject;
    public:
        engiStudent(string g,string h):student(-1),university(g),subject(h){}
        string getUniversity() const;
        string getSubject() const;
        void setUniversityName(string i);
        void setSubject(string j);
        void showEngiStudentDetails() const;
};

string engiStudent::getUniversity() const{
    return university;
}

string engiStudent::getSubject() const{
    return subject;
}

void engiStudent::setUniversityName(string i){
    university=i;
}

void engiStudent::setSubject(string j){
    subject=j;
}

void engiStudent::showEngiStudentDetails() const{
    cout<<"University : "<<university<<endl;
    cout<<"Subject : "<<subject<<endl;
}

int main(){
    engiStudent es("Unnamed","N/A");
    es.showPersonDetails();
    es.showStudentDetails();
    es.showEngiStudentDetails();
    es.setName("Khandaker Musabbir Ashad");
    es.setAge(22);
    es.setRoll(253);
    es.setUniversityName("Islamic University of Technology");
    es.setSubject("Computer Science and Engineering");
    es.showPersonDetails();
    es.showStudentDetails();
    es.showEngiStudentDetails();
    cout<<es.getName()<<endl;
    cout<<es.getAge()<<endl;
    cout<<es.getRoll()<<endl;
    cout<<es.getUniversity()<<endl;
    cout<<es.getSubject()<<endl;
    return 0;
}