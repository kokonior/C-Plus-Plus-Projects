#include <bits/stdc++.h>
using namespace std;

void solve(long long int r, long long int c,
		vector<vector<long long int> >& grid)
{
	priority_queue<pair<long long int,
						pair<long long int, long long int> > >
		pq;

	for (long long int i = 0; i < r; i++) {
		for (long long int j = 0; j < c; j++) {
			pq.push(make_pair(grid[i][j],
							make_pair(i, j)));
		}
	}

	long long int res = 0;

	while (!pq.empty()) {
		long long int height = pq.top().first,
					i = pq.top().second.first,
					j = pq.top().second.second;
		pq.pop();
		if (height != grid[i][j])
			continue;
		if (i == 0) {
			// Down
			if (i != r - 1) {
				if (grid[i + 1][j] < height - 1) {

					res += height - 1 - grid[i + 1][j];
					grid[i + 1][j] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i + 1, j)));
				}
			}
			// Left
			if (j != 0) {
				if (grid[i][j - 1] < height - 1) {

					res += height - 1 - grid[i][j - 1];
					grid[i][j - 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j - 1)));
				}
			}
			// Right
			if (j != c - 1) {
				if (grid[i][j + 1] < height - 1) {

					res += height - 1 - grid[i][j + 1];
					grid[i][j + 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j + 1)));
				}
			}
		}
		else if (i == r - 1) {
			// Up
			if (i != 0) {
				if (grid[i - 1][j] < height - 1) {

					res += height - 1 - grid[i - 1][j];
					grid[i - 1][j] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i - 1, j)));
				}
			}
			// Left
			if (j != 0) {
				if (grid[i][j - 1] < height - 1) {

					res += height - 1 - grid[i][j - 1];
					grid[i][j - 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j - 1)));
				}
			}
			// Right
			if (j != c - 1) {
				if (grid[i][j + 1] < height - 1) {

					res += height - 1 - grid[i][j + 1];
					grid[i][j + 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j + 1)));
				}
			}
		}
		else {
			// Down
			if (grid[i + 1][j] < height - 1) {

				res += height - 1 - grid[i + 1][j];
				grid[i + 1][j] = height - 1;

				pq.push(make_pair(height - 1,
								make_pair(i + 1, j)));
			}
			// Up
			if (grid[i - 1][j] < height - 1) {

				res += height - 1 - grid[i - 1][j];
				grid[i - 1][j] = height - 1;

				pq.push(make_pair(height - 1,
								make_pair(i - 1, j)));
			}
			// Left
			if (j != 0) {
				if (grid[i][j - 1] < height - 1) {

					res += height - 1 - grid[i][j - 1];
					grid[i][j - 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j - 1)));
				}
			}
			// Right
			if (j != c - 1) {
				if (grid[i][j + 1] < height - 1) {

					res += height - 1 - grid[i][j + 1];
					grid[i][j + 1] = height - 1;

					pq.push(make_pair(height - 1,
									make_pair(i, j + 1)));
				}
			}
		}
	}
	cout << res;
}

// Driver code
int main()
{

	long long int r = 4, c = 5;
	vector<vector<long long int> > grid{ { 1, 0, 5, 4, 2 },
										{ 1, 5, 6, 4, 8 },
										{ 2, 3, 4, 2, 1 },
										{ 2, 3, 4, 9, 8 } };

	solve(r, c, grid);
}
