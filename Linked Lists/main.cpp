//  Linked Lists
//
//  Created by Leslie Musengi on 2020/06/28.
//  Copyright © 2020 Leslie Musengi. All rights reserved.

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head{NULL};

void insert(int list_elem);
void display();


int main(){
    int num;
    
    cout << "How many numbers do you need to add?: ";
    cin >> num;
    
    int list_elem;
    for(int i{0}; i < num; i++){
        cout << "Enter a list element: ";
        cin >> list_elem;
        insert(list_elem);
        display();
    }
  
    return 0;
}


void insert(int list_elem){
    Node *last = new Node;
    
    last->data = list_elem;
    last->link = head;
    head = last;
}

void display(){
    Node *current = head;
    
    cout << "Your list has the following elements: " << endl;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->link;
    }
    cout << endl;
}
