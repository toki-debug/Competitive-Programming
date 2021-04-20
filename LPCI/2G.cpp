//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/ADAQUEUE/

#include <bits/stdc++.h>
using namespace std;

deque<int>a;
stack<int>b;


int main()
{
   int q;
   cin  >> q;
   int n;
   string palavra;
     getchar();
     int reverso=0;
   for(int i=0;i<q;i++){
     cin >> palavra;
     int n;
     if(palavra == "back"){
       if(a.empty()){
         cout << "No job for Ada?" << endl;
       }else{
         if(reverso%2==0){
           cout << a.back() << endl;
           a.pop_back();
         }else{
           cout << a.front() << endl;
           a.pop_front();
         }
         
       }
     }else if(palavra == "front"){
       if(a.empty()){
         cout << "No job for Ada?" << endl;
       }else{
         if(reverso%2!=0){
           cout << a.back() << endl;
           a.pop_back();
         }else{
           cout << a.front() << endl;
           a.pop_front();
         };
       }

     }else if(palavra == "reverse"){
       if(!a.empty()){
         reverso++;
       }

     }else if(palavra == "push_back"){
       cin >> n;
       if(reverso%2==0){
            a.push_back(n);
         }else{
            a.push_front(n);
         }
      

     }else if(palavra == "toFront"){
       cin >> n;
        if(reverso%2!=0){
            a.push_back(n);
         }else{
            a.push_front(n);
         }
     }

   }
    
    return 0;
}
