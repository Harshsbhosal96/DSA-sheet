//Dutch national flag algorithm
#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
   *y = temp;
}
void sort012( int A[], int n){
  int low = 0, mid = 0, high = n - 1;
while(mid <= high){
if(A[mid] == 0){
swap( A[low++], A[mid++] );
    }
else if( A[mid] == 1 ){
mid++;
    }
else{
swap( A[mid], A[high--] );
  }
}
// The driver code

int main(){
  int A[] = { 0,1,2,0,1,2 };
return 0;
}
  
  
