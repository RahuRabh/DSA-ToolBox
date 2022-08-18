#include<iostream>
#include<vector>
using namespace std;

bool check(int arr[], int n)
{
    int count = 0;

    for(int i=1; i<n; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        } 
    }
    if(arr[n-1] > arr[0])
    {
        count++;
    }
    return (count <= 1);
}

int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    check(arr, 5);

    if(check(arr, 5)){
        cout << "True"<<endl;
    }
    else{
        cout << "False"<<endl;
    }

    return 0;
}