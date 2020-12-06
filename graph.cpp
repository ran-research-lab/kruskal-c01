#include "graph.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

// We define this function to be able to call on the sort function
// for a vector of WeightedEdges.
bool WeightedEdge::operator<(const WeightedEdge &lSide) const {
    return w < lSide.w;
}

void Graph::addWeightedEdge(int a, int b, int w) {
    edgeList.push_back(WeightedEdge(a,b,w));
}



// function minSpanningTree:
// Implements Kruskal's minimum spanning tree algorithm and outputs
// the list of edges of the min spanning tree.

vector<WeightedEdge> Graph::minSpanningTree() {

    // This will sort the edges in ascending weight order
    sort(edgeList.begin(), edgeList.end());

    vector<WeightedEdge> A;

    // Uncomment to see the edges in ascending order of weight
    // for (auto e: edgeList) cout << e.a << " " << e.b << " " << e.w << endl;
    return A;

}