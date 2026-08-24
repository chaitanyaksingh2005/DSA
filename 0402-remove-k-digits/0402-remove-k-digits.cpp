class Solution {
public:
    string removeKdigits(string num, int k) {                                                                           
        stack<int> ans;
        int count = 0;

        for (int i = 0; i < num.size(); i++) {

            while (!ans.empty() && count < k && num[ans.top()] > num[i]) {
                ans.pop();
                count++;
            }

            ans.push(i);
        }
        //agar top bda hi nhi mila tb wala case
        while (count < k) { 
            ans.pop();
            count++;
        }

        string final = "";

         while (!ans.empty()) {
            final += num[ans.top()];
            ans.pop();
        }

        reverse(final.begin(), final.end());

        int i=0;
        while(i<final.size() && final[i]=='0')
        {
            i++;
        }
         final.erase(0, i);

//sirf 0 wala case jab empty hojaye or 0 ho ans tb wala 
        if (final.empty()) {
            return "0";
        }

        return final;
    }
};