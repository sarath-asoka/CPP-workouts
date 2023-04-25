#include<iostream>
#include<cmath>
using namespace std;

void c2d(double A[4][4], double Anew[4][4]);
void x_new(double x_init[4][1], double Anew[4][4], double x_next[4][1]);

int main(){
	double A[4][4] = {
		{ 0, 1, 0, 0},
		{ 0, -0.9091, 2.6755, 0},
		{ 0, 0, 0, 1},
		{ 0, -2.2727, 31.2136, 0}
	} ;

	double Anew[4][4];
    c2d(A,Anew);
    double x_init[4][1] = {{0},{0},{3.14/2},{0}};
    double x_next[4][1] ={{0},{0},{0},{0}};
    x_new(x_init,Anew,x_next);    

    cout << "Next state"<<endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<1;j++){
            cout << x_next[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}

void c2d(double A[4][4], double Anew[4][4]){
    int I[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if (i==j){
                I[i][j] = 1;
            } 
            else {
                I[i][j] = 0;
            }
        }
    }
    float dt = 0.1;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            Anew[i][j] = I[i][j] + dt*A[i][j];
        }
    }    
}

void x_new(double x_init[4][1], double Anew[4][4],double x_next[4][1]){
    for(int i= 0; i<4; i++){
        for(int j=0; j<1; j++){
            for (int k=0; k < 4; ++k)
            {
                x_next[i][j] += Anew[i][k]*x_init[k][j];
            }
        }
    }    
}