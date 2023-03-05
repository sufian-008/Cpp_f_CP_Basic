#include<bits/stdc++.h>
using namespace std;

int main(){

   //int a = 100000;
   //int b = 100000;

   //long long int c = a* 1LL * b;

  // double a = 100000;
   //double b = 100000;
   //double c =a * b;
   //or  c=1 e 24  (setprecision)
    //cout<<fixed<<setprecision(0)<<c<<endl;

    //conditional statement
    //int i=0;
    //for(;i<=10;i++){

    //}
    //Loop
    /*int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<< s<<endl;
    }*/
     //reverse
   /* string str;
    cin >> str;
    string str_rev;
    for(int i= str.size()-1; i>=0; --i){
        str_rev = str_rev + str[i];
    //  str_rev.push_back(str[i]);
    }
  //  cout<<str_rev;
    // when we can check palaindrom
    if(str == str_rev){
        cout<<"Yes";

    }else{

       cout<<"No";
    }*/

    // jokhon amader kacare sobche boro number thakbe oita number ta ke string e nite hobe
    // tarpr int  e koira nite hobe
    string s;
    cin>>s;
    // cout<<(inr)s[s.size()-1];
    //aykhane aybae likhe 5 ar sky value print korbe
    int last_digit = s[s.size()-1]-'0';
    cout<<last_digit+1;


}

