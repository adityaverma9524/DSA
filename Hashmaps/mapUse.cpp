#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> ourmap;

    // insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // find or access
    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;

    //cout << ourmap.at("ghi") << endl; // Key not found !!
    cout << "Size : " << ourmap.size() << endl;
    cout << ourmap["ghi"] << endl;
    cout << "Size : " << ourmap.size() << endl;

    // Check Presence
    if(ourmap.count("ghi") > 0) {
        cout << "ghi is present" << endl;
    }

    // erase
    ourmap.erase("ghi");
    cout << "Size : " << ourmap.size() << endl;
    if(ourmap.count("ghi") > 0) {
        cout << "ghi is present" << endl;
    } else {
        cout << "ghi is NOT present" << endl;
    }
}
