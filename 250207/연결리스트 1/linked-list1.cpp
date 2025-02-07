#include <iostream>
#include <string>
using namespace std;

struct Node{
    string data;

    Node *prev, *next;
    Node(string data):data(data),prev(nullptr),next(nullptr){}
};

void InsertNext(Node *u, Node *singleton){
    singleton->prev = u;
    singleton->next = u->next;
    
    // singleton의 이전 노드의 next와
    //             다음 노드의 prev를 설정
    if (singleton->prev != nullptr)
        singleton->prev->next = singleton;

    if (singleton->next != nullptr)
        singleton->next->prev = singleton;
}

void InsertPrev(Node *u, Node *singleton){
    singleton -> prev = u->prev;
    singleton -> next = u;

    if(singleton->prev != nullptr) 
        singleton->prev->next = singleton;
    if(singleton->next != nullptr){
        singleton->next->prev = singleton;
    }
}

void PrintNode(Node *cur){
    if(cur->prev == nullptr){
        cout << "(Null)" << " ";
    }
    else{
        cout << cur->prev->data << " ";
    }
    
    cout << cur->data << " ";

    if(cur->next == nullptr){
        cout << "(Null)" << endl;
    }
    else{
        cout << cur->next->data << endl;
    }
}

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    Node *cur = new Node(str);
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        if(num == 1){
            cin >> str;
            Node *singleton = new Node(str);
            InsertPrev(cur,singleton);
        }
        else if(num == 2){
            cin >> str;
            Node *singleton = new Node(str);
            InsertNext(cur,singleton);
        }
        else if(num == 3){
            if(cur->prev != nullptr){
                cur = cur->prev;
            }
        }
        else if(num == 4){
            if(cur->next != nullptr){
                cur = cur->next;
            }
        }
        PrintNode(cur);
    }
    return 0;
}