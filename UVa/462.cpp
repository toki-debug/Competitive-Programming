//Arissa Yoshida
//462 - Bridge Hand Evaluator - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=403

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
   
   string a;
   while(cin >> a){
       map<char, string>mp;
       mp['S']="";
       mp['H']="";
       mp['D']="";
       mp['C']="";
       int stoped[4]={0};
       mp[a[1]]+=a[0];
       for(int i=0;i<12;i++){
           cin >> a;
           mp[a[1]]+=a[0];
       }
       string ver = "SHDC";
       
       int pontos=0;
       int tam=0;
       int soma=0;
       int maximo =0;
       for(int i=0;i<ver.size();i++){
           
           int k=0,q=0,jj=0,ace=0;
           int sub=0; 
           
               if(mp[ver[maximo]].size()<mp[ver[i]].size()){
                   maximo =i;
               }
           
           tam = mp[ver[i]].size(); 
           if(tam ==2){
               soma+=1;
           }else if(tam==1 || tam==0){
               soma+=2;
           }
           for(int j=0;j<tam;j++){
               if(mp[ver[i]][j]=='K'){
                   k++;
                   if(k!=0 && tam==1){
                    sub++;
                     }
               }else if(mp[ver[i]][j]=='J'){
                   jj++;
                   if(jj!=0 && tam<=3){
                    sub++;
                    }
               }else if(mp[ver[i]][j]=='Q'){
                   q++;
                   if(q!=0  && tam<=2){
                    sub++;
                    }
               }else if(mp[ver[i]][j]=='A'){
                   ace++;
               }
               if(ace!=0 || (k!=0 && tam>=2)  || (q!=0 && tam>=3)){
                   stoped[i]=1;
               }
               
               
           }
           
    pontos+= (ace*4 + k*3 + q*2 + jj) - sub;
       }
       int f=1;
       for(int i=0;i<4;i++){
           if(stoped[i]!=1){
               f=0;
               break;
           }
       }
       if(pontos>=16 && f){
           cout << "BID NO-TRUMP" << endl;
       }else{
           pontos+=soma;
           if(pontos>=14){
               cout << "BID " << ver[maximo] << endl; 
           }else{
               cout << "PASS" << endl;
           }
       }

   
   } 
   
  
}

