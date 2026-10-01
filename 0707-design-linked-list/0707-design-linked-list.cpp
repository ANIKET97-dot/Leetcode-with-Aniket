class MyLinkedList {
    struct Node {
        int val;
        Node* next;

        Node(int x) {
            val = x;
            next = nullptr;
        }
    };

    Node* head;
    int size;

public:
    MyLinkedList() {
         head = nullptr;
        size = 0;
    }
    
    int get(int index) {
         if (index < 0 || index >= size) {
            return -1;
        }

        Node* temp = head;

        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;

        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        size++;
    }
    
    void addAtIndex(int index, int val) {
         if (index < 0) {
            index = 0;
        }

        if (index > size) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;

        // Go to the node before index
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        if (index == 0) {
            Node* temp = head;

            head = head->next;

            delete temp;

            size--;
            return;
        }

        Node* temp = head;

        // Go to the node before index
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* deleteNode = temp->next;

        temp->next = deleteNode->next;

        delete deleteNode;

        size--;
    }
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */