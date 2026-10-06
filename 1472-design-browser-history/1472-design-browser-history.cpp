class BrowserHistory {
public:
struct Node {
        string url;
        Node* prev;
        Node* next;

        Node(string u) {
            url = u;
            prev = nullptr;
            next = nullptr;
        }
    };

    Node* curr;
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        curr-> next = nullptr;

        newNode-> prev = curr;
        curr-> next = newNode;
        curr = newNode;
    }
    
    string back(int steps) {
        while (steps > 0 && curr-> prev != nullptr){
            curr = curr-> prev;
            steps--;
        }
        return curr-> url;
    }
    
    string forward(int steps) {
        while(steps > 0 && curr->next != nullptr) {
            curr = curr->next;
            steps--;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */