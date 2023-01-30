#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;


class Boy {
private:
	int height;
	friend class Girl;
public:
	Boy(int len):height(len)
	{}
	void show(Girl& frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(char* num)
	{
		strcpy(phNum, num);
	}
	void show(Boy& frn);
	friend class Boy;
};

void Boy::show(Girl& frn) {
	cout << "Her phone number" << frn.phNum << endl;
}

void Girl::show(Boy& frn) {
	cout << "his height: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	char ch[20] = "010-1234-5678";
	char* pch = ch;
	Girl girl(pch);
	
	boy.show(girl);
	girl.show(boy);
	return 0;
}