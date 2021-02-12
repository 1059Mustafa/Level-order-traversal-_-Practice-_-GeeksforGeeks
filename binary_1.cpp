vector<int> levelOrder(Node* node)
{
    vector<int>v;
    queue<Node*>q;
    q.push(node);
    while(q.size()>0)
    {
        Node* temp=q.front();
        q.pop();
        v.push_back(temp->data);
        if(temp->left!=NULL)
        {
            q.push(temp->left);
            
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
    return v;
    
}
