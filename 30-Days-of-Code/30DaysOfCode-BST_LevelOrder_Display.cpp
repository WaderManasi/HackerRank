//////////////////////////////////////C++ solution/////////////////////////////
//function to get height of BST

int height(Node* root)
    {
        int h1=0;
        int h2=0;
        if(root==NULL)
            return 0;
        h1=height(root->left);
        h2=height(root->right);

        return h1>h2?h1+1:h2+1;
    }
 ////////////////////////////////////////////////////////////////////
 ///helper function to print elements 
 
    void print(Node* root,int level)
    {
        if(root==NULL)
            return;
        if(level==1)
            cout<<root->data<<" ";
        else if(level>1)
        {
            print(root->left,level-1);
            print(root->right,level-1);
        }
    }
///////////////////////////////////////////////////////////////////////
//actual function to display elements of BST

	void levelOrder(Node * root){
        int h=height(root);
        for(int i=1;i<=h;i++)
            print(root,i);
	}
///////////////////////////////////////////////////////////////////////
