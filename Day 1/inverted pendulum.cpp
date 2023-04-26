#include<iostream>
#include<cmath>
#include <cstdlib>

using namespace std;

void c2d(double A[4][4], double Anew[4][4]);
void ctod(double B[4][1], double Bnew[4][1]);
void x_new(double x_init[4][1], double Anew[4][4], double x_next[4][1], double Bnew[4][1], double K[1][4]);
void update_init(double x_init[4][1], double x_next[4][1]);

int main(){
	double A[4][4] = {
		{ 0, 1, 0, 0},
		{ 0, -0.9091, 2.6755, 0},
		{ 0, 0, 0, 1},
		{ 0, -2.2727, 31.2136, 0}
	} ;
	double B[4][1] = {
        {0},{1.8182},{0},{4.5455}
    };
	double Anew[4][4];
    c2d(A,Anew);
    double Bnew[4][1];
    ctod(B,Bnew);
    
    double x_init[4][1] = {{0},{0},{3.14/2},{0}};
    double K[1][4] = {-1, -1.6567, 18.6854, 3.4594};
    int t = 1;

    while (abs(x_init[2][0])>0.0001)
    {
        double x_next[4][1] ={{0},{0},{0},{0}};
        x_new(x_init,Anew,x_next,Bnew,K);    
        update_init(x_init,x_next);
        cout << "steps :"<< t << "||" << x_init[2][0] << endl;
        ++t;

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

void x_new(double x_init[4][1], double Anew[4][4], double x_next[4][1], double Bnew[4][1], double K[1][4]){
    for(int i= 0; i<4; i++){
        for(int j=0; j<1; j++){
            for (int k=0; k < 4; ++k)
            {
                x_next[i][j] += (Anew[i][k]-Bnew[i][j]*K[j][k])*x_init[k][j];
            }
        }
    }    
}

void update_init(double x_init[4][1], double x_next[4][1]){
    for (int i=0; i<4; i++){
        for (int j=0; j<1; j++){
            x_init[i][j] = x_next[i][j];
        }
    }
}

void ctod(double B[4][1], double Bnew[4][1]){
    float dt = 0.1;
    for (int i=0; i<4; i++){
        for (int j=0; j<1; j++){
            Bnew[i][j] = dt*B[i][j];
        }
    }       
}
