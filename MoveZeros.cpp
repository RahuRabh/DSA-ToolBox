#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){

    int nonzero = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonzero]);
            nonzero++;
        }
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
    int arr[5] = {0, 1, 0, 3, 5};
    moveZeros(arr, 5);
    display(arr, 5);

    return 0;
}

