#include<bits/stdc++.h>
using namespace std;

string squrSord(const string str){
string result;
int i=0;
while(i<str.length()){
if(isdigit(str[i])){
int num=str[i]-'0';
i++;
char ch=str[i];
result.append(num,ch);
}
else{ 
result+=str[i];
}
i++;

}
return result;
}

int main(){
string str="har[2e]s[2h]h";
string output=squrSord(str);
 cout<<output<<endl;


return 0;

}