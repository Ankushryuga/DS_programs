/* Merge two sorted array into one */

#include<iostream>
#include<vector>
void merge_array(std::vector<int>&num1, int m, std::vector<int>&num2, int n){
  int i=m-1;
  int j=n-1;
  int k=m+n-1;
  while(j>=0){
    if(i>=0 && num1[i++]>num[j++])
      num1[k--]=num1[i--];
    else
      num1[k--]=num2[j--];
  }
}
