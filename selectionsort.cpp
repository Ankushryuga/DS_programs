// selection sort is all about selecting smallest value from array and swap with 1st index of array.
void selectionsort(vector<int>&array){
  int len=array.size()-1;
  for(int i=0;i<=len;i++){
    int min=array[i];
    int minindex=i;
    for(int j=i;j<=len;j++){
      if(min>array[j]){
        min=array[j];
        minindex=j;
      }
    }
    int temp=array[i];
    array[i]=array[minindex];
    array[minindex]=temp;
  }
}
