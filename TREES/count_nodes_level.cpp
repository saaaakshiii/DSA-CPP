//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

/* Computes the number of nodes in at level in a tree. */
int Count(Node *root,int L);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n,L;
     scanf("%d%d\n",&n,&L);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
 
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout<<Count(root,L);
     cout << endl;
  }
  return 0;
}

// } Driver Code Ends


//User function Template for C++

/*
Structure of node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

*/

int countNodes(Node *node, int currLvl, int desiredLvl){
    
    if (!node)
        return 0;

    // If the current level matches the desired level, count this node
    if (currLvl == desiredLvl)
        return 1;

    // Recursively count nodes at the desired level in left and right subtrees
    int left = countNodes(node->left, currLvl + 1, desiredLvl);
    int right = countNodes(node->right, currLvl + 1, desiredLvl);

    return left + right;
}

int Count(Node *node,int L){
    //Your code here
    
    return countNodes(node, 1, L);
}