#include <iostream>
using namespace std;

int main(){
    int row,col;
    //cout<<"Enter row and column";
    cin>>row>>col;
    int a[row][col]={0};
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             cin>>a[i][j];
         }
    }
    int i=0,j=0;
    for( i=0;i<col;i++){
        if(i % 2==0){
            for(int j=0;j<row;j++){
                cout<<a[j][i]<<", ";
            }
        }   
        else{
            for(j=row-1;j>=0;j--){
                cout<<a[j][i]<<", ";
            }
        }
    }
	cout<<"END";

    return 0;
}