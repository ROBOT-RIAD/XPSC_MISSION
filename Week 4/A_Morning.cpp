#include <iostream>

using namespace std;

int minSeconds(string pin) {
  int seconds = 0;
  int currentDigit = 1;
  for (int i = 0; i < pin.length(); i++) {
    int nextDigit = pin[i] - '0';
    if (nextDigit != currentDigit) {
      seconds += 1; // Move the cursor to the next digit.
      currentDigit = nextDigit;
    }
    seconds += 1; // Press the cursor.
  }
  return seconds;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string pin;
    cin >> pin;
    cout << minSeconds(pin) << endl;
  }
  return 0;
}
