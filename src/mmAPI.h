#pragma once
#include <iostream>
#include <string>
using std::string;

class mmAPI
{
public:
	mmAPI(void);
	~mmAPI(void);

	string getLyrics(string songName, string artistName);

private:
	static const std::string API_KEY;
};

