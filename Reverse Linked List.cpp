// This is approach 1 :
// using in place mechanism without using any additional space 
// Time Complexity : O(n) 
//Space Complexity : O(1) 

ListNode* ReverseList(ListNode* head){
  ListNode* prev = NULL;

ListNode * temp = head;

while(temp != NULL){
ListNode * front = temp->next;
temp->next = prev;
prev = temp;
temp = front;
}
return prev;
}

//Approach 2 :
// We will make the use of stack over here
// TC : O(n)
// SC : O(n) we tend to use a bit of extra space over here ):

ListNode* ReverseList(ListNode* head){
  stack<ListNode*> st;

ListNode* temp = head;

while(temp != NULL){
st.push(temp->data);
temp = temp->next;
}
temp = head;

while(temp != NULL){
temp -> data = st.top();
st.pop();
temp = temp->next;
}
return head;
}

  
