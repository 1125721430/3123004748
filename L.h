﻿#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<numeric>
#include<iomanip>
#include<math.h>
#include<sstream>
#include<ctime>
#include<codecvt>
#include"main.h"

using namespace std;

class Leven {
private:
	fstream origFile;
	fstream copFile;
	fstream ansFile;
	string str1;
	string str2;
	int count = 0;
	//记录每一个字符的移动
	float ans = 0;
	//记录字符串总移动
	vector<float> ansArray;
	//选择算法类型
	int select = 2;
	float sum = 0;

public:
	Leven();
	~Leven();
	void Run();
	float getED(wstring str1, wstring str2, int len1, int len2);
	void Value();
	void SentenceToOne();
	void xiezhi();
	void init(int argc, char* argv[]);
	wstring UTF8ToUnicode(const string& str);
};