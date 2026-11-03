class Solution {
public:
    stack<int>st;
    ListNode* removeNodes(ListNode* head) {
      ListNode* temp = head;
      while(temp){
        st.push(temp->val);
        temp = temp->next;
      }  
           int max = st.top();
           st.pop();
           ListNode* final1 = new ListNode(max);
           ListNode* tail = final1;
       while(!st.empty()){
          if(st.top()>=max){
            max = st.top();
         ListNode* temp = new ListNode(max);
         temp->next  = tail;
         tail = temp;
       
        }
         st.pop();
       } 
       return tail; 
    }
};