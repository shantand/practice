#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class strobj
{
	string s;
	
	public:
	void setString(string);
	string getString();
	strobj operator+(strobj&);
};

void strobj::setString(string c)
{
	s = c;
}

string strobj::getString()
{
	return s;
}

strobj strobj::operator+(strobj& c1)
{
	strobj temp;
	string d = this->getString();
	temp.setString(d.append(c1.getString()));
	c1.setString("*");
	this->setString("#");
	return temp;
}

int main()
{
	strobj s1,s2,s3;
	s1.setString("shantanu");
	s2.setString(" Deshpande");
	
	s3=s1+s2;
	
	cout << s3.getString() << endl;
	cout << s1.getString() << endl;
	cout << s2.getString() << endl;
	return 0;
}


