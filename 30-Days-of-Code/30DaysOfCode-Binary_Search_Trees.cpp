class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
           }
        }
//////////////////////////////////////////////////Getting Height of BST///////////////////////////////////
		int getHeight(Node* root){
         if(!root)
                return -1;
            
            int L,R;
            L = getHeight(root->left);
            R = getHeight(root->right);
            return L>R?L+1:R+1;
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
};
