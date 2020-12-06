#include "graph.h"
using namespace std;

#include<iostream>
#define CATCH_CONFIG_MAIN
#include "graph.h"
#include <vector>
#include "catch_amalgamated.hpp"
using namespace std;



TEST_CASE( "Pushing and popping to the AStack", "[AStack]" ) {
    Graph G;
    int tmp[][3] = {{0,1,4}, {0,2,4},  {0,4,6}, {1,2,2}, {2,3,8}, {3,4,9}};
    for (auto e: tmp) G.addWeightedEdge(e[0],e[1],e[2]);

    G.minSpanningTree();


}