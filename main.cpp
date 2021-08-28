#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fish;
    ifstream in_file("D:\\teach programm skillbox\\20.5\\3 fishing\\river.txt");
    if(!in_file.is_open()){
        cerr << "File opening error";
        return 0;
    }
    ofstream out_file("D:\\teach programm skillbox\\20.5\\3 fishing\\basket.txt", ios::app);
    if(!out_file.is_open()){
        cerr << "File opening error";
        return 0;
    }
    int count_fish=0;
    while(fish != "exit"){
        cin >> fish;
        string catch_fish;
        while(!in_file.eof()){
            in_file >> catch_fish;
            if(fish==catch_fish) {
                out_file << fish << endl;
                ++count_fish;
            }
        }
        in_file.seekg(0);
    }
    cout << count_fish << " fish were caught during the current fishing trip" << endl;
    out_file.close();
    in_file.close();
    return 0;
}
