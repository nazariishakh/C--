#include <iostream>

using namespace std;

int x, y, z;
// 32424243fdssfsdff
int main()
{

    cout << "Введіть три числа\n";
    cin >> x >> y >> z;
    cout << "Ваші числа: " << x << " " << y << " " << z << endl
         << (!y) << endl
         << (!z) << endl
         << (y && (!z)) << endl
         << (x || y) << endl
         << (x || (!y)) << endl
         << (((!x) && y) || (((!y) || z) || (x || y))) << endl;
    return 0;
}
//(𝑥 ∨ ¬𝑦) ⟶ ((𝑦 ∧ ¬𝑧) → (𝑥 ∨ 𝑦));
// if x or y or z == 0 or x or y or z == 1 {
