#pragma once
#include <iostream>
#include <string>
using std::string;

class mmAPI
{
public:
	mmAPI(void);
	~mmAPI(void);

	int getTrackID(string trackName, string artistName);
	string getLyrics(int trackID);

private:
	static const std::string API_KEY;
};

