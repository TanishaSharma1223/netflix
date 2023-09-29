class Solution {
public:
 bool checkpalindrone(string s,int i, int j){
     while(i<=j){
    if(s[i]!=s[j]){
        return false;
    }
    else{
        i++;
        j--;
    }
     }
    return true;
     
   }
   
    bool validPalindrome(string s) {
        int i=0;
    int n=s.length()-1;
    int j=n;
    while(i<=j){
        if(s[i]!=s[j]){
           return checkpalindrone(s,i+1,j) || checkpalindrone(s,i,j-1);
        }
        else
        i++;
        j--;
    }
   
   return true;
    }
};