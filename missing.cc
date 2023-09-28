#include <cstdlib>
#include <iostream>
#include "test.hh"
using namespace std;

int searchSmallestMissingIteration(int* arr, const int size){
    
/*    bool present[size + 1];
    
    for (int i = 0; i < size; i++) { 
    
        if (arr[i] > 0 && arr[i] <= size)
            present[arr[i]] = true;
    }
 
    for (int i = 1; i <= size; i++)
        if (!present[i])
            return i;
 
    return size + 1; //no missing value 
}*/
    for (int i = 0; i < size; i++){
        while(arr[i] > 0 and arr[i] < size +1 and arr[i] != arr[arr[i]-1])
        for (int i = 0; i < size; i++){
            if(arr[i] != i+1)
            return ;
        }
        return size + arr[0];
    } 
}
 
int main()
{
 
    int arr[] = { 0, 1, 2, 3, 4, 5, 12, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << searchSmallestMissingIteration(arr, size);

    return 0;}