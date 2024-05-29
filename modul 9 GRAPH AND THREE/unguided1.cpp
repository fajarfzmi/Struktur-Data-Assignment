// fajar farizqi azmi
// 2311102192
// IF-11-E

#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef map<string, int> DistanceMap;
typedef map<string, DistanceMap> Graph;

void addEdge(Graph &graph, const string &source, const string &destination, int distance)
{
    graph[source][destination] = distance;
}
void printGraph(const Graph &graph)
{
    cout << " ";
    for (const auto &pair : graph)
    {
        cout << pair.first << " " ;
    }
    cout << endl;
    for (const auto &pair : graph)
    {
        cout << pair.first;
        cout.width(20  - pair.first.length());
        cout << "       ";
        for (const auto &innerPair : pair.second)
        {
            cout << innerPair.second;
            cout.width(4 );
        }
        cout << endl;
    }
}
int main()
{
    int numNodes_2311102192;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> numNodes_2311102192;
    vector<string> nodes(numNodes_2311102192);
    cout << "Silahkan masukkan nama simpul:\n";
    for (int i = 0; i < numNodes_2311102192; ++i)
    {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }
    Graph graph;
    cout << "Silahkan masukkan bobot antar simpul\n";
    for (int i = 0; i < numNodes_2311102192; ++i)
    {
        for (int j = 0; j < numNodes_2311102192; ++j)
        {
            string source = nodes[i];
            string destination = nodes[j];
            int distance;
            cout << source << " => " << destination << " = ";
                                                        
               cin >> distance;
            addEdge(graph, source, destination, distance);
        }
    }
    printGraph(graph);
    return 0;
}