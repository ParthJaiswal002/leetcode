class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int i =0;i<students.size();i++){
            q.push(students[i]);
        }
          int i = 0;
          int n = 0;
        while(!q.empty()){
            if(n==q.size()){
                return q.size();
            }
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                n=0;
            }
            else{
                q.push(q.front());
                n++;
                q.pop();
            }
        }
        return q.size();
    }
};