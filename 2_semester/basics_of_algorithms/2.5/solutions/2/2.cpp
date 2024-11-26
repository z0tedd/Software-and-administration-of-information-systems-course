#include "QuickSort.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main() {
  int n;
  float k;
  cin >> n >> k;
  float *mas = new float[n];
  for (int i = 0; i < n; i++)
    cin >> mas[i];

  FILE *fptr = fopen("text1.txt", "wb");
  if (!fptr) {
    printf("Error!");
    return 0;
  }
  fwrite(&n, sizeof(int), 1, fptr);
  fwrite(&k, sizeof(float), 1, fptr);
  fwrite(mas, sizeof(mas[0]), n, fptr);
  // fstream s{filename, s.binary | s.in | s.out};
  /*
    if (!s.is_open()){
      cout << "Failed to open\n";
    }
  */
  fclose(fptr);
  fptr = fopen("text1.txt", "rb");
  if (!fptr) {
    printf("Error!");
    return 0;
  }
  fread(&n, sizeof(int), 1, fptr);
  fread(&k, sizeof(float), 1, fptr);
  fread(mas, sizeof(mas[0]), n, fptr);
  int first = 0, last = n;
  fclose(fptr);
  last = super_partition(0, n, mas, k);
  sort(mas, mas + last);
  for (int i = 0; i < n; i++) {
    cout << mas[i] << ' ';
  }
  fptr = fopen("text2.txt", "wb");
  fwrite(mas, sizeof(mas[0]), n, fptr);
  delete[] mas;
  fclose(fptr);
  /*
  // s >> n;
  // s >> k;
  cout << n << ' ' << k << '\n';
  float *mas = new float[n];
  for (int i = 0; i < n; i++) {
    // s>> mas[i];
    fread(&(mas[i]), sizeof(float), 1, fptr);
    cout << mas[i] << '\n';
  }
  int first = 0, last = n;
  // cout << last;
  // cout << "tuuu";

  last = super_partition(0, n, mas, k);


  char c = '\n';
  fwrite(&c, sizeof(char), 1, fptr);
  fwrite(&c, sizeof(char), 1, fptr);
  // s<<"\n\n";
  sort(mas, mas + last);
  for (int i = 0; i < n; i++) {
    fwrite(mas + i, sizeof(float), 1, fptr);
    // s << mas[i]<<" ";
  }

  delete[] mas;
  */
  //  cout << n;
  //}
  // fclose(fptr);
  // s.close();
}
