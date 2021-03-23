#include "graph.h"
using namespace std;

#include<iostream>
#include <vector>
using namespace std;

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
        printf("\x1B[31mAssertion (%s) failed %s at line %d\033[0m\t\t\n", #chk, __FILE__,__LINE__); \
    else { \
        printf("\x1B[32mPassed line %d: %s\033[0m\t\t\n", __LINE__, #chk); \
        passedAssertions++; \
    }
#define assertionReport() { \
     printf("==========================================\n"); \
     printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions); \
     printf("\n"); \
    }
//*******************************************************


int main() {
  Graph G;
  int tmp[][3] = {{0,1,4}, {0,2,4},  {0,4,6}, {1,2,2}, {2,3,8}, {3,4,9}};
  for (auto e: tmp) G.addWeightedEdge(e[0],e[1],e[2]);

  G.minSpanningTree();

  assertionReport();

}