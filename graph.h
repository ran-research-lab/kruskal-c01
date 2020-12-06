#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

class WeightedEdge{
public:
    // a and b are the joined vertices, w is the weight of the edge
    int a, b, w;
    WeightedEdge()  {}
    WeightedEdge(int aa, int bb, int ww) : a(aa),b(bb),w(ww) {}
    void set(int aa, int bb, int ww) { a = aa; b = bb; w = ww; }
    bool operator<(const WeightedEdge &lSide) const;
};


class Graph {
private:
    vector<WeightedEdge> edgeList;

public:

    Graph() { edgeList.resize(0); }
    void addWeightedEdge(int aa, int bb, int w);

    vector<WeightedEdge> minSpanningTree();
};




#endif

