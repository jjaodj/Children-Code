#include <iostream>
using namespace std;

struct songuyen
{
    int sn;
};

struct Node
{ 
    songuyen value; 
    Node *pNext; 
};

struct List
{ 
    Node *pHead; 
    Node *pTail; 
};

void CreateList(List &l) 
{ 
    l.pHead = NULL; 
    l.pTail = NULL; 
}

Node* CreateNode(songuyen x) 
{ 
    Node *p; 
    p = new Node; 
    if ( p == NULL) exit(1); 
    p ->value = x; 
    p->pNext = NULL; 
    return p; 
}

void AddHead(List &l, Node* p) 
{ 
    if (l.pHead==NULL) 
    { 
        l.pHead = p; 
        l.pTail = l.pHead; 
    } 
    else 
    { 
        p->pNext = l.pHead; 
        l.pHead = p; 
    } 
}

void AddTail(List &l, Node *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
        l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void PrintList(List l) 
{ 
    Node *p; 
    p = l.pHead; 
    while (p != NULL) 
    { 
        cout<<p->value.sn<<endl;  
        p = p->pNext; 
    } 
}

void cauB(List &l)
{
    int temp=1;
    cout<<"Nhap gia tri cua cac so nguyen: "<<endl;
    while(temp!=0)
    {
        songuyen x;
        fflush(stdin);
        cin>>x.sn;
        fflush(stdin);
        if(x.sn ==-1)
            return;
        Node *p=new Node;
        p=CreateNode(x);
        AddTail(l,p);
    }
}

int snt(int n)
{
    int flag = 1;
    if (n <2) return flag = 0; 
    int i=2;
    while(i <n)
    {
        if( n%i==0 ) 
        {
            flag = 0;
            break; 
        }
        i++;
    }
    return flag;
}

void cauC(List l)
{
    Node *p;
    p=l.pHead;
    if (p==NULL) cout<<0;
    else
        while (p!= NULL)
        {
            if (snt(p->value.sn)==1 && p->value.sn>2)
                cout<<p->value.sn<<endl;
            p=p->pNext;
        }
}

void cauD(List &l)
{
Node *p,*q;
    for(p=l.pHead; p!=l.pTail;p=p->pNext)
        for(q=p->pNext;q!= NULL;q=q->pNext)
            if(p->value.sn < q->value.sn)
                swap(p->value,q->value);
    PrintList(l);
}
void get(songuyen &x)
{
    fflush(stdin);
    cout<<"Nhap so can them vao: "<<endl;
    cin>>x.sn;
}
void cauE(List &l)
{
    songuyen add;
    get(add);
    
    Node *m= CreateNode(add);
    AddTail(l,m);
    cauD(l);
    cout<<"Danh sach sau khi thay doi: "<<endl;
    PrintList(l);
}

int main()
{
    int a;
    List l;
    Node *p;
    songuyen x;
    CreateList(l);
    cauB(l);
    cauE(l);
    
    return 0;
}