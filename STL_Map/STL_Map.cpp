// STL_Map.cpp 
#include<iostream>
#include<map>	
#include<vector>
using namespace std;
int main()
{
	map<int, string>students;
	//Inserting elements into map
	cout << "Inserting using operator []" << endl;
	students[1] = "Teja";
	students[2] = "Ravi Kumar";

	for (auto x : students)
	{
		cout << x.first << " : " << x.second << endl;//first - int; second - string
	}
	cout << "Size: " << students.size() << endl;
	cout << "Inserting individually" << endl;
	students.insert({ 3, "Ramesh" });
	students.insert({ 4,"Rajesh" });
	for (auto x1 : students)
	{
		cout << x1.first << " : " << x1.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Inserting multiple elements" << endl;

	students.insert({ { 5,"Rahul" }, { 6,"Shilpa" } });

	for (auto x2 : students)
	{
		cout << x2.first << " : " << x2.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Inseritng based on position" << endl;
	auto it = students.begin();
	students.insert(it, { 7, "Raghu" });
	for (auto x3 : students)
	{
		cout << x3.first << " " << x3.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Inserting elements based on the range" << endl;
	vector<pair<int, string>>v = { {8, "Romesh"}, {9, "Suresh"}, {10, "Sohan"} };
	students.insert(v.begin(), v.end());
	for (auto x4 : students)
	{
		cout << x4.first << ":" << x4.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Erasing elements by key" << endl;
	students.erase(5);
	for (auto x5 : students)
	{
		cout << x5.first << ":" << x5.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Erasing an element by position" << endl;
	auto it1 = next(students.begin(), 6);
	students.erase(it1);
	for (auto x6 : students)
	{
		cout << x6.first << ":" << x6.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "Erasing elements based on range" << endl;
	//Defining the range
	auto first = next(students.begin(), 2);
	auto last = next(students.begin(), 5);
	//Erasing the elements between the range
	students.erase(first, last);
	for (auto x7 : students)
	{
		cout << x7.first << ":" << x7.second << endl;
	}
	cout << "Size: " << students.size() << endl;
	cout << "First_element: " << students.begin()->first << " : " << students.begin()->second << endl;
	cout << "Last_element: " << (--students.end())->first << " : " << (--students.end())->second << endl;
	cout << "Reverse_First_element: " << students.rbegin()->first << " : " << students.rbegin()->second << endl;
	cout << "Reverse_Last_element: " << (--students.rend())->first << " : " << (--students.rend())->second << endl;
	cout <<"Student with id 2:"<< students.at(2) << endl;
	cout << "Student with id 7: " << students[7] << endl;
	//cout << "Student with id 3: " << students[3] << endl;
	map<int, string>st;
	st.swap(students);
	cout << "Size: " << students.size() << endl;
	students.clear();
	if (students.empty())
	{
		cout << "Map is empty!!" << endl;
	}
	else
	{
		for (auto y : students)
		{
			cout << y.first << ":" << y.second << endl;
		}
	}

	cout << "Size: " << students.size() << endl;
	cout << "Size: " << st.size() << endl;
	if (st.empty())
	{
		cout << "Map is empty!!" << endl;
	}
	else
	{
		for (auto a : st)
		{
			cout << a.first << ":" << a.second << endl;
		}
	}
	
}