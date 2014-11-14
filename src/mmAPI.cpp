#include "mmAPI.h"
#include <iostream>
#include "ofApp.h"
#include <string>
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

//https://developer.musixmatch.com/documentation/api-reference/track-search
int mmAPI::getTrackID(string trackName, string artistName){	
	//ofHttpResponse resp = ofLoadURL("http://api.musixmatch.com/ws/1.1/track.search?q_track=back%20to%20december&q_artist=taylor%20swift&f_has_lyrics=1&apikey="+API_KEY);
	trackName = fixURL(trackName);
	artistName = fixURL(artistName);
	string url = "http://api.musixmatch.com/ws/1.1/track.search?q_track="+trackName+"&q_artist="+artistName+"&f_has_lyrics=1&apikey="+API_KEY;
	ofHttpResponse resp = ofLoadURL(url);
	//cout << resp.data.getText() << endl;
	//parse data to get track_id
	return 1;
}

//https://developer.musixmatch.com/documentation/api-reference/track-lyrics-get
string mmAPI::getLyrics(int trackID){
	string api = "&apikey=";
	ofHttpResponse resp = ofLoadURL("http://api.musixmatch.com/ws/1.1/track.lyrics.get?track_id="+std::to_string(trackID)+api+API_KEY);
	//cout << resp.data;
	//need to parse data and only take lyrics
	return "lyrics here";
}
