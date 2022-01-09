pair<bool, int> timestamp(Node *root, int target, int *val)
        {
            if(root == NULL) return make_pair(false, 0);
            
            pair<bool, int> l, r;
            l = timestamp(root->left, target, val);
            r = timestamp(root->right, target, val);
            
            if(root->data == target){
                *val = max(*val, max(l.second, r.second));
                return make_pair(true, 1);
            }
            
            if(l.first == true){ 
                *val = max(*val, r.second + l.second);
                return make_pair(true, l.second+1);
            }
            
            if(r.first == true){ 
                *val = max(*val, r.second + l.second);
                return make_pair(true, r.second+1);
            }
            
            return make_pair(false, max(l.second, r.second) + 1);
            
        }
    
        int minTime(Node* root, int target) 
        {
            int val = 0;
            timestamp(root, target, &val);
            return val;
        }