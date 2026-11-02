
class Solution {
public:
    int solve(int val1, int val2, string ch) {
        if(ch == "+") return val1 + val2;
        else if(ch == "D") return 2 * val2;
        return 0;
    }

    int calPoints(vector<string>& op) {
        stack<int> val;

        for(int i = 0; i < op.size(); i++) {

            if(op[i] == "C") {
                val.pop();
            }

            else if(op[i] == "D") {
                int val2 = val.top();
                val.push(solve(0, val2, "D"));
            }

            else if(op[i] == "+") {
                int val2 = val.top();
                val.pop();

                int val1 = val.top();

                val.push(val2);

                val.push(solve(val1, val2, "+"));
            }

            else {
                val.push(stoi(op[i]));
            }
        }

        int ans = 0;

        while(!val.empty()) {
            ans += val.top();
            val.pop();
        }

        return ans;
    }
};
