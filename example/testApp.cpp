#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{    
    // get your api name / key.....
    // http://bitly.com/a/your_api_key
    string bitly_api_name = "YOUR API NAME";
    string bitly_api_key  = "YOUR API KEY";
    
    longurl = "http://www.openframeworks.cc/";
    
    converter = new ofxShortURL(bitly_api_name, bitly_api_key);
    shorturl = converter->shorten(longurl);
    
    // static
//    shorturl = ofxShortURL::shorten(longurl, bitly_api_name, bitly_api_key);
}

//--------------------------------------------------------------
void testApp::update()
{
}

//--------------------------------------------------------------
void testApp::draw()
{
    // the result is depend on your default short domain setting....
    // http://bitly.com/a/account
    ofDrawBitmapString("original url: "+longurl,  20, 20);
    ofDrawBitmapString("short url   : "+shorturl, 20, 40);
}

// //--------------------------------------------------------------
// void testApp::keyPressed(int key){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::keyReleased(int key){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::mouseMoved(int x, int y ){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::mouseDragged(int x, int y, int button){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::mousePressed(int x, int y, int button){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::mouseReleased(int x, int y, int button){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::windowResized(int w, int h){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::gotMessage(ofMessage msg){
// 
// }
// 
// //--------------------------------------------------------------
// void testApp::dragEvent(ofDragInfo dragInfo){ 
// 
// }