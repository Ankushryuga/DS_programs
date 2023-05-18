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
int helper(std::vector<int>&array, int key, int s, int e){
  while(s<e){
    int mid=(s+e)/2;
    if(array[mid]==key){
      return mid;
    }else if(array[mid]>key){
      return helper(array, key, s, mid-1);
    }else if(array[mid]<key){
      return helper(array, key, mid+1, e);
    }
  }
  return -1;
}

int binary_search_recursion(std::vector<int>&array, int key){
    std::cout<<"Last element of array: "<<array[array.size()-1]<<"\n";
return helper(array, key, 0, array.size());
}

int main(){
  std::vector<int>array{1,2,3,4,5,6,7,8,9};
  int k=9;
  std::cout<<binary_search_recursion(array, k)<<"\n";
  return 0;
}
