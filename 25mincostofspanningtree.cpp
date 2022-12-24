#include <bits/stdc++.h>
using namespace std;

int getMinCost(int Vertices)
{
	int cost = 0;

	cost = (Vertices * Vertices) - Vertices + 1;

	return cost;
}

// Driver code
int main()
{
	int V ;
    cout<<"Enter the vertices";
    cin>>V;
	cout <<"Min cost of spanning tree is :"<< getMinCost(V);

	return 0;
}
