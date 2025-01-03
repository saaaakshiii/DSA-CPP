//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


struct Node{
  
  int data;
  Node *left;
  Node *right;
  
};

Node *newNode(int key)
{
    Node *temp=new Node;
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Node *insertNode(Node *head,int key)
{
    if(head==NULL)
    head=newNode(key);
    else
    {
        if(key<=head->data)
        head->left=insertNode(head->left,key);
        else
        head->right=insertNode(head->right,key);
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++


/*

struct Node{
  
  int data;
  Node *left;
  Node *right;
  
};
*/

void calculateLeafSum(Node* node, bool& include, int& sum) {
    if (!node) return;

    // Traverse the left subtree
    calculateLeafSum(node->left, include, sum);

    // Check if the current node is a leaf
    if (!node->left && !node->right) {
        if (include) {
            sum += node->data;
        }
        // Toggle include for alternating leaf nodes
        include = !include;
    }

    // Traverse the right subtree
    calculateLeafSum(node->right, include, sum);
}

int leafSumAlternate(Node *head)
{
    //Your code here
    
    int sum = 0;
    bool include = true; // Start by including the first leaf node

    // Start in-order traversal
    calculateLeafSum(head, include, sum);

    return sum;
}

//{ Driver Code Starts.


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	   
	    Node *root=NULL;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        root=insertNode(root,x);
	    }
	  
	    cout<<leafSumAlternate(root)<<endl;;
	    
	    
	}
	return 0;
}
// } Driver Code Ends