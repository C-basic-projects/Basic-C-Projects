#include <iostream>
using namespace std;

int main(){
    int row,col;
    //cout<<"Enter row and column";
    cin>>row>>col;
    int a[row][col]={0};
    int initial=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j]=initial++;
        }
    }
    //  for(int i=0;i<row;i++){
    //      for(int j=0;j<col;j++){
    //          cin>>a[i][j];
    //      }
    //  }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int b=a[row][col];
            cout<<a[i][j]<<"       ";
        }
        cout<<endl;
    }
    int lr=row-1,ur=0,uc=0,lc=col-1;
    while(lr>=ur and lc>=uc ){
        for(int i=uc;i<=lc;i++){
            cout<<a[ur][i]<<"  ";
        }
        ur++;
        for(int i=ur;i<=lr;i++){
            cout<<a[i][lc]<<"  ";
        }
        lc--;
        if(lc>uc){
        for(int i=lc;i>=uc;i--){
            cout<<a[lr][i]<<"  ";
        }
        }
        lr--;
        if(ur<lr){
        for(int i=lr;i>=ur;i--){
            cout<<a[i][uc]<<"  ";
        }
        }
        uc++;
    }
    
    return 0;
}