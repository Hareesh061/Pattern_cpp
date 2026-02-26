#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of your choice"<<endl;
cin>>n;
for(int row=0;row<=n;row++){
  for(int col=0;col<row;col++){
         cout<<"* ";
       }
  cout<<endl;
}
cout<<"\n"<<endl;
for(int row=0;row<=n;row++){
  for(int col=0;col<n;col++){
         cout<<"* ";
       }
  cout<<endl;
}
cout<<"\n"<<endl;
for(int row=1;row<=n;row++){
        for(int col=1;col<=(n-row+1);col++){
            cout<<"* ";
        }
        cout<<endl;
    }
cout<<"\n"<<endl;
for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
cout<<"\n"<<endl;
 for(int row=1;row<=2*n;row++){
        int pat= row>n ? 2*n-row : row;
        for(int col=1;col< pat;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
cout<<"\n"<<endl;
for(int row=0;row<2*n;row++){
      
      int totalcolsInrow= row>n ? 2*n -row: row;
      
      int numberOfspaces=n-totalcolsInrow;
      
      for(int s=0; s<numberOfspaces;s++){
           cout<<" ";
       }
       
       for(int col=0; col<totalcolsInrow;col++){
           cout<<"* ";
       }
       cout<<endl;
  }
cout<<"\n"<<endl;
for(int row=1;row<=n;row++){
      
     for(int space=0;space<n-row;space++) {
         cout<<"  ";
     }
       
       for(int col=row; col>=1;col--){
           cout<<col<<" ";
       }
       for(int col=2; col<=row;col++){
           cout<<col<<" ";
       }
       cout<<endl;
  }


return 0;
}
