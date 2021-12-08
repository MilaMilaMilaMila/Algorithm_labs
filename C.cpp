//I WISH U LUCK
#include <bits/stdc++.h>

using namespace std;

const int WIGHT = 10001, HIGHT = 1001;

vector<vector<int>> field(HIGHT, vector <int>(WIGHT, 0));

void Print_matrix(int hight, int wight, vector<vector<int>> matrix)
{
    for (int i = 0; i < hight; i++){
        for (int j = 0; j < wight; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Scan_matrix(int hight, int wight, vector<vector<int>> &matrix)
{
    for (int i = 0; i < hight; i++){
        for (int j = 0; j < wight; j++){
            cin>>matrix[i][j];
        }
    }
}

int Find_ans(int hight, int wight, vector<vector<int>> matrix)
{
    for (int iters = 0; iters < (wight + hight); iters++){
        int h = hight - 1, w = min(iters, wight - 1);
        if (w < iters){
            h -= (iters - w);
        }
        while (w >= 0 && h >= 0){
            int from_bellow = 0, from_left = 0;
            if (h + 1 < hight){
                from_bellow = matrix[h + 1][w];
            }
            if (w - 1 >= 0){
                from_left = matrix[h][w - 1];
            }
            matrix[h][w] += max(from_bellow, from_left);
            h--; w--;
        }
    }
    return matrix[0][wight - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    freopen("turtle.in","r",stdin);
    freopen("turtle.out","w",stdout);

    //Print_matrix(HIGHT, WIGHT, field);
    int hight, wight;
    cin>>hight>>wight;
    Scan_matrix(hight, wight, field);
    cout<<Find_ans(hight, wight, field)<<endl;
    //Print_matrix(hight, wight, field);

    return 0;
}
