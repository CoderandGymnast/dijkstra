#include "Graph.h"

int main()
{
	Graph graph;
	graph.inputFromFile("graph.txt");

	while (true)
	{
		int fromID, toID;
		cout << "\nEnter starting point: ";
		cin >> fromID;
		cout << "Enter target point: ";
		cin >> toID;

		Point *from = graph.getPointByID(fromID);
		Point *to = graph.getPointByID(toID);

		if(!from || !to) continue;

		graph.shortestPath(from, to);
	}
}
