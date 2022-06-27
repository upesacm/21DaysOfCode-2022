class Solution {
public:
    string multiply(string a, string b) {
        int n1 = a.length(), n2 = b.length();
        if(n1 == 0 || n2 == 0)  return "";
        string res(n1+n2, '0');
        int c = 0;
        for(int i = n1-1; i >= 0; i--){
            for(int j = n2-1; j >= 0; j--){
                int tmp = (a[i]-'0')*(b[j]-'0')+c+res[i+j+1]-'0';
                res[i+j+1] = tmp%10+'0';
                c = tmp/10;
            }
            res[i] += c;
            c = 0;
        }
        int d = 0;
        while(d < res.length() && res[d] == '0')
            d++;
        if(d == res.length())
            return "0";
        return res.substr(d);
    }
};