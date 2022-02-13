class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
        {
            return root;
        }
        vector<int>v;
        fun(root,k,v);
        // Now this part represent 2 sum problem of take u forward
        int left=0,right=v.size()-1;
        while(left<right)
        {
        	if(v[left]+v[right]==k)
            {
            	return true;
        	}
        	else if(v[left]+v[right]>k)
            	    right--;
        	else
            	    left++;
    	}
        return false;
    }
    void fun(TreeNode*root,int k,vector<int>&v)// this function represents inorder traversal
    {
        if(root!=NULL)
        {
            fun(root->left,k,v);
            v.push_back(root->val);
            fun(root->right,k,v);
        }
    }
};
