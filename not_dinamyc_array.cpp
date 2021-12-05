#include <iostream>
using namespace std;

int
main ()
{		
  int arr[2][3];
  
  //two-dimentional array, each row contains 3 colums
  cout << "Enter 6 numbers" << endl;
  
  //storing user input in the array
  for(int i = 0; i<2; i++){
      for(int j = 0; j < 3; j++){
          cin >> arr[i][j];
      }
  }
  cout << "Your printing numbers are: " << endl;
  
  //printing array elements
  for(int i = 0; i < 2; i++){
      for(int j = 0; j < 3; j++){
          cout << "arr [" << i << "][" << j << "] = " << arr[i][j] << endl;
      }
  }
  return 0;
}
