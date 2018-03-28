#include "DirectedGraph.h"

using namespace std;

DirectedGraph::DirectedGraph(const int number_of_vertices)
{
	_verticesCount = number_of_vertices;

	// Allocating the memory from the beginning
	_adjacencyList.reserve(number_of_vertices);

	for (auto i = 0; i < number_of_vertices; i++)
	{
		_adjacencyList[i].resize(1);
		_adjacencyList[i][0] = i;
	}
}

void DirectedGraph::create_edge(const int from, const int to)
{
	// todo: has to check whether the edge already exists

	// check whether TO is a higher value than the last element in the list

	auto& current_list = _adjacencyList[from];

	if (current_list[current_list.size() - 1] < to)
	{
		current_list.push_back(to);
	}
	else
	{
		int index = 0;
		while (current_list[index] < to)
		{
			index++;
		}
		current_list.insert(current_list.begin() + index, to);
	}

}
