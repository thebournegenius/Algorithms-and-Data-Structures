#include <iostream>
#include<vector>
using namespace std;

void bitonicGenerator(int  arr[], int n)
{
    // create evenArr[] and oddArr[]
    vector<int> evenArr;
    vector<int> oddArr;

    // Put elements in oddArr[] and evenArr[] as
    // per their position
    for (int i = 0; i < n; i++)
    {
        if (!( i % 2 ))
            evenArr.push_back(arr[i]);
        else
            oddArr.push_back(arr[i]);
    }

    // sort evenArr[] in ascending order
    // sort oddArr[] in descending order
    sort(evenArr.begin(), evenArr.end() );
    sort(oddArr.begin(), oddArr.end(), greater<int>());

    int i = 0;
    for (int j=0; j<evenArr.size(); j++)
        arr[i++] = evenArr[j];
    for (int j=0; j<oddArr.size(); j++)
        arr[i++] = oddArr[j];
}

//Driver Program
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bitonicGenerator(arr, n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
