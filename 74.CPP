//WAP 3*3 transpoce for it matrix
#include<iostream.h>
#include<conio.h>

int main()
{
    int mat[3][3], trans_mat[3][3];
    int i,j;

    /* Initializing Mat1 and Mat2 */
    for (i=0;i<3;i++)
    {
	for (j=0;j<3;j++)
	{
	    cin >> mat[i][j];
	}
    }

    /* Transposing elements of the matrix */
    for (i=0;i<3;i++)
    {
	for (j=0;j<3;j++)
	{
	    trans_mat[j][i] = mat[i][j];
	}
    }

    cout << "Transpose of the Given 3x3 Matrix : " << endl;
    for (i=0;i<3;i++)
    {
	for (j=0;j<3;j++)
	{
	    cout << trans_mat[i][j] << "\t";
	}
	cout << endl;
	getch();
    }
}