// bubble sort works on array either sorted or unsorted array..
// generic function for bubblesort that 

#include<iostream>
#include<vector>

// generic function for bubble sort that will sort all different types..
template<class T>
void bubblesort(std::vector<T>&a, int len){
	for(int i=0;i<=len;i++){
		bool swaped=false;
		for(int j=0;j<=len-i-1;j++){
			if(a[j]>a[j+1]){
			// swapping the value..
				T temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swaped=true;
			}
		}
		if(swaped==false){
			break;
		}
	}
}
int main(){
  std::vector<int>v1={8,96,5,1,0,6,5,3,7,5};
  int l1=v1.size()-1;
  bubblesort(v1, l1);
  std::cout<<"after sortin array is: \n";
  for(auto it:v1){
    std::cout<<it<<" ";
  }
  
  std::cout<<"\n";
  std::vector<char>v2={'z','c','v','x','l','p','a','y'};
  int l2=v2.size()-1;
  bubblesort(v2, l2);
  std::cout<<"after sorting char array: \n";
  for(auto it:v2){
    std::cout<<it<<" ";
  }
  
  return 0;
}
