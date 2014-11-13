#include "mmAPI.h"
#include <iostream>
using namespace std;

const std::string mmAPI::API_KEY = "aae122dc24c48011f4afebf432ecfc8e";

mmAPI::mmAPI(void)
{
}


mmAPI::~mmAPI(void)
{
}

int mmAPI::getTrackID(string trackName, string artistName){
	//https://developer.musixmatch.com/documentation/api-reference/track-search
	return 1;
}

string mmAPI::getLyrics(int trackID){
	//https://developer.musixmatch.com/documentation/api-reference/track-lyrics-get
	return "lyrics will go here";
}
