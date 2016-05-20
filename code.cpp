/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) 
    {
		vector<int> result;
        if(root == NULL)
            return result;
        printTree(root,result);
        return result;
    }
 private:
    void printTree(TreeNode *root,vector<int> &result)
    {
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty())
        {
            TreeNode *ptr = que.front();
            result.push_back(ptr->val);
            if(ptr->left)
            {
                que.push(ptr->left);
            }
            if(ptr->right)
            {
                que.push(ptr->right);
            }
            que.pop();
        }
    }
};
