#include <iostream>
using namespace std;
void givenMatrix(int a[100][100], int rows, int columns);
void sumColumn(int sum[10], int a[100][100], int rows, int columns);
void printSum(int sum[10], int columns);
int main(){
    int arr[100][100], s[10];
    int r, c;
    cout << "Enter order of matrix: ";
    cin >> r >> c;
    cout << "Enter " << r << " x " << c << " matrix:\n";
    for(int i = 0 ; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    givenMatrix(arr, r, c);
    sumColumn(s, arr, r, c);
    printSum(s, c);
    cout << endl;
    return 0;
}
void givenMatrix(int a[100][100], int rows, int columns){
    cout << "Given Matrix:\n";
    for(int i = 0 ; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void sumColumn(int sum[10], int a[100][100], int rows, int columns){
    for(int i = 0 ; i < columns; i++){
        sum[i] = 0;
        for(int j = 0; j < rows; j++){
            sum[i]+=a[j][i];
        }
    }
}
void printSum(int sum[10], int columns){
    cout << "\nColumn Sum:\n";
    for(int i = 0; i < columns; i++){
        cout << sum[i] << " ";
    }
}
