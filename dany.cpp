#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream name1("name1"),name2("name2"),name3("name3"),sec1("sec1"),sec2("sec2"),sec3("sec3"),clg1("clg1"),clg2("clg2"),clg3("clg3"),teamname("teamname");
	string nm1,nm2,nm3,sc1,sc2,sc3,cl1,cl2,cl3,tn;
	int rank=1;
	ofstream fout("table");
		getline(teamname,tn);
		getline(name1,nm1);
		getline(name2,nm2);
		getline(name3,nm3);
		getline(sec1,sc1);
		getline(sec2,sc2);
		getline(sec3,sc3);
		getline(clg1,cl1);
		getline(clg2,cl2);
		getline(clg3,cl3);
	while (!teamname.eof()) {
		getline(teamname,tn);
		getline(name1,nm1);
		getline(name2,nm2);
		getline(name3,nm3);
		getline(sec1,sc1);
		getline(sec2,sc2);
		getline(sec3,sc3);
		getline(clg1,cl1);
		getline(clg2,cl2);
		getline(clg3,cl3);
		cout<<tn<<endl;
		fout<<"<tr><td>"<<rank<<"</td><td>"<<tn<<"</td><td>"<<nm1<<"</td></tr>"<<endl;
		if (tn=="") break;
		rank++;
	}
	return 0;
}