#include "DirectedGraph.h"

using namespace std;

DirectedGraph::DirectedGraph(int numberOfVertices)
{
	_verticesCount = numberOfVertices;

	// Allocating the memory from the beginning
	_adjacencyList.reserve(numberOfVertices);
}
