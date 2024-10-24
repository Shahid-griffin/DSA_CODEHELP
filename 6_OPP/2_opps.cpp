// encapsulion 

#include<iostream>
using namespace std;

class animal {
    public:
        int wt;
        int age;

        animal(){
        this-> wt =0;
        this->age=0;
        }

        // simple encapsulation
        //absolute k lliye me data memebrs ko 
        // public se prvate me move kr dunga 
        // getter ans setter banaunga 

};

//inhertiance 

class car {
    public:
    int name ;

    car(){
        name =101;
    }
};

class model {
    public:
    int name;
    model (){
        name = 102;
    }
};

class sample : public car,public model {
    public:
    int k;
    sample(){
        k =103;
    }
};

int main(){
    sample s1;
    cout<<s1.car::name<<" "<<s1.model::name;
}