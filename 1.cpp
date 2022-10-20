#include<iostream>
using namespace std;
void countNotes(int amount) {
   int notes[10] = { 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
   int noteFreq[10] = { 0 };
   for (int i = 0; i < 10; i++) {
      if (amount >= notes[i]) {
         noteFreq[i] = amount / notes[i];
         amount = amount - noteFreq[i] * notes[i];
      }
   }
   cout << "Note count:" << endl;
   for (int i = 0; i < 9; i++) {
      if (noteFreq[i] != 0) {
         cout << notes[i] << " : " << noteFreq[i] << endl;
      }
   }
}
int main() {
   int amount = 1072;
   cout << "Total amount is: " << amount << endl;
   countNotes(amount);
}
