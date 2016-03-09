#include "ofxShortUrl.h"

ofxShortURL::ofxShortURL(string _api_name, string _api_key)
{
    api_key  = _api_key;
    api_name = _api_name;
}

static string ofxShortURL::shorten(string _url, string _api_name, string _api_key)
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

string ofxShortURL::shorten(string _url)
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