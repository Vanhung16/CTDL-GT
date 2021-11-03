#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien
{
    string masv;
    string hoten;
    int namsinh;
    string noisinh;
};

void nhap(SinhVien &sv)
{
    cout << "Ma SV: ";      fflush(stdin);      getline(cin, sv.masv);
    cout << "Ho ten: ";     fflush(stdin);      getline(cin, sv.hoten);
    cout << "Nam sinh: ";                       cin >> sv.namsinh;
    cout << "Noi sinh: ";   fflush(stdin);      getline(cin, sv.noisinh);
}

void xuat(SinhVien sv)
{
    cout << "Ma SV: " << sv.masv << endl;
    cout << "Ho ten: " << sv.hoten << endl;
    cout << "Nam sinh: " << sv.namsinh << endl;
    cout << "Noi sinh: " << sv.noisinh << endl;
}

struct Node
{
    SinhVien info;
    Node* pNext;
};
typedef Node* TRO;


void khoitao(TRO &l)
{
    l = NULL;
}

void addHead(TRO &l, SinhVien sv)
{
    TRO p = new Node;
    p->info = sv;
    p->pNext = l;
    l = p;
}

void addLast(TRO &l, SinhVien sv)
{
    TRO p = new Node;
    p->info = sv;
    p->pNext = NULL;
    if (l == NULL)
    {
        l = p;
    }
    else
    {
        Node *q = l;
        while (q->pNext != NULL)
        {
            q = q->pNext;
        }
        q->pNext = p;
    }
}

void addAt(TRO &l, SinhVien sv, int k)
{
    TRO q = l;
    TRO p = new Node;
    p->info = sv;
    for (int i = 0; i < k - 1; i++)
    {
        q = q->pNext;
    }
    p->pNext = q->pNext;
    q->pNext = p;
}

void removeHead(TRO &l)
{
    if (l == NULL)
    {
        cout << "Khong co gi de xoa!!";
    }
    else
    {
        TRO p = l;
        l = p->pNext;
        delete p;
    }
}


void removeTail(TRO &l)
{
    if (l == NULL)
    {
        cout << "Khong co gi de xoa!!" << endl;
    }
    else
    {
        TRO p = l;
        if (p->pNext->pNext != NULL)
        {
            p = p->pNext;
        }
        p->pNext = NULL;
    }
}

void removeAt(TRO &l, int k)
{
    if (k == 0)
    {
        removeHead(l);
    }
    else
    {
        TRO p = l;
        for (int i = 0; i < k - 1; i++)
        {
            p = p->pNext;
        }
        TRO q = p;
        p->pNext = q->pNext;
        q->pNext = NULL;
    }
}
void nhapDS(TRO &l)
{
    int n;
    cout << "Nhap so sinh vien can nhap: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << "\n\nNHAP THONG TIN SINH VIEN THU " << i + 1 << endl;
        SinhVien sv;
        nhap(sv);
        addLast(l, sv);
        i++;
    }
}

void xuatDS(TRO l)
{
    TRO p = l;
    while (p != NULL)
    {
        cout << "\nDANH SACH\n";
        xuat(p->info);
        p = p->pNext;
        cout << endl;
    }
}

TRO Search(TRO l)
{
    Node* p = l;
    while (p != NULL)
    {
        if (p->info.masv.compare("K") == 0)
        {
            return p;
        }
        p = p->pNext;
    }
    return NULL;
}

int main()
{
    TRO l;
    khoitao(l);
    nhapDS(l);
    xuatDS(l);
}
