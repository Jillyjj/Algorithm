#include <iostream>
#include <vector>

using namespace std;

void bubble(vector<int> &v) {
    /*  int soglia = 0; //vettore è ordinato nella posizione 0 fino a soglia -1
      for (soglia = 0; soglia < v.size(); soglia++) {
          for (int i = v.size() - 1; i > soglia; i--) {
              if (v.at(i) >= v.at(i - 1)) {
                  swap(v.at(i), v.at(i - 1));
              }
          }
      }*/
  //bubble sort with standard threshold
  /*for(int i = 0; i < v.size(); i++){
      for(int j = i; j < v.size() - i - 1; j++ ){
          if(v.at(j) > v.at(j + 1))
              swap(v.at(j), v.at(j + 1));
      }
  }*/
  //bubble sort with reverse threshold
    for(int i = v.size() - 1; i > 0; i--){
        for(int j = 0; j < i - 1 ; j++ ){
            if(v.at(j) > v.at(j + 1))
                swap(v.at(j), v.at(j + 1));
        }
    }
}

int main() {
    srand(time(NULL));
    int s = 5 + rand() % 50;
    vector<int> v;
    v.resize(s);
    for (int i = 0; i < v.size(); i++) {
        v.at(i) = rand() % 100;
    }
    cout << "vettore non ordinato ";
    for (int j = 0; j < v.size(); j++) {
        cout << v.at(j) << " ";
    }
    cout << endl;
    bubble(v);
    cout << "vettore ordinato ";
    for (int j = 0; j < v.size(); j++) {
        cout << v.at(j) << " ";
    }
    cout << endl;

}
