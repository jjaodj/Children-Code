#include <iostream>
#include <string.h>
#define max 5
using namespace std;

struct SV
{ 
    char ten[max]; 
    char MSSV[max]; 
    float diemtb; 
};

struct Node
{ 
    SV Info; 
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

Node* CreateNode(SV x) 
{ 
    Node *p; 
    p = new Node; 
    if ( p == NULL) exit(1); 
    p ->Info = x; 
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
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void bigInput(List &l)
{
	cout<<"Nhap thong tin sinh vien "<<endl;    
    SV x;
    cout<<"Nhap ten sinh vien ";
    cin.getline(x.ten, sizeof x.ten);
    if(strlen(x.ten)==0)
        return;
    cout<<"Nhap ma so sinh vien ";
    cin>>x.MSSV;
    cout<<"Nhap diem trung binh ";
    cin>>x.diemtb;
    Node *p= new Node;
    p =CreateNode(x);
    AddHead(l, p);   
}

void smallInput(SV &x)
{ 
    cout<<"Nhap ten sinh vien ";
    cin>>x.ten;
    cout<<"Nhap ma so sinh vien ";
    cin>>x.MSSV;
    cout<<"Nhap diem trung binh ";
    cin>>x.diemtb;
}

Node *Search(List l, char x[]) 
{
    cout<<"Nhap thong MSSV can tim ";
    cin>>x;
    Node *p; 
    p = l.pHead; 
    while ((p!= NULL) && (p->Info.MSSV != x)) 
        p = p->pNext; 
    return p; 
}

void PrintList(List l) 
{ 
    Node *p; 
    p = l.pHead; 
    while (p != NULL) 
    { 
        cout<<"Ten ";
        cout<< p->Info.ten<<endl; 
        cout<<"MSSV ";
        cout<< p->Info.MSSV<<endl; 
        cout<<"Diem trung binh ";
        cout<< p->Info.diemtb<<endl;  
        p = p->pNext; 
    } 
}
int RemoveHead(List &l, int &x) 
{ 
    Node *p; 
    if (l.pHead != NULL) 
    { 
        p = l.pHead; 
        x = p->Info; 
        l.pHead = l.pHead->pNext; 
        delete p; 
        if (l.pHead == NULL) 
            l.pTail=NULL; 
        return 1; 
    } 
    return 0; 
}
int RemoveAfterQ(LIST &l,Node *q, int &x) 
{ 
    Node *p; 
    if(q != NULL) 
    { 
        p = q->pNext; 
        if (p != NULL) 
        { 
            if (p == l.pTail) 
                l.pTail = q; 
            q->pNext = p->pNext; 
            x = p->Info; 
            delete p; 
        } 
        return 1; 
    } 
    else return 0; 
}

int RemoveX(List &l, char x[]) 
{ 
    cout<<"Nhap MSSV cua sinh vien can xoa ";
    cin>>x; 
    Node *p,*q = NULL; p=l.Head; 
    while((p != NULL) && (p->Info.MSSV != x)) 
    {   
        q = p; 
        p = p->Next; 
    } 
    if (p == NULL)  
        return 0; 
    if (q != NULL) 
        RemoveAfterQ(l,q,x); 
    else 
        RemoveHead(l,x); 
    return 1; 
}

int main()
{
    char a[max];
    List l;
    Node *p,*q;
    SV x;
    CreateList(l);
    bigInput(l);
    PrintList(l);
    return 0;
}