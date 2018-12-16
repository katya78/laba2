#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//слово
	stringstream ss;	//строковый поток

	while (getline(in, word)) {//считываем по слову
		bool flag = false;
		int cnt = 0;
		for (int i = 0; i < word.size(); ++i) {
			if (word[i] >= '0' && word[i] <= '9') {
				++cnt;
			}
			else {
				if (cnt == 2) {
					ss << word << '\n';
					break;
				}
				cnt = 0;
			}
		}
	}
	cout << ss.str();
	in.close();//закрываем файл										   
	system("pause>>void");

}