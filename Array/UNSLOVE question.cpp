// Given a binary matrix of M X N of integers,
// you need to return only unique rows of binary array
#include <bits/stdc++.h>
using namespace std;
#define ROW 4
#define COL 5

// The main function that prints
// all unique rows in a given matrix.
void findUniqueRows(int M[ROW][COL])
{
	//Traverse through the matrix
	for(int i=0; i<ROW; i++)
	{
		int flag=0;
		
		//check if there is similar column
		//is already printed, i.e if i and
		//jth column match.
		for(int j=0; j<i; j++)
		{
			flag=1;
			
			for(int k=0; k<=COL; k++)
			if(M[i][k]!=M[j][k])
				flag=0;
			
			if(flag==1)
			break;
		}
		
		//if no row is similar
		if(flag==0)
		{
			//print the row
			for(int j=0; j<COL; j++)
				cout<<M[i][j]<<" ";
			cout<<endl;
		}
	}
}

// Driver Code
int main()
{
	int M[ROW][COL] = {{0, 1, 0, 0, 1},
					{1, 0, 1, 1, 0},
					{0, 1, 0, 0, 1},
					{1, 0, 1, 0, 0}};

	findUniqueRows(M);

	return 0;
}
