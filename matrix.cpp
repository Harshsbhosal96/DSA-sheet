// Matrix in Data Structures and Algorithms from complete scratch
//Here goes the code

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> CreateMatrix( int rows,  int cols, int default_value = 0) {    //this creates a matrix
return vector<vector<int>> ( rows, vector<int>( cols ,  default_value));
}

//now printing the resulting matrix accordingly

void print_matrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
