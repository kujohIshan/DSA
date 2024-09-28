//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int findpos(int in[], int element, int n){
        
        for(int i= 0; i<n;i++){
            if(in[i]== element){
                return i;
            }
        }
        return -1;
    }
    Node* build(int in[], int pre[], int &index, int start, int end, int n)
    {
        if(index >= n || start> end){
            return NULL;
        }
        // make root element
        
        int ele = pre[index];
        Node* temp= new Node(ele);
        
        // find position of the node
        int pos =findpos(in ,ele, n);
        index++; // increase the index
        
        // recursive call left
        temp->left = build(in , pre ,index , start , pos -1 ,n);
        // recursive call right
        temp->right = build(in , pre , index, pos+1, end , n);
        
        return temp;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int pre_index = 0;
        Node* ans = build(in,pre,pre_index, 0, n-1, n);
        return ans;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends