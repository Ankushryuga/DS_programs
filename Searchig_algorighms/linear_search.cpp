#include<iostream>
#include<vector>

int linear_search(std::vector<int>& array, int key){
  int l=array.size();
  for(int i=0;i<l;i++){
    if(array[i]==key){
      return i;
    }
  }
  return -1;
}

int main(){
  std::vector<int>array{32,24,132,14,595,99,885};
  int k=885;
  std::cout<<linear_search(array, k)<<" \n";
  return 0;
}
