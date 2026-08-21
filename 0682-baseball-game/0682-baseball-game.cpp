class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        int ans = 0;
        int total =0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C" && !st.empty()) {
                st.pop();

            } else if (operations[i] == "D" && !st.empty()) {
                ans = st.top() * 2;
                st.push(ans);

            } else if (operations[i] == "+") {
                 int prev_top= st.top();
                st.pop();
                ans=st.top()+prev_top;
                st.push(prev_top);
                st.push(ans);

            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty())
        {
            total= total+st.top();
            st.pop();
        }
        return total;
    }
};