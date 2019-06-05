class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if (s == "")
            return 0;
        if (s.size() == 1)
            return 1;
         size_t j = 0;
        int len =1 ;
        int max = 0;
        string s1="";
        int index = 0;
        for(size_t i =1;i<s.size();i++)
        {   
            s1.assign(s,j,len);
            
            switch(index = s1.find(s[i])){
                case -1: 
                    len ++;
                    break;
                default:
                    len = len - index;
                    j = j+index+1;
            }
    
            max = max<len?len:max;
        }
        
        return max;
    }
};

// 总算想明白了
