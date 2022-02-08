#include <iostream>

using namespace std;

int main(void) {

  int price[15];
  int J_asset, J_cnt = 0, J_result;
  int S_asset, S_cnt = 0, S_result, S_minus = 0, S_plus = 0;

  cin >> J_asset;
  S_asset = J_asset;

  for (int i = 1; i < 15; i++) {
    cin >> price[i];
  }

  price[0] = price[1];

  // 준현

  for (int i = 1; i < 15; i++) {
    J_cnt += (J_asset / price[i]);
    if ((J_asset / price[i]) != 0) J_asset -= (price[i] * (J_asset / price[i]));
  }

  // 성민
  
  for (int i = 1; i < 15; i++) {
    if (price[i] > price[i - 1]) {
      S_plus++;
      S_minus = 0;
    } else if (price[i] < price[i - 1]) {
      S_plus = 0;
      S_minus++;
    } else {
      S_plus = 0;
      S_minus = 0;
    }

    if (S_plus >= 3) {
      S_asset += S_cnt * price[i];
      S_cnt = 0;
    } else if (S_minus >= 3) {
      S_cnt += S_asset / price[i];
      if ((S_asset / price[i]) != 0) S_asset -= (price[i] * (S_asset / price[i]));
    }
  }

  J_result = J_asset + price[14] * J_cnt;
  S_result = S_asset + price[14] * S_cnt;

  if (J_result > S_result) cout << "BNP";
  else if (J_result < S_result) cout << "TIMING";
  else cout << "SAMESAME";

}
