/* Implementation of linear search  */
#include<iostream>
#include<vector>
int returnIndex(std::vector<int>&array){
int size=array.size();
  return helper(array, size-1);
}
