// works on sorted or unsorted both.

template<class T>
int linearsearch(std::vector<T>&a, int size, T value){
  for(int i=0;i<=size;i++){
    if(a[i]==value){
      return i;
    }
  }
  return -1;
}
