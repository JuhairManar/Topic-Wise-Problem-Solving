class Solution {
public:

    bool validPalindrome(string s) {
        long n=s.size(),p=n-(n/2),i=0,j=n-1,c=0,a,b;

        while(i<=j){
            if(s[i]==s[j]) c++;
            else{
                a=i;b=j;
                break;
            }
            i++;j--;
        }

        if(c==p) return 1;

        a++;

        bool f=false;
        while(a<=b){
            if(s[a]!=s[b]){
                f=true;
                break;
            }
            a++;b--;
        }

        if(f){
            a=i;b=j-1;
            while(a<=b){
            if(s[a]!=s[b]){
                return 0;
            }
        }
        }

        else{
            return 0;
        }

        return 0;
    }
};
