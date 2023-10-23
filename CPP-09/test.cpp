#include <climits>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

// bool compare_pairs(const std::pair<int, int> &a, const std::pair<int, int>
// &b) {
//   return a.first < b.first;
// }

// void insertion_sort_pairs(std::vector<std::pair<int, int>> &pairs) {
//   for (int i = 1; i < pairs.size(); ++i) {
//     std::pair<int, int> current = pairs[i];
//     int j = i - 1;

//     while (j >= 0 && current.first < pairs[j].first) {
//       pairs[j + 1] = pairs[j];
//       --j;
//     }
//     pairs[j + 1] = current;
//   }
// }

int main() {
  int a = 0, b = 1;
  int next = a * 2 + b;
  int size = 10000;
  for (int i = 0; next < size; i++) {
    a = b;
    b = next;
    next = a * 2 + b;
    cout << next << endl;
    if(next > size)
      next = size;
    for (int j = next; j > b; j--) {
        cout << "=>" << j << "\t";
    }
    cout << endl;
  }
//   int tab[] = {6, 5, 4, 1, 9, 8, 3, 2, -1, -2};
  
//   for (int i = 2; i < 10; i += 2) {

//     int j = i - 2;

//     while (j >= 0 && tab[j + 2] < tab[j])
//     {
//       swap(tab[j + 2 ], tab[j]);
//       swap(tab[j + 2 + 1], tab[j + 1]);
//       j -= 2;
//     }

//   }
//   for(int i = 0; i < 10; i++)
//   {
//     cout << tab[i] << " \t";
//   }
//   cout << "\n";
}
