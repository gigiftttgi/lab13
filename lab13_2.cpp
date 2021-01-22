#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double mat[][N]){
	for(int i=0;i<N;i++)
	{
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++)
		{
		cin >> mat[i][j];
		}
	}
	}
	
void findLocalMax(const double mat[][N], bool show[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0 or i==N-1){
				show[i][j] = false;
			}
			else if(j==0 or j==N-1)
			{
				show[i][j] = false;
			}
			else
			{
				if(mat[i][j]>=mat[i-1][j] and mat[i][j]>=mat[i][j-1] and mat[i][j]>=mat[i][j+1] and mat[i][j]>=mat[i+1][j])
					show[i][j] = true;
				else
					show[i][j] = false;
			}		
		}
	}	
}
	

void showMatrix(const bool mat[][N])
{
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}
}