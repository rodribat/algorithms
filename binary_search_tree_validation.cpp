The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

   bool checkBST(Node* root)
   {
       std::vector<int> v;
       inOrderTraversal(root, v);
       
       for (int i=1; i<v.size(); i++)
           if (v[i] <= v[i-1])
               return false;
       
       return true;
   }

   void inOrderTraversal(Node* root, std::vector<int> &v)
   {
       if (root->left != NULL)
           inOrderTraversal(root->left, v);
       
       v.push_back(root->data);
       
       if (root->right != NULL)
           inOrderTraversal(root->right, v);
   }

