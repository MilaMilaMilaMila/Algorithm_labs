//I WISH U LUCK
#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> money_and_number;

void Quick_sort(int l, int r, auto &numbs)
{
    int mid = numbs[(l + r) / 2].first, i = l, j = r;

    while (i <= j){
        while (numbs[i].first < mid){
            i++;
        }
        while (numbs[j].first > mid){
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
        Quick_sort(i, r, numbs);
    }
    if (j > l){
        Quick_sort(l, j, numbs);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    freopen("sortland.in","r",stdin);
    freopen("sortland.out","w",stdout);

    int amount_people;
    cin>>amount_people;
    money_and_number.resize(amount_people, {0, 0});

    for (int i = 0; i < amount_people; i++){
        double money;
        cin>>money;
        //cout<<money_and_number[i].first<<endl;
        money_and_number[i].first = money * 100;
        //cout<<money_and_number[i].first<<endl;
        money_and_number[i].second = i + 1;
    }

    Quick_sort (0, amount_people - 1, money_and_number);

    /*for(int i = 0; i < amount_people; i++){
        cout<<money_and_number[i].first<<" "<<money_and_number[i].second<<endl;
    }
    cout<<endl;*/

    cout<<money_and_number[0].second<<" "<<money_and_number[(amount_people - 1) / 2].second<<" "<<money_and_number[amount_people - 1].second;

    return 0;
}
