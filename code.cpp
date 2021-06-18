#include<iostream>
using namespace std;
int main ()
{
  string a,b;
  cout << "username: ";
  cin >> a;
  if (a == "coder123")
    {
     cout<<"password : ";
     cin>> b;
     if(b=="jscpp"){
         cout<<"correct!";
     }
     else{
         cout << "wrong password try again\n Password:";
         cin>>b;
         
         
     }
    }
  else
    {
      cout << "Wrong username try again\n username:";
      cin>>a;
       if (a == "coder123")
    {
     cout<<"password : ";
     cin>> b;
     if(b=="jscpp"){
         cout<<"correct!";
     }
     else{
         cout << "wrong password";
     }
    }
      
    }
}



