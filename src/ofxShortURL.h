//
//  ofxShortURL.cpp
//  Created by motoishmz on 12/03/07
//

//#include "ofxJSONElement.h"
//
//struct bitlyJson
//{
//    string status_code;
//    string status_txt;
//    string url;
//    string hash;
//    string global_hash;
//    string long_url;
//    string new_hash;
//};

#define OFX_SHORTURL_API_BASE "http://api-ssl.bitly.com/v3/shorten"

class ofxShortURL
{
    
public:
    
    static string shorten(string _url, string _api_name, string _api_key)
    {
        string shorturl;
        string baseurl = OFX_SHORTURL_API_BASE;
        string apiurl = baseurl +
        "?login=" + _api_name +
        "&apiKey=" + _api_key +
        "&longUrl=" + _url +
        "&format=txt";
        ofHttpResponse response = ofLoadURL(apiurl);
        return response.data;
    }
    
    string api_name, api_key;
//    bitlyJson shortenResult;
    
    ofxShortURL(){}
    ofxShortURL(string _api_name, string _api_key)
    {
        api_key  = _api_key;
        api_name = _api_name;
    }
    
    string shorten(string _url)
    {
        string shorturl;
        string baseurl = OFX_SHORTURL_API_BASE;
        string apiurl = baseurl +
        "?login=" + api_name +
        "&apiKey=" + api_key +
        "&longUrl=" + _url +
        "&format=txt";
        ofHttpResponse response = ofLoadURL(apiurl);
        return response.data;
    }
};




