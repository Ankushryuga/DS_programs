#include<iostream>
#include<vector>

int binary_search(std::vector<int>&array, int key){
  int l=array.size();
  int s=0;
  while(s<l){
    int mid=(s+l)/2;
    if(array[mid]==key){
      return mid;
    }else if(array[mid]<key){
      s=mid+1;
    }else{
      l=mid-1;
    }
  }
  return -1;
}

int main(){
  std::vector<int>array{1,2,3,4,5,6,7,8,9};
  int k=5;
  std::cout<<binary_search(array, k)<<"\n";
  
  return 0;
}
