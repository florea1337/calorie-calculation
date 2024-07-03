#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//this calc program not a %100.But you can use this program for base.The program calculates your daily intake
// of fat, protein, carbohydrates and maximum calories 
int main()
{
    float weight{};
    float weightgoal{};
    float nrmlcalorie;
    float caloriefordiet;
    float proteincalcgr;
    float proteincalckj;
    float fatcalckj;
    float fatcalcgr;
    float carbcalckj;
    float carbcalcgr;


	cout << "Please Write Your Weight: ";
	cin >> weight;
	
	cout << "Please Enter Your Weight Goal: ";
	cin >> weightgoal;

    nrmlcalorie = weight * 33;
    caloriefordiet = nrmlcalorie - 400;
    proteincalcgr = weightgoal * 2.2;
    proteincalckj = proteincalcgr * 4;
    fatcalckj = caloriefordiet * 0.39;
    fatcalcgr = fatcalckj / 9;
    carbcalckj = caloriefordiet - (proteincalckj + fatcalckj);
    carbcalcgr = carbcalckj / 4;

   cout << "Your Maximum Number of Calories You Should Consume Per Day: \n" << caloriefordiet << endl;
    cout << "Your Maximum Number of Protein(gr) You Should Consume Per Day: \n" << proteincalcgr << endl;
    cout << "Your Maximum Number of Protein(kj) You Should Consume Per Day: \n" << proteincalckj << endl;
    cout << "Your Maximum Number of Fat You(gr) Should Consume Per Day: \n" << fatcalckj << endl;
    cout << "Your Maximum Number of Fat(kj) You Should Consume Per Day: \n" << fatcalcgr << endl;
    cout << "Your Maximum Number of Carbohydrate(gr) You Should Consume Per Day: \n" << carbcalckj << endl;
    cout << "Your Maximum Number of Carbohydrate(kj) You Should Consume Per Day: \n" << carbcalcgr << endl;

    //cout << caloriefordiet << proteincalcgr << proteincalckj << fatcalckj << fatcalcgr << carbcalckj << carbcalcgr;

}
