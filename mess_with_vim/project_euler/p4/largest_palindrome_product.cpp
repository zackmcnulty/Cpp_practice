#include <iostream>
#include <string>
using std::to_string;
using std::string;
bool is_pal(string word, int left, int right) {
	if (right <= left) {
		return true;
	}
	else if (word[left] != word[right]) {
		return false;
	}
	else {
		return is_pal(word, left + 1, right - 1);
	}
}


int main(){
	int max_pal = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++){
			if (i*j > max_pal){
				string s = to_string(i*j);
				if (is_pal(s, 0, s.length()-1)){
					max_pal = i*j;
				}
			}
		}
	}
	std::cout << max_pal << std::endl;

};
