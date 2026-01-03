#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Klasa per Filmin (Mund te zhvillohet ne branch-in 'feature-movies')
class Filmi {
public:
    string titulli;
    string zhanri;
    
    Filmi(string t, string z) : titulli(t), zhanri(z) {}
};

// Funksioni per te shfaqur uleset (Mund te zhvillohet ne branch-in 'feature-seating')
void shfaqUleset(const vector<vector<int>>& sallat) {
    cout << "\n--- Plani i uleseve (0 = Lire, 1 = Zene) ---\n";
    for (const auto& rreshti : sallat) {
        for (int ulesja : rreshti) {
            cout << ulesja << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Sistemi i Rezervimit te Kinemase" << endl;
    
    // Matrica 5x5 per uleset
    vector<vector<int>> uleset(5, vector<int>(5, 0));
    
    // Shembull i thjeshte i nje menuje
    int opsioni;
    do {
        cout << "\n1. Shfaq Filmat\n2. Shfaq Uleset\n3. Rezervo\n0. Dalje\nZgjidhni: ";
        cin >> opsioni;
        
        if(opsioni == 2) shfaqUleset(uleset);
        
    } while (opsioni != 0);

    return 0;
}
