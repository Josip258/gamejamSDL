//Koristeno za račuanje putanje
struct Node{
    Node* last;
    Node* next;
    int G_cost;
    int H_cost;
    int x;
    int y;
};

class Entity{
    float pos_x;
    float pos_y;

    private:
        Node* findPath(int target_x, int target_y);
        bool move(int target_x, int target_y);
};