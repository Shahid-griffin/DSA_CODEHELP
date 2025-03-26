#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int  main(){

    //creation 
    unordered_map<string,int> m;

    //insertion
    pair<string,int> p = make_pair("Scope",9);
    m.insert(p);

    pair<string,int> p1("a",10);
    m.insert(p1);

    m["b"]=99;

    //accesing

    cout<<m.at("b");
    // when try to acces th e key not prenent it 
    // will give error and maek  new entry of i t

    // searching 

    cout<<m.count("b");  // true and false
    if(m.find("b") != m.end()){
        cout<<"Fortuner found"<<endl;
    }else{
        cout<<"fortuner not oufn"<<endl;
    }

    cout<<"print all the map"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
