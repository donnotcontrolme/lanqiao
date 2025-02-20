////#include<iostream>
////#include<string>
////using namespace std;
////string s1, s2;
////int a[201], b[201], c[501];
//////反转方便其对位加
////void strtoint(string str, int des[])
////{
////	for(int i=0;i<str.size();i++)
////		des[str.size()-i] = str[i] - '0';
////}
////int main()
////{
////	cin >> s1 >> s2;
////	strtoint(s1, a);
////	/*for (int i = 1; i <= s1.size(); i++)
////		cout << a[i];*/
////	strtoint(s2, b);
////	int la = s1.size(), lb = s2.size();
////	
////
////	////加法
////	// int lc = max(la, lb) + 1;
////	//for (int i = 1; i <= lc; i++)
////	//{
////	//	c[i] = a[i] + b[i]+c[i];
////	//	c[i + 1] = c[i] / 10;
////	//	c[i] = c[i] % 10;
////	//	//cout << c[i];
////	//}
////	
////	//乘法
////	int lc = la + lb;
////	for (int i = 1; i <=la; i++)
////	{
////		for (int j = 1; j <= lb; j++)
////		{
////			c[i + j - 1] += a[i] * b[j];
////			c[i + j] += c[i+j-1] / 10;
////			c[i + j - 1] = c[i+j-1] % 10;
////		}
////	}
////	//去0
////	while (c[lc] == 0 && lc > 1)
////		lc--;
////	//逆向打印
////	for (int i = lc; i >= 1; i--)
////		cout << c[i];
////	return 0;
////}
//
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//string s1, s2;
//int a[201], b[201], c[201];
//void strtoint(string str, int dev[])
//{
//	for (int i = 0; i < str.size(); i++)
//		dev[str.size() - i] = str[i] - '0';
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
//	cin >> s1 >> s2;
//	if (cmpstr(s1, s2)==false)
//	{
//		cout << "-";
//		swap(s1, s2);
//	}
//	strtoint(s1, a);
//	strtoint(s2, b);
//
//	int la = s1.size(), lb = s2.size();
//
//	int lc = max(la, lb) ;
//	for (int i = 1; i <= lc; i++)
//	{
//		if (a[i] < b[i])
//		{
//			a[i + 1]--;
//			a[i] += 10;
//		}
//		c[i] = a[i] - b[i];
//	}
//	while (c[lc] == 0 && lc > 1) lc--;
//	for (int i = lc; i > 0; i--)
//		cout << c[i];
//}