#pragma once
#include <vector>

class DirectedGraph
{
	private:
		int _verticesCount;
		std::vector<std::vector<int>> _adjacencyList;

	public:
		DirectedGraph(int numberOfVertices);
		void create_edge(int from, int to);
};

