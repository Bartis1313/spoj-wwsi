#include <iostream>
#include <vector>
#include <list>
#include <utility>

int partition(std::vector<int>& arr, int left, int right)
{
	int x = arr.at(right);
	int i = (left - 1);

	for (int j = left; j <= right - 1; j++)
	{
		if (arr.at(j) <= x)
		{
			i++;
			std::swap(arr.at(i), arr.at(j));
		}
	}
	std::swap(arr.at(i + 1), arr.at(right));
	return (i + 1);
}

void quicksortR(std::vector<int>& arr, int left, int right)
{
	if (left < right)
	{
		auto mid = partition(arr, left, right);
		quicksortR(arr, left, mid - 1);
		quicksortR(arr, mid + 1, right);
	}
}


struct Vertex
{
	bool visited = false;
	int father = -1;
};

class Graph
{
public:
	Graph(int v);
	~Graph() {};
	void addEdgeManual(int v, int w);
	void addEdgeByInput();
	void addEdgeByPairs(const std::vector<std::pair<int, int>>& allPair);
	void DFS(int v, Vertex vert[], std::vector<int>& conn);
	void findConn(Vertex vert[]);
	int getCount() const { return m_v; }
private:
	int m_v;
	std::list<int>* nList;
};

Graph::Graph(int v)
{
	this->m_v = v;
	this->nList = new std::list<int>[m_v + 1]; // +1 bo spoj wywala
}

//Graph::~Graph()
//{
//	delete nList;
//}

void Graph::addEdgeManual(int v, int w)
{
	nList[v].push_back(w);
	nList[w].push_back(v);
}

void Graph::addEdgeByInput()
{
	int v, w;
	std::cin >> v, w;
	nList[v].push_back(w);
	nList[w].push_back(v);
}

void Graph::addEdgeByPairs(const std::vector<std::pair<int, int>>& allPair)
{
	for (int i = 0; i < allPair.size(); i++)
	{
		this->addEdgeManual(allPair.at(i).first, allPair.at(i).second);
	}
}

void Graph::DFS(int v, Vertex vert[], std::vector<int>& conn)
{
	vert[v].visited = true;
	conn.push_back(v);

	for (const auto& el : nList[v])
	{
		if (!vert[el].visited)
			DFS(el, vert, conn);
	}
}

void Graph::findConn(Vertex vert[])
{
	std::vector<int> conn;
	int group = 1;
	for (int i = 1; i < m_v; i++)
	{
		if (!vert[i].visited)
		{
			std::cout << group << ": ";
			group++;

			vert->father = i;
			DFS(i, vert, conn);
			quicksortR(conn, 0, conn.size() - 1);

			for (const auto& el : conn)
			{
				std::cout << el << " ";
			}
			std::cout << "\n";
			conn.clear();
		}
	}
}

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::vector<std::pair<int, int>> allPair;

		int _max = 0;
		int m;
		std::cin >> m;

		for (int j = 0; j < m; j++)
		{
			std::pair<int, int> p;
			std::cin >> p.first >> p.second;

			allPair.push_back(p);

			/*p.first > _max ? _max = p.first + 1 : NULL;
			p.second > _max ? _max = p.second + 1 : NULL;*/

			if (p.first > _max)
				_max = p.first + 1;
			if (p.second > _max)
				_max = p.second + 1;
		}
		Graph g(_max);
		g.addEdgeByPairs(allPair);
		auto vert = new Vertex[g.getCount()];
		g.findConn(vert);
	}
	return 0;
}