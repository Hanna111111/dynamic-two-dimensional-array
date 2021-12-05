#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//initialize arrays
int **creatingMatrix (int rows, int colums);
void initialize (int **arr, int rows, int colums);
void addit (int **arr, int rows, int colums);

//creating
int **
creatingMatrix (int rows, int colums)
{
  int **arr = new int *[rows];
  for (int i = 0; i < rows; i++)
    {
      arr[i] = new int[colums];
    }
  return arr;
}

//fill in
void
initialize (int **arr, int rows, int colums)
{
  srand (time (0));
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < colums; j++)
	{
	  arr[i][j] = rand () % 11 - 5;
	  cout << arr[i][j] << "     ";
	}
      cout << endl;
    }
}

//addition
void
addit (int **arr, int rows, int colums)
{
  int result (0);
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < colums; j++)
	{
	      for (int count = 0; count < colums; count++)
		{
		  result += arr[i][count];
		}
	     cout << " \n " << i + 1 << "row " << i + 1 << " columns " << endl;
	      j = colums;
	      result = 0;
	}
    }
}

int
main ()
{
  int rows, colums;
  cout << "Please, enter number of rows: " << endl;
  cin >> rows;
  cout << " Please, enter number of columns: " << endl;
  cin >> colums;
  cout << endl;

  cout << endl;
  int **arr;
  
  arr = creatingMatrix(rows, colums); 
initialize(arr, rows, colums); 
	addit(arr, rows, colums);
  
  //Freeing up memory
  for ( int i = 0; i < rows; i++ )
	{
		delete [] arr[ i ];
	}
	delete [] arr;

	return 0;
  return 0;
}
