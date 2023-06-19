
/** Implementation of selection sort
    Selection sort works as selecting single element from unsorted array and moving it to corresponding position.
**/


#include<iostream>
#include<vector>

#include<iostream>
#include<vector>

void selection_sort(std::vector<int>&arr){
  int i=0, j=0, min_index;
  for(int i=0;i<arr.size()-1;i++){
    min_index=i;
    for(int j=i+1;j<arr.size();j++){
      if(arr[j]<arr[min_index]){
        int temp=arr[min_index];
        arr[min_index]=arr[j];
        arr[j]=temp;
      }
    }
  }
}

int main(){
std::vector<int>array{2,24,124,121,1,53,64};
  selection_sort(array);
  for(int i=0;i<array.size();i++)
  std::cout<<array[i]<<" ";
  return 0;
}
