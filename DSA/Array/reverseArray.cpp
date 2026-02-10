#include <iostream>
using namespace std;
//problem: reverse an given array without using extra space
void reverseArray(int arr[], int n) {
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(int);

    //print array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr,n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
