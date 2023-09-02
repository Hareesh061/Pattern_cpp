#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100]="I AM NOW";
    
   int n=strlen(s);
   for(int i=0;i<=n/2;i++){
   char temp=s[i];
   s[i]=s[n];
   s[n--]=temp;


   }

   
cout<<s;
   
    
    
}