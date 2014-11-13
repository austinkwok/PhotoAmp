#include "mmAPI.h"
#include <iostream>
#include "ofApp.h"
#include <string>
#include <algorithm>
using namespace std;

const std::string mmAPI::API_KEY = "aae122dc24c48011f4afebf432ecfc8e";

mmAPI::mmAPI(void)
{
}


mmAPI::~mmAPI(void)
{
}

string mmAPI::fixURL(string oldURL){
	int i = 0;
	for (;;) {
		i = oldURL.find(" ", i);
		if (i == string::npos) {
			break;
		}
		oldURL.replace(i, 1, "%20");
	}
	return oldURL;
}

int mmAPI::getTrackID(string trackName, string artistName){
	//https://developer.musixmatch.com/documentation/api-reference/track-search
	//ofHttpResponse resp = ofLoadURL("http://api.musixmatch.com/ws/1.1/track.search?q_track=back%20to%20december&q_artist=taylor%20swift&f_has_lyrics=1&apikey="+API_KEY);
	trackName = fixURL(trackName);
	artistName = fixURL(artistName);
	string url = "http://api.musixmatch.com/ws/1.1/track.search?q_track="+trackName+"&q_artist="+artistName+"&f_has_lyrics=1&apikey="+API_KEY;
	ofHttpResponse resp = ofLoadURL(url);
	//cout << resp.data.getText() << endl;
	//parse data to get track_id
	return 1;
}

string mmAPI::getLyrics(int trackID){
	//https://developer.musixmatch.com/documentation/api-reference/track-lyrics-get
	return "lyrics will go here";
}
