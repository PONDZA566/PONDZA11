#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,sum2 = 0,mean,std_dev;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        count++;
        sum2 += pow(atof(textline.c_str()),2);
    }
    mean = sum/count;
    std_dev = sqrt((1.0/count)*sum2-pow(mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std_dev;
    source.close();
    return 0;


}
