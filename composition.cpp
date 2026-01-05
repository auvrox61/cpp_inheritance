#include<bits/stdc++.h>
using namespace std;

class professor{
    private:
        string name;
        int profCode;
    public:
        professor(string a,int b):name(a),profCode(b){}
        void showDetails() const;
};

void professor::showDetails() const{
    cout<<"Name : "<<endl;
    cout<<"Professor Code : "<<profCode<<endl;
}

class department{
    private:
        string departmentName;
        string subject;
        professor prof;
    public:
        department(string c,string d,string e,int f):departmentName(c),subject(d),prof(e,f){}
        void showDetails() const;
};

void department::showDetails() const{
    cout<<"Department : "<<departmentName<<endl;
    cout<<"Subject : "<<subject<<endl;
    prof.showDetails();
}

class university{
    private:
        string uniName;
        department dept;
    public:
        university(string g,string h,string i,string j,int k):uniName(g),dept(h,i,j,k){}
        void showDetails() const;
};

void university::showDetails() const{
    cout<<"University : "<<uniName<<endl;
    dept.showDetails();
}

int main(){
    university u("Islamic University of Technology","CSE","Linear Algebra","Gilbert Strang",253);
    u.showDetails();
    return 0;
}