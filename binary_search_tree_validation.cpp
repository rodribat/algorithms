/*
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

#include<limits.h>

   /* second try - O(n) time and space complexity and only one recursive function */
   bool checkBST(Node* root) /* improved*/
   {
       return checkBST_improved(root, INT_MIN, INT_MAX);
   }

   bool checkBST_improved(Node* root, int min, int max)
   {
       if (root == NULL)
           return true;
       
       if (root->data < min || root->data > max)
           return false;
       
       return (checkBST_improved(root->left, min, root->data-1) && checkBST_improved(root->right, root->data+1, max));
   }



   /* first try - O(n) space and time complexity */
   bool checkBST_old(Node* root)
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
