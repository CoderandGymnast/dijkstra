# SDD: 
class Point {
	public:
	int id;
}

class  Edge {
	public:
	int cost;
	Point* from;
	Point* to;
}

class Graph {
	vector <Point*> points;
	vector<Edge*> edges;

	public: 
	void Graph() {

	}
	
	void inputFromFile(string file) { 
		// Adjacency matrix.
	}

	int shortestPath(Point* from, Point* to);
	vector<Edge*> getEdges(Point* point); // Get adjacency edges from this point.
	Point* getPointById(int id);
}

* [Reference](https://www.geeksforgeeks.org/printing-paths-dijkstras-shortest-path-algorithm/)

