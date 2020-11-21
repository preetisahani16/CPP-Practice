#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    fstream fio;

    string line;


    fio.open("multiple2.cpp", ios::trunc | ios::out | ios::in);

    while (fio) {

        getline(cin, line);

        if (line == "-1")
            break;


        fio << line << endl;
    }

    fio.seekg(0, ios::beg);

    while (fio) {


        getline(fio, line);


        cout << line << endl;
    }


    fio.close();

    return 0;
}
