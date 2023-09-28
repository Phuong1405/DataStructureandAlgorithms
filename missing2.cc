#include <cstdlib>
#include <iostream>
#include "test.hh"
using namespace std;

 /*int searchSmallestMissing(int* A, int left, int right){
    if (left > right) {
        return NO_VALUE_MISSING;
    }

    int mid = left + (right - left) / 2;

    
    if (A[mid] != mid) {
        
        return searchSmallestMissing(A, left, mid -1);
    } else {
        
        return searchSmallestMissing(A, mid + 1, right);
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 12, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallestMissing = searchSmallestMissing(arr, 0, n - 1);
        printf("The smallest missing value is: %d\n", smallestMissing);

    return 0;
}*/





/*int searchSmallestMissing(int* A, int left, int right){
    if (left > right)
        return NO_VALUE_MISSING;
    if (left != A[left])
        return left;
    int mid = (left+right)/2;

    if (A[mid] == mid)
        return searchSmallestMissing(A, mid+1,right);

    return searchSmallestMissing(A, left, mid); 
}

int main()
{
    int arr[] = {2, 3, 4, 5, 10, 12, 14, 15, 16, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Smallest missing element is " <<
        searchSmallestMissing(arr, 0, n-1) << endl;
}


/*int searchSmallestMissing(int* A, int left, int right){
    while (left<=right) {
        if (left != A[left]){
            return left;
    }
    int mid = left + (right - left) / 2;
    

    if (A[mid] == mid){
        return searchSmallestMissing(A, mid+1,right);}

    else { mid = right + 1;
        }
    }

    return   NO_VALUE_MISSING;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 12, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Smallest missing element is " <<
        searchSmallestMissing(arr, 0, n-1) << endl;
}*/

/*int findFirstMissing(int arr[],int n ,int m)
{
   
  vector<int> vec(m,0);
    
  for(int i=0;i<n;i++){
      vec[arr[i]]=1;
  }
    
  for(int i=0;i<m;i++){
      if(vec[i]==0){return i;}
  }
}
  
// Driver code
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 12, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m=11;
    cout << "Smallest missing element is " <<findFirstMissing(arr, n, m) << endl;
}*/
int searchSmallestMissing(int* A, int left, int right) {
   
    if (left != A[left] - A[0]) {
        return left + A[0];
    }

    if (left == right) {
   
        return NO_VALUE_MISSING;
    }

    int mid = left + (right - left) / 2;

    if (A[mid] == mid + A[0]) {

        return searchSmallestMissing(A, mid + 1, right);
    } else {
        return searchSmallestMissing(A, left, mid);
    }
}
