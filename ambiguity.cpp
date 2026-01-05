#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void show() const;
};

void A::show() const{
    cout<<"It's winter now"<<endl;
}

class B:virtual public A{

};

class C:virtual public A{

};

class D:virtual public B,virtual public C{

};

int main(){
    D obj;
    obj.show();
    return 0;
}