//#include<iostream>
//#include<string>
//using namespace std;
//string s1, s2;
//int a[101], b[101], c[101];
//void strtoint(string str, int dec[])
//{
//	for (int i = 0; i < str.size(); i++)
//	{
//		dec[str.size() - i] = str[i] - '0';
//	}
//}
//bool cmpstr(string s1, string s2)
//{
//	if (s1.size() != s2.size())
//		return s1.size() > s2.size();
//	else
//		return s1 >= s2;
//}
//int main()
//{
//	cin>>s1>>s2;
//	strtoint(s1, a);
//	strtoint(s2, b);
//	if (cmpstr(s1, s2) == false)
//	{
//		cout << "-";
//		swap(a, b);
//	}
//	int la = s1.size(), lb = s2.size();
//	int lc = max(la, lb) + 1;
//	for (int i = 1; i <= lc; i++)
//	{
//		if (a[i] < b[i])
//		{
//			a[i + 1]--;
//			a[i] += 10;
//		}
//		c[i] = a[i] - b[i];
//	}
//	while (c[lc] == 0 && lc > 1)
//		lc--;
//	for (int i = lc; i >= 1; i--)
//		cout << c[i];
//	
//	return 0;
//}