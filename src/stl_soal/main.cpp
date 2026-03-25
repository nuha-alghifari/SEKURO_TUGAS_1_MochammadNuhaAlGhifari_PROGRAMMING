#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), c(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<pair<int,int>> paket(n);
    for (int i = 0; i < n; i++) {
        paket[i] = {x[i], c[i]};
    }
    sort(paket.begin(), paket.end());

    map<int, bool> sudah_diambil;
    int hasil = 0;

    for (int i = 0; i < n; i++) {
        int kategori = paket[i].second;
        if (sudah_diambil.find(kategori) == sudah_diambil.end()) {
            sudah_diambil[kategori] = true;
            hasil++;
        }
    }

    cout << hasil << endl;
    return 0;
}
