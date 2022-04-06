#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

struct SV
{ 
    char ten[40]; 
    char MSSV[40]; 
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
		l.pHead = p;
        l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void bigInput(List &l)
{
    int tam=1;
	cout<<"Nhap thong tin sinh vien: "<<endl;    
    while (tam!=0)
    {
        SV x;
        fflush(stdin);
        cout<<"Nhap ten sinh vien ";
        cin.getline(x.ten, sizeof x.ten);
        fflush(stdin);
        if(strlen(x.ten)==0)
            return;
        cout<<"Nhap ma so sinh vien ";
        cin>>x.MSSV;fflush(stdin);
        cout<<"Nhap diem trung binh ";
        cin>>x.diemtb;fflush(stdin);
        Node *p= new Node;
        p =CreateNode(x);
        AddHead(l, p);  
    } 
}

void smallInput(SV &x)
{ 
    fflush(stdin);
    cout<<"Nhap ten sinh vien ";
    cin.getline(x.ten, sizeof x.ten);fflush(stdin);
    cout<<"Nhap ma so sinh vien ";
    cin>>x.MSSV;fflush(stdin);
    cout<<"Nhap diem trung binh ";
    cin>>x.diemtb;
}

Node *Search(List l, char x[]) 
{
    cout<<"Nhap thong MSSV can tim: ";
    cin>>x;
    fflush(stdin);
    Node *p; 
    p = l.pHead; 
    while ((p!= NULL) && ((p->Info.MSSV) != x)) 
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

void RemoveHead(List &l) 
{ 
    Node *p; 
    if (l.pHead != NULL) 
    { 
        p = l.pHead;  
        l.pHead = l.pHead->pNext; 
        delete p; 
        if (l.pHead == NULL) 
            l.pTail=NULL; 
        return ; 
    }  
}

void RemoveAfterQ(List &l,Node *q) 
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
            delete p; 
        }  
    } 
}

int RemoveX(List &l, char x[]) 
{ 
    cout<<"Nhap MSSV can xoa ";
    cin>>x; 
    Node *q = NULL, *p=l.pHead; 
    while((p != NULL) && (strcmp(p->Info.MSSV,x) != 0)) 
    {   
        q = p; 
        p = p->pNext; 
    } 
    if (p == NULL)  
        return 0; 
    if (q != NULL) 
        RemoveAfterQ(l,q); 
    else 
        RemoveHead(l); 
    return 1; 
}

void output(Node *p) 
{ 
    cout<<"Ten SV "<<p->Info.ten<<endl; 
    cout<<"MSSV; "<<p->Info.MSSV<<endl;
    cout<<"DTB: "<<p->Info.diemtb<<endl;
}

void loc(List l)
{ 
    Node *p;
    p=l.pHead;
    while(p!= NULL)
    {
        if(p->Info.diemtb >=5)
            output(p);
        p=p->pNext;
    }
}

void XepLoai(List l)
{
    Node *p;
    p = l.pHead;
    while (p != NULL)
    {
        if (p->Info.diemtb <= 3.6)
        {
            cout << "Xep Loai: Yeu" << endl;
            output(p);
        }
        else if (p->Info.diemtb >= 5.0 && p->Info.diemtb < 6.5)
        {
            cout << "Xep Loai: Trung binh" << endl;
            output(p);
        }
        else if (p->Info.diemtb >= 6.5 && p->Info.diemtb < 7.0)
        {
            cout << "Xep Loai: Trung binh kha" << endl;
            output(p);
        }
        else if (p->Info.diemtb >= 7.0 && p->Info.diemtb < 8.0)
        {
            cout << "Xep Loai: Kha" << endl;
            output(p);
        }
        else if (p->Info.diemtb >= 8.0 && p->Info.diemtb < 9.0)
        {
            cout << "Xep Loai: Gioi" << endl;
            output(p);
        }
        else
        {
            cout << "Xep loai: Xuat sac";
            output(p);
        }
        p = p->pNext;
    }
}

void sapxep(List &l)
{
    Node *p,*q;
    for(p=l.pHead; p!=l.pTail;p=p->pNext)
        for(q=p->pNext;q!= NULL;q=q->pNext)
            if(p->Info.diemtb>q->Info.diemtb)
                {
                    SV x =p->Info;      //sử dụng swap(p->Info,q->Info);
                    p->Info=q->Info;
                    q->Info=x;
                }
    PrintList(l);
}

void insert(List &l)
{
    SV add;
    cout<<"Nhap thong tin can them: ";
    smallInput(add);
    Node *m= CreateNode(add);
    AddTail(l,m);
    sapxep(l);
    cout<<"Danh sach sau khi thay doi: "<<endl;
    PrintList(l);
}

int main()
{
    char a[40];
    List l;
    Node *p,*q;
    SV x;
    CreateList(l);
    bigInput(l);

    

    //In danh sach
    PrintList(l);
    
    //Tim sinh vien 
    output(Search(l,a));

    //Xoa sinh vien co ma so X
    RemoveX(l,a);

    //Lọc sinh viên
    loc(l)

    //xếp loại
    XepLoai(l);

    //sắp xếp theo thứ tự
    sapxep(l);

    //chèn thêm
    insert(l);

    return 0;
}