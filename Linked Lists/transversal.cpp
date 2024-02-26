/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
     if(arr.empty()){
         return nullptr;
     }
     Node*head =new Node(arr[0]);
     Node*current= head;
     for(size_t i=1;i<arr.size();i++){
         current->next=new Node(arr[i]);
         current=current->next;

     }
     return head;
}