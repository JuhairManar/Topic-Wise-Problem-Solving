class Solution {
public:
    string intToRoman(int num) {
    string s="";
    map<int,string,greater<int>>m;
    m[1000]="M";
    m[900]="CM";
    m[500]="D";
    m[400]="CD";
    m[100]="C";
    m[90]="XC";
    m[50]="L";
    m[40]="XL";
    m[10]="X";
    m[9]="IX";
    m[5]="V";
    m[4]="IV";
    m[1]="I";
    for(auto g:m)
    {
        if(num/g.first)
        {
            while(num/g.first)
            {
                 s+=g.second;
                 num-=g.first;
            }
        }
    }
    return s;
        
}
};
