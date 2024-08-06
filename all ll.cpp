#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }

    void print(Node* head) {
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

    Node* converttoll(const vector<int>& arr) {
        if (arr.empty()) return nullptr;  // Handle empty vector case
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for (int i = 1; i < arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

    Node* removehead(Node* head) {
        if (head == nullptr) return head;
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* deletetail(Node* head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
};

int main() {
    vector<int> arr = {15, 5, 8, 7};
    Node node(0);  // Temporary Node instance to call methods
     
    Node* head = node.converttoll(arr);  // Call method on the instance

head = node.deletetail(head);  // Delete the tail node
    node.print(head);  // Print the list

    // head = node.removehead(head);  // Remove the head node
    // node.print(head);  // Print the list again

    // Clean up remaining nodes
    // while (head != nullptr) {
    //     head = node.removehead(head);
    // }

    return 0;
}
