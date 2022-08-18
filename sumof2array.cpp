#include<iostream>
using namespace std;

vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> ArraySum(vector<int>&arr1, int n, vector<int>&arr2, int m)
{
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;

    while (i>=0 && j>=0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i>=0)
    {
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(value);
        i--;
    }

    while (j>=0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
    while (carry != 0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    int arr1[4] = {1, 3, 4, 7};
    int arr2[3] = {4, 7, 9};

    int ANS = ArraySum(arr1, 4, arr2, 3);

    return 0;
}