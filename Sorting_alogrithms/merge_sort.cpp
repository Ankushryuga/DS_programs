/** merge sort implementation using c++ */
/** Based on divide and conqeror */


#include<iostream>
#include<vector>
void merge_sort(std::vector<int>&array, int start, int end){
  // int start=0;
  // int end=array.size()-1;
  int mid=(start+end)/2;
  merge_sort(array, start, mid);
  merge_sort(array, mid+1, end);
  merge(array, start, mid, end);
}
void merge(std::vector<int>&array, int start, int mid, int end){}
int main(){
  std::vector<int>array{13,24,154,64,14,90,88}
  
  
  return 0;
}
