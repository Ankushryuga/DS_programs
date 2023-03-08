#include<iostream>
#include<vector>

template<class T>
void selectionsort(std::vector<T>&a, int len){
  for(int i=0;i<=len;i++){
    T min=a[0];
    int minindex=i;
    for(int j=0;j<=len;j++){
      if(min>a[j]){
        min=a[j];
        minindex=j;
      }
    }
    //swap the elements...
    T temp=a[i];
    a[i]=a[minindex];
    a[minindex]=temp;
  }
}

int main(){
  std::vector<int>v1={5,45,24,13,11,145,50,3,1,0};
  int l1=v1.size()-1;
  selectionsort(v1, l1);
  for(auto it:v1){
    std::cout<<it<<" ";
  }
  std::cout<<"\n";
  std::vector<char>v2={'z','f','h','p','o','a'};
  int l2=v2.size()-1;
  selectionsort(v2, l2);
  for(auto it:v2){
    std::cout<<it<<" ";
  }
  return 0;
}
