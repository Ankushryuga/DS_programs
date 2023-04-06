// binary search return index of searched value in array..
int binarysearch(vector<int>&array, int val){
  int start=0;
  int end=array.size()-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(array[mid]==val){
    return mid;
    }
    else if{
      if(array[mid]>val){
        end=mid-1;
      }
      else{
        start=mid+1;
      }
    }
  return -1;
}
  
  // we can implement binarysearch using recursion as well.
