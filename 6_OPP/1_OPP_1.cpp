#include<iostream>
using namespace std;

class animal {
    
        int wt;
        int age;
        string name;
    public:
    animal(){
        this->age=0;
        this->wt=0;
    }
    animal(int wt,int age,string st){
        this-> age = age;
        this-> wt= wt;
        this-> name= st;
    }
    // when aour data memebers are private we can only acces by the 
    // class memebers or function for that we use getter ans setters

    void setage(int age ){
        this->age = age ;
    }
    void setwt(int wt){
        this->wt = wt;
    }

    int getage(){
        return age;
    }
    int getwt(){
        return wt;
    }
};

int main(){

// animal  s;
// s.setage(10);
// s.setwt(50);
animal s(10,50,"ba");

cout<<s.getage();
// cout<<s.age<<" "<<s.wt<<" "<<s.name<<endl;

//dynamic memry creation 

animal * s2 = new animal;
s2->setage(20);
// instead of -> we can also use (*s2).age
// becasuse when we us  the dynamically mememory allocation 
//  it give us an add  we have t first derefferenace that to get the 
// xact val here "->" this jey is iue 
(*s2).setwt(50);
cout<<" "<<(*s2).getwt()<<endl;
cout<<s2->getage();


}