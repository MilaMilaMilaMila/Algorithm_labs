//I WISH U LUCK
#include <bits/stdc++.h>

using namespace std;

const int N = 10001;
vector<int> numbs(N, 0);

void Quick_sort(int l, int r)
{
    int mid = numbs[(l + r) / 2], i = l, j = r;

    while (i <= j){
        while (numbs[i] < mid){
            i++;
        }
        while (numbs[j] > mid){
            j--;
        }
        if (i <= j){
            swap(numbs[i], numbs[j]);
            i++;
            j--;
        }
    }

    //cout<<l<<" "<<r<<" "<<i<<" "<<j<<endl;
    if (i < r){
        Quick_sort(i, r);
    }
    if (j > l){
        Quick_sort(l, j);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    freopen("smallsort.in","r",stdin);
    freopen("smallsort.out","w",stdout);

    int numbs_amount;
    cin>>numbs_amount;

    for (int i = 0; i < numbs_amount; i++){
        cin>>numbs[i];
    }

    Quick_sort(0, numbs_amount - 1);

    for (int i = 0; i < numbs_amount; i++){
        cout<<numbs[i]<<" ";
    }
    
    return 0;
}
