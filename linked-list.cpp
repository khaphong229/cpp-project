#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

struct Node{
	int data;
	Node *next;
}

typedef struct Node* node;

//Cap phat dong mot node moi voi du lieu la so nguyen x
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

//kiem tra rong 
bool empty(node a){
	return a=NULL;
}

int size(node a){
	int cnt=0;
	while (a!=NULL){
		++cnt;
		a=a->next;
	}
	return cnt;
}

///them mot phan tu vao dau danh sach lien ket
void insertFirst(node &a, int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}

//them 1 phan tu vao cuoi danh sach lien ket

void insertLast(node &a, int x){
	node tmp= makeNode(x);
	if(a==NULL){
		a=tmp;
	}else{
		node p=a;
		while(p->next != NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}


//

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);


	return 0;
}
