#include<iostream>
using namespace std; 
main( ) 
{  
	double A[4][4] = {
		{ 0, 1, 0, 0},
		{ 0, -0.9091, 2.6755, 0},
		{ 0, 0, 0, 1},
		{ 0, -2.2727, 31.2136, 0}
	} ;

	double B[4][1] = {
        {0},{1.8182},{0},{4.5455}
    };

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

    double Anew[4][4];

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            Anew[i][j] = I[i][j] + dt*A[i][j];
        }
    }




//    /***
	cout<<"Printing a 2D Array:\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"\t"<<Anew[i][j];
		}
		cout<<endl;
	}
//    ***/
    

}