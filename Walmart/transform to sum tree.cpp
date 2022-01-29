int solve(Node * root){
    if(root==NULL){
        return 0;
    }
    int lt=solve(root->left);
    int rt=solve(root->right);
    int val=root->data;
    root->data=lt+rt;
    
    
    return root->data + val;
}
void makezero(Node * root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        root->data=0;
        return ;
    }
}
void toSumTree(Node *node)
{
    // Your code here
    int x=solve(node);
    
    //makezero(node);
}
