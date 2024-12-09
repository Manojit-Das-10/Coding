#include<bits/stdc++.h>
using namespace std;

string reversedWord(string str){
	reverse(str.begin(), str.end())	;

	istringstream iss(str);
	string word;
	string ans;

	while(iss >> word){
		reverse(word.begin(), word.end());
		ans += word + " ";
	}

	if(! ans.empty()){
		ans.pop_back();
	}
	
	return ans;

}

int main(){
	
	string str;
	cout<<"Input:";
	cin>>str;
	
	string ans = reversedWord(str);

	cout<<"Reversed Word is: "<<ans<<endl;

return 0;
}