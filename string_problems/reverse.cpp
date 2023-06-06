/* Implementation
*/
#include<iostream>
#include<string>

std::string reverse_string(std::string message){
//std::string temp="";
  int i=message.length();
  for(int j=0;j<i/2;j++){
    char t;
    t=message[j];
    message[j]=message[i-j-1];
    message[i-j-1]=t;
  }
  return message;
}

int main(){
std::string temp="test";
  std::cout<<"reverse_string is=> "<<reverse_string(temp)<<" \n";
  return 0;
}
