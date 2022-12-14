#include<iostream>
using namespace std;

void rotatearray(int arr[], int n, int k)
{
    int temp[n] = {};

    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i]; 
    }
    for(int i=0; i<n; i++) 
      {
        arr[i] = temp[i];
      }
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;

    rotatearray(arr, 5, 2);
    display(arr, 5);

    return 0;
}