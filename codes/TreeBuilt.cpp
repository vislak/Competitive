
#include <bits/stdc++.h> 
using namespace std; 
#include<vector>

class node 
{ 
	public: 
	int data; 
	node* left, *right; 
}; 



node* newNode(int data) 
{ 
	node* Node = new node(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 

	return(Node); 
} 
 void Vertical(node*A,int x,vector<vector<int> >&v){
        if(!A->left&&!A->right){ v[x].push_back(A->data);
          return;
         }
        Vertical(A->left,x-1,v);
        Vertical(A->right,x+1,v);
        v[x].push_back(A->data);
        return ;
    
        
    }

/* Driver code*/
int main() 
{ 
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 

	node*A=root;
	 int x=0;
    
    
    while(root->left){
        x++;
        root=root->left;
    }
    root=A;
      x++;
    vector<vector<int> >v;
    Vertical(A,x,v);
    vector<vector<int> > ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
    	vector<int>::iterator itr2;
    	for(itr2=itr->begin();itr2!=itr->end();itr2++){
    		cout<<*itr2<<" ";
    	}
    	cout<<endl;
    }

    



	

	return 0; 
} 
