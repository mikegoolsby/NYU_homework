#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    double quadRoot;
    double addQuad, subQuad;
    int a, b, c;
    string numOfSolutions;


    // Capturing user input
    cout<<"Please enter value of a: ";
    cin>>a;
    cout<<"Please enter value of b: ";
    cin>>b;
    cout<<"Please enter value of c: ";
    cin>>c;

    // Qudratic formula
    quadRoot = (b * b - 4 * a * c);
    addQuad = (-(double)b + sqrt(quadRoot)) / (2*(double)a);
    subQuad = (-(double)b - sqrt(quadRoot)) / (2*(double)a);


    // main app logic
    if (a == 0 && b == 0 && c == 0)
    {
        numOfSolutions = "infinite number of solutions";
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        numOfSolutions = "no solution";
    }
    else if (a != 0)
    { //multiple solutions
        if(quadRoot > 0)
        {
            numOfSolutions = "two real solutions";
            cout<<"This equation has "<<numOfSolutions<<" x="<<subQuad<<", x= "<<addQuad<<endl;
        }
        else if(quadRoot == 0)
        {
            numOfSolutions = "one real solution";
            cout<<"This equation has "<<numOfSolutions<<" x="<<addQuad<<endl;
        }
        else
        {
            numOfSolutions = "no real solution";
        }
    }
    else
    {
        numOfSolutions = "infinite number of solutions";
    }

    // catch all for more efficient cout
    if(numOfSolutions != "two real solutions" && numOfSolutions != "one real solution")
    {
        cout<<"This equation has "<<numOfSolutions<<endl;
    }

    return 0;
}