#include <iostream>
using namespace std;

class City {
public:
    City(){
    }
    void setinfo()
    {
        string _name;
        cin >>_name;
        name = _name;

        long int pepole;
        cin >> pepole;
        population = pepole;

        float space;
        cin >> space;
        area = space;

        float temp;
        cin >> temp;
        temperature = temp;
    }
    float gettemp()
    {
        return temperature;
    }
private:
    string name;
    long int population;
    float area;
    float temperature;
};

int main() {
    int number,counter = 0;
    cin >> number;
    City land[number];
    for(int i=0;i<number;i++)
    {
        land[i].setinfo();
    }
    for(int i=0;i<number;i++)
    {
        if(land[i].gettemp() > 20)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
