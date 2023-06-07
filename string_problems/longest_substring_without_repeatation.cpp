#include<iostream>
//#include<algorithm>

int lengthOfLongestSubstring(std::string s){
    if(s.length()==0)
    return 0;
    if(s.length()==1)
    return 1;
    int maxlength=0;
    bool visited[256]={false};
    int left=0, right=0;
    while (right<s.length())
    {
        if(visited[s[right]]==false)
        visited[s[right]]=true;
        else{
            maxlength=std::max(maxlength, (right-left));
            while(left<right){
                if(s[left]!=s[right])
                visited[s[left]]=false;
                else{
                    left++;
                    break;
                }
                left++;
            }
        }
        right++;
    }
    maxlength=std::max(maxlength, (right-left));
    return maxlength;
}

int main(){
    std::string temp="absgabsf";
    std::cout<<"Longest string without repeating character: "<<lengthOfLongestSubstring(temp)<<" ";
    return 0;
}
