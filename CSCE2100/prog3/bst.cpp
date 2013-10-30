001	#include<iostream>
002	using namespace std;
003	class node{
004	    public :
005	        int key;
006	        node *left;
007	        node *right;
008	        node(){
009	            key=0;
010	            left=NULL;
011	            right=NULL;
012	        }
013	        node(int n){
014	            key=n;
015	            left=NULL;
016	            right=NULL;
017	        }
018	};
019	class tree{
020	    public:
021	        node *root;
022	        node *current,*parent;
023	        int subnodeNum;
024	        int AllNodeNum;
025	        tree(){
026	            root=parent=current=NULL;
027	            AllNodeNum=0;
028	        };
029	        void insert(node *target){
030	            current=parent=root;
031	            if(root==NULL){
032	                root=target;
033	                return;
034	            }
035	            else{
036	                if(!search(target->key)){
037	                    if(target->key<parent->key) parent->left=target;
038	                    else parent->right=target;
039	                }
040	                else cout<<target->key<<" Already Exist"<<endl;
041	            }          
042	            AllNodeNum++;                                                                                        
043	            return;
044	        };
045	        node *search(int inputKey){
046	            parent=current=root;
047	            while(current){
048	                if(inputKey==current->key) return current;
049	                parent=current;
050	                if(inputKey<current->key) current=current->left;
051	                else current=current->right;
052	            }
053	            return NULL;
054	        };
055	        void searchPath(int key){
056	            current=parent=root;
057	            int *pathAry=new int[AllNodeNum];
058	            int i=0;
059	            while(current){
060	                if(key==current->key){
061	                    for(int j=0;j<i;j++) cout<<pathAry[j]<<"->";
062	                    cout<<current->key<<endl;
063	                    delete []pathAry;
064	                    return;
065	                }
066	                if(key<current->key){
067	                    pathAry[i++]=current->key;
068	                    parent=current;
069	                    current=current->left;
070	                }
071	                else{
072	                    pathAry[i++]=current->key;
073	                    parent=current;
074	                    current=current->right;
075	                }
076	            }
077	            cout<<"Key don't exist in Tree"<<endl;
078	            delete []pathAry;
079	            return;
080	        };
081	        node *del(int key){
082	            node *temp;
083	            temp=search(key);   //calculate parent too!
084	            int nodeEdgeNum=0;
085	            if(temp==NULL){
086	                cout<<"This key don't exist this BST"<<endl;
087	                return NULL;
088	            }
089	            else if(temp->left==NULL&&temp->right==NULL){
090	                //Case : Node don't have child
091	                if(temp==parent&&parent==current) root=NULL;
092	                //Case : On Root, Has only 1 Node
093	                else if(parent->left==temp) parent->left=NULL;
094	                else parent->right=NULL;
095	            }
096	            else if(temp->left!=NULL&&temp->right!=NULL){
097	                //Case : Node have 2 children          
098	                node *chnode=temp->left;
099	                node *chnodeParent=temp;
100	                while (chnode->right){
101	                        chnodeParent=chnode;
102	                        chnode=chnode->right;
103	                }
104	                int slot=chnode->key;    //change key
105	                chnode->key=temp->key;
106	                temp->key=slot;
107	                if(chnode->left)
108	                    if(chnodeParent==temp) chnodeParent->left=chnode->left;
109	                    else chnodeParent->right=chnode->left;
110	                else{
111	                    if(chnodeParent==temp) chnodeParent->left=NULL;
112	                    else chnodeParent->right=NULL;
113	                }
114	                AllNodeNum--;
115	                return chnode;
116	            }
117	            else{   //Case : Node have 1 child
118	                if(temp->left){
119	                    if(parent==current&&temp==root) root=temp->left;
120	                    else if(parent->left==temp) parent->left=temp->left;
121	                    else parent->right=temp->left;                       
122	                }
123	                else{
124	                    if(parent==current&&temp==root) root=temp->right;
125	                    else if(parent->left==temp) parent->left=temp->right;
126	                    else parent->right=temp->right;  
127	                }
128	            }
129	            AllNodeNum--;
130	            return temp;
131	        };
132	        void printTree(){  //using preorder
133	            printTree(root);
134	            cout<<endl;
135	            if(!root) cout<<"Empty Tree"<<endl<<endl;
136	        };
137	        void printTree(node *point){   
138	            if(point){
139	                cout<<"Key Value : "<<point->key<<endl<<"Current Node : ";
140	                cout<<point<<"  Left Node : "<<point->left;
141	                cout<<"  Right Node : "<<point->right<<endl;
142	                printTree(point->left);
143	                printTree(point->right);
144	            }
145	        };
146	};
147	int main(){
148	    int select,num;
149	    node *delNode;
150	    tree *bst=new tree();
151	    cout<<"<Binary Search Tree>"<<endl;
152	    while(1){
153	        cout<<"========================================================"<<endl;
154	        cout<<"1. Insert"<<"  2. Delete"<<"  3. Search Path"<<"  4. Print";
155	        cout<<"  0. Exit"<<endl;
156	        cout<<"========================================================"<<endl;
157	        cout<<"Plz Enter Num : ";
158	        cin>>select;
159	        switch(select){
160	            case 1 :{
161	                cout<<"Enter What you want to Insert Num : ";
162	                cin>>num;
163	                node *temp=new node(num);
164	                bst->insert(temp);
165	                break;
166	            }
167	            case 2 :
168	                cout<<"Enter What you want to Delete Num : ";
169	                cin>>num;
170	                delNode=bst->del(num);
171	                if(delNode!=NULL) delete delNode;
172	                break;
173	            case 3 :
174	                cout<<"Enter What you want to Search Num : ";
175	                cin>>num;
176	                bst->searchPath(num);
177	                break;
178	            case 4 :
179	                bst->printTree();
180	                break;
181	            case 0 :
182	                cout<<"--------------------------------"<<endl;
183	                cout<<"Thanks for using Program GoodBye"<<endl;
184	                exit(1);
185	                break;
186	            default :
187	                cout<<"Plz Re-Enter Menu"<<endl;
188	                break;
189	        }
190	    }
191	    return 0;
192	}