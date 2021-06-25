//Arissa Yoshida
//A. Petya and Strings - https://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{  
   string a,b;
   cin >>a >> b;
   transform(a.begin(), a.end(), a.begin(), ::toupper); //Função inclusa no bits/stdc++.h , faz parte do conjutno STL
   transform(b.begin(), b.end(), b.begin(), ::toupper); //Transforma uma String inteira em upper ou lower.
    //Lexicographic order: In mathematics, the lexicographic or lexicographical order (also known as lexical order, or dictionary order) is a generalization of the alphabetical order of the dictionaries to sequences of ordered symbols or, more generally, of elements of a totally ordered set.
   if(a>b){
       printf("1\n");
   }else if(a<b){
       printf("-1\n");
   }else{
       printf("0\n");
   }



  return 0;
}
