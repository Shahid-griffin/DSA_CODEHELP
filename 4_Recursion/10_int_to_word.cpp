/*TC = o(log 10 base N)=  sc;
logic hai kiham pehle ek map bana lenge fir 
check karenge hamara num just kisse badaa hai 
pure n ko 3 part me divide kiya hai a b c
b= it.sec
a k liye n/it.sec call karenge  ye check kr lenge ki wo >=100 kyuki haam ye thodi batana hai ki kitne number ofhumdere hai 
c k liye checkr lenge ki reminder jo hai  zero na h o
baski re dekhlega

*/

#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,string>> mp{
    {10000000000,"Billion"},{1000000,"Million"},{1000,"Thousand"},{100,"Hundread"},{90,"Ninty"},{80,"Eighty"},
    {70,"seventy"},{60,"Sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},{20,"Twenty"},{19,"nineteen"},
    {18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"},{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"},{12,"Twelve"},
    {11,"Eleven"},{10,"Ten"},{9,"Nine"},{8,"Eight"},{7,"seven"},{6,"six"},{5,"Five"},{4,"Four"},{3,"Three"},
    {2,"Two"},{1,"One"}
};

string rec(int num){
    if( num==0){
        return "Zero";
    }

    for( auto it :mp ){
        if(num>=it.first){
            string b = it.second;
            string a="";
            if( num>=100){
                a= rec(num/it.first)+" ";
            }
            string c="";
            if( num % it.first != 0){
                c= " " +rec(num % it.first);
            }
            return a+b+c;
        }
    }
}

int main(){

int n=123456789;
cout<<rec(n);

}