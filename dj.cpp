#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

struct Node {
    int id;
    int distance; 
    Node* previous;
};

struct CompareNodes {
    bool operator()(Node* a, Node* b) {
        return a->distance > b->distance;
    }
};

vector<Node*> dijkstra(vector<vector<pair<int, int>>> graph, int start) {
    int numNodes = graph.size();
    vector<Node*> nodes(numNodes);
    for (int i = 0; i < numNodes; i++) {
        nodes[i] = new Node();
        nodes[i]->id = i;
        nodes[i]->distance = numeric_limits<int>::max();
        nodes[i]->previous = nullptr;
    }

    nodes[start]->distance = 0;

    priority_queue<Node*, vector<Node*>, CompareNodes> queue;
    queue.push(nodes[start]);

    while (!queue.empty()) {
        Node* current = queue.top();
        queue.pop();

        for (auto& neighbor : graph[current->id]) {
            int neighborId = neighbor.first;
            int weight = neighbor.second;

            if (nodes[neighborId]->distance > current->distance + weight) {
                nodes[neighborId]->distance = current->distance + weight;
                nodes[neighborId]->previous = current;
                queue.push(nodes[neighborId]);
            }
        }
    }

    return nodes;
}

int main() {
    int numNodes = 5;
    vector<vector<pair<int, int>>> graph(numNodes);

    graph[0].push_back({1, 4});
    graph[0].push_back({2, 2});
    graph[1].push_back({3, 5});
    graph[2].push_back({1, 1});
    graph[2].push_back({3, 8});
    graph[3].push_back({4, 3});
    graph[4].push_back({3, 2});

    vector<Node*> nodes = dijkstra(graph, 0);

    for (int i = 0; i < numNodes; i++) {
        cout << "Node " << i << ": distance = " << nodes[i]->distance << ", previous = ";
        if (nodes[i]->previous == nullptr) {
            cout << "null";
        } else {
            cout << nodes[i]->previous->id;
        }
        cout << endl;
    }

    return 0;
}