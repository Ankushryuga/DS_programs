
#include<iostream>
#include<vector>
//increasting order...
void insertion_sort(std::vector<int>& array){
  int len=array.size();
  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      if(array[i]>array[j]){ 
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}

int main(){
  std::vector<int>array{9,1,42,142,53};
  insertion_sort(array);
  for(int i=0;i<array.size();i++){
  std::cout<<array[i]<<" ";
  }
  std::cout<<"\n";
return 0;
}
