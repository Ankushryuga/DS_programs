#include<iostream>

 std::string longestPalindrome(std::string s) {
        int len=s.size();
        int tempres[len][len];
        memset(tempres, 0, sizeof(tempres));
        int start=0;
        int end=1;
        for(int i=0;i<len;i++){
            tempres[i][i]=1;
        }
        for(int i=0;i<len-1;i++){
            if(s[i]==s[i+1]){
                tempres[i][i+1]=1;
                start=i;
                end=2;
            }
        }
        for(int i=2;i<len;i++){
            for(int j=0;j<len-i;j++){
                int left=j;
                int right=i+j;
                if(tempres[left+1][right-1]==1 && s[left]==s[right]){
                    tempres[left][right]=1;
                    start=j;
                    end=i+1;
                }
            }
        }
        return s.substr(start,end);
        
    }


int main(){
 std::string temp="ababb";
 std::cout<<"Longest Palindromic solution is:"<<longestPalindrome(temp);
return 0;
}
