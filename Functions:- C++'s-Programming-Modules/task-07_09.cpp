#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n) ;
void display1(student st);
void display2(const student * ps) ;
void display3(const student pa[], int n) ;

int main ()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	char temp[SLEN];
	int i = 0;
	for (i; i < n; i++)
	{
		cout << "#" << (i + 1) << endl;
		cout << "Enter full name: ";
		cin.getline(temp, SLEN);
		if (!temp)
			break;
		else
			strcpy(pa[i].fullname, temp);
		cout << "Enter hobby: ";
		cin.getline(temp, SLEN);
		strcpy(pa[i].hobby, temp);
		cout << "Enter level: ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
	return i;
}

void display1(student st)
{
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Level: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << "Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Name: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Level: " << pa[i].ooplevel << endl;
	}
}
