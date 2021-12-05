#include <iostream>
using namespace std;

int main()
{
    int rows;
    int colums;
    cout << "Please, input the number of rows: " << endl;
    cin >> rows;
    
    cout << "Please, input the number of colums: " << endl;
    cin >> colums;
    
    int **arr = new int* [rows];
    
    //creating an array
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[colums];
    }
    
    //filling an array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            cin >> arr[i][j];
        }
    }
    
    //output an array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //deleting the array
    for (int i = 0; i < rows; i++) {
        delete [] arr[i];
    }
    delete[] arr;

    return 0;
}
