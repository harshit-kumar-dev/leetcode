// Last updated: 18/08/2026, 16:00:14
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i=0;
5        while(i<s.size() && s[i]==' '){
6            i++;
7        }
8
9        int sign=1;
10        if(s[i]=='-'){
11            sign=-1;
12            i++;
13        }
14        else if(s[i]=='+'){
15            sign=1;
16            i++;
17        }
18
19        long res = 0;
20        while(i<s.size() && isdigit(s[i])){
21            int digit = s[i]-'0';
22
23            if((res>INT_MAX/10) || (res==INT_MAX/10 && digit>INT_MAX%10)){
24                if(sign==-1){
25                    return INT_MIN;
26                }
27                else{
28                    return INT_MAX;
29                }
30            }
31            
32            res = res*10 + digit;
33
34            if(res*sign > INT_MAX) return INT_MAX;
35            if(res*sign < INT_MIN) return INT_MIN;
36            i++;
37        }
38        return sign*res;        
39    }
40};