class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        std::unordered_map<char, char> pairs =  {{')', '('}, {']', '['}, {'}', '{'}};
    
        for (const char& x : s)
        {
            if (pairs.count(x))
            {
                if (st.empty() || st.top() != pairs[x])
                {
                    return false;
                }
                st.pop();
            }
            else
            {
                st.push(x);
            }
        }

        return st.empty();
    }
};
