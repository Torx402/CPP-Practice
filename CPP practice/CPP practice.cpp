#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel { //class (blueprint)  declaration
public: //This is important because if we dont use it, we cannot access the attributes when using the object.
	string name;
	string ownerName;
	int subscribersCount;
	list<string> publishedVideoTitles;

	YoutubeChannel(string Name, string ownername) { //Constructor to concise the process of initializing an object
		name = Name;
		ownerName = ownername;
		subscribersCount = 0;
	}

	void GetInfo() { //Class Method to get the info of every channel object
		cout << "Name: " << name << endl;
		cout << "Owner's Name: " << ownerName << endl;
		cout << "Subscribers Count: " << subscribersCount << endl;
		cout << "Published Videos: " << endl;
		for (string videoTitle : publishedVideoTitles) {
				cout << videoTitle << endl;
		}
	}
};


int main(){
	YoutubeChannel Channel1("Torx", "Mohammed");
	Channel1.GetInfo();
	system("pause>nul");    
}
