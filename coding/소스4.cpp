#include <iostream>
#include<vector>
using namespace std;

string ltrim(const string&);
string rtrim(const string&);


/*
 * Complete the 'getNumberOfOptions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY priceOfJeans
 *  2. INTEGER_ARRAY priceOfShoes
 *  3. INTEGER_ARRAY priceOfSkirts
 *  4. INTEGER_ARRAY priceOfTops
 *  5. INTEGER budgeted
 */

long getNumberOfOptions(vector<int> priceOfJeans, vector<int> priceOfShoes, vector<int> priceOfSkirts, vector<int> priceOfTops, int budgeted) {
	int cnt = 0;
	if (priceOfJeans.size() == 1) {
		budgeted -= priceOfJeans[0];
		for (int i = 0; i < priceOfShoes.size(); i++) {
			for (int j = 0; j < priceOfSkirts.size(); j++) {
				for (int k = 0; k < priceOfTops.size(); k++) {
					if (priceOfShoes[i] + priceOfSkirts[j] + priceOfTops[k] < budgeted) {
						cnt++;
					}
				}
			}
		}
	}
	else if (priceOfShoes.size() == 1) {
		budgeted -= priceOfShoes[0];
		for (int i = 0; i < priceOfJeans.size(); i++) {
			for (int j = 0; j < priceOfSkirts.size(); j++) {
				for (int k = 0; k < priceOfTops.size(); k++) {
					if (priceOfJeans[i] + priceOfSkirts[j] + priceOfTops[k] < budgeted) {
						cnt++;
					}
				}
			}
		}
	}
	else if (priceOfSkirts.size() == 1) {
		budgeted -= priceOfSkirts[0];
		for (int i = 0; i < priceOfJeans.size(); i++) {
			for (int j = 0; j < priceOfShoes.size(); j++) {
				for (int k = 0; k < priceOfTops.size(); k++) {
					if (priceOfShoes[j] + priceOfJeans[i] + priceOfTops[k] < budgeted) {
						cnt++;
					}
				}
			}
		}
	}
	else if (priceOfTops.size() == 1) {
		budgeted -= priceOfTops[0];
		for (int i = 0; i < priceOfJeans.size(); i++) {
			for (int j = 0; j < priceOfSkirts.size(); j++) {
				for (int k = 0; k < priceOfShoes.size(); k++) {
					if (priceOfShoes[k] + priceOfSkirts[j] + priceOfJeans[i] < budgeted) {
						cnt++;
					}
				}
			}
		}
	}
	return cnt;
	cout << cnt;
}
int main()
{
	getNumberOfOptions({ 2, 3 }, { 4 }, { 2,3 }, { 1,2 }, 10);

}
