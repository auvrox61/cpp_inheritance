#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
        string name;
        int age;
    public:
        person(string a,int b):name(a),age(b){}
        void setName(string e);
        void setAge(int f);
        string getName() const;
        int getAge() const;
        void showPersonDetails() const;
};

void person::setName(string e){
    name=e;
}

void person::setAge(int f){
    age=f;
}

string person::getName() const{
    return name;
}

int person::getAge() const{
    return age;
}

void person::showPersonDetails() const{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

class student:public person{
    private:
        string college;
        int roll;
    public:
        student():person("Unnamed",0),college("N/A"),roll(-1){}
        void setCollegeName(string c);
        void setRoll(int d);
        string getCollegeName() const;
        int getRoll() const;
        void displayStudentInfo() const;
};

void student::setCollegeName(string c){
    college=c;
}

void student::setRoll(int d){
    roll=d;
}

string student::getCollegeName() const{
    return college;
}

int student::getRoll() const{
    return roll;
}

void student::displayStudentInfo() const{
    cout<<"College : "<<college<<endl;
    cout<<"Roll : "<<roll<<endl;
}

int main(){
    student s1;
    s1.showPersonDetails();
    s1.displayStudentInfo();
    s1.setName("Khandaker Musabbir Ashad");
    s1.setAge(22);
    s1.setCollegeName("Notre Dame College");
    s1.setRoll(98);
    s1.showPersonDetails();
    s1.displayStudentInfo();
    cout<<s1.getCollegeName()<<endl;
    return 0;
}