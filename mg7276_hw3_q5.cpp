#include <iostream>
#include <string>
using namespace std;

const double LB_TO_KG = .453592;
const double IN_TO_M = .0254;

int main()
{
    int weightLBS, heightIN;
    double convertedWeight, convertedHeight, BMI_VALUE;
    string weightStatus;

    cout<<"Please enter weight (in pounds): ";
    cin>>weightLBS;

    cout<<"Please enter height (in inches): ";
    cin>>heightIN;

    convertedWeight = weightLBS * LB_TO_KG;
    convertedHeight = heightIN * IN_TO_M;

    BMI_VALUE = convertedWeight / (convertedHeight * convertedHeight);

    if (BMI_VALUE < 18.5)
    {
        weightStatus = "Underweight";
    }
    else if (BMI_VALUE >= 18.5 && BMI_VALUE < 25)
    {
        weightStatus = "Normal";
    }
    else if (BMI_VALUE >= 25 && BMI_VALUE < 30)
    {
        weightStatus = "Overweight";
    }
    else
    {
        weightStatus = "Obese";
    }


    cout<<"The weight status is: "<<weightStatus<<endl;


    return 0;
}