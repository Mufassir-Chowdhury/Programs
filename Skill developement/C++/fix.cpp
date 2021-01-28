see this implementation works well i guess
(http://ideone.com/QACBSZ)

```
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

map<int ,vector<int> > mp;
map<int, vector<int> >::iterator it;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector <int> v(m);
        for(int j=0; j < m; j++){
            cin >> v[j];
        }
        for(int j=0; j < m; j++){
            cout << v[j] << " ";
        }
        cout << endl;
    
        mp.insert(make_pair(i,v));
    }

    for(it = mp.begin(); it != mp.end(); it++){
        sort(it->second.begin(), it->second.end());
    }

    for(it = mp.begin(); it != mp.end(); it++){
        int l = it->second.size();
        cout << it->first << "th sorted array-> ";
        
        for(int j = 0; j < l; j++){
            cout << it->second[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```