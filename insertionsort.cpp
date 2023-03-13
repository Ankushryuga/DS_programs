
// insertion sort, one of the sorting technique.
#include<iostream>
#include<vector>
template<class T>
std::insertionsort(std::vector<T>& input, int si){
  int j;
  T key;
  for(int i=1;i<=si;i++){
    key=input[i];
    j=i-1;
    while(j>=0 && input[j]>key){
      input[j+1]=input[j];
      j=j-1;
    }
    input[j+1]=key;
  }
}

//main method..
int main(){
  std::vector<int> v1={42,53,134,1,13,04,89,79};
  int l1=v1.size()-1;
  selectionsort(v1,l1);
  for(auto it: v1){
    std::cout<<it<<" ";
  }
  std::cout<<"\n";
  
  return 0;
}
