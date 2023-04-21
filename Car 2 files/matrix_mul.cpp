#include<iostream>
using namespace std;

int main(){
    int a[2][2],b[2][2],m[2][2],i,j;
    for(i=0; i<2; ++i){
        for(j=0; j<2; ++j){
            a[i][j] = i;
            b[i][j] = j;
        }
    }

    cout<<endl<<"A"<<endl;
    for(i=0; i<2; ++i){
        for(j=0; j<2; ++j){
            cout<<a[i][j]<<" ";
            if(j==1){
                cout<<endl; 
            }
        }
    }
    cout<<endl<<"B"<<endl;
    for(i=0; i<2; ++i){
        for(j=0; j<2; ++j){
            cout<<b[i][j]<<" ";
            if(j==1){
                cout<<endl; 
            }
        }
    }

    for(i=0; i<2; ++i){
        for(j=0; j<2; ++j){
            for (int k=0; k < 2; ++k)
            {
                m[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    cout<<endl<<"multiplication"<<endl;
    for(i=0; i<2; ++i){
        for(j=0; j<2; ++j){
            cout<<m[i][j]<<" ";
            if(j==1){
                cout<<endl; 
            }
        }
    }

return 0;
}