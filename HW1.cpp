//
#include <iostream>

using namespace std;

string season(string answer)
{
    if(answer.compare("fall")==0){
        return "basic";
    } else if(answer.compare("spring")==0){
        return "basic";
    }else if(answer.compare("summer")==0){
        return "sweaty";
    }else if(answer.compare("winter")==0){
        return "heartless";
    } else{
        return "weird";
    }
}

string animal(string answer){
    if(answer.compare("dog")==0){
        return "happy";
    } else if(answer.compare("cat")==0){
        return "snappy";
    }else {
        return "willful";
    }
}

string hand(string answer){
    if(answer.compare("right")==0){
        return "smart";
    } else if(answer.compare("left")==0){
        return "creative";
    }else {
        return "rebellious";
    }
}

int main()
{
    string seasonAns;
    string animalAns;
    string handAns;
    
    cout << "The Ultimate Sub-Par \"BuzzFeed\" Quiz" << endl;
    cout << "answers should be all lowercase" << endl;

    cout << "What's your favorite season: Fall, Winter, Spring, Summer";
    cout << "Answer: ";
    cin >> seasonAns;

    cout << "Cats or Dogs";
    cout << "Answer: ";
    cin >> animalAns;

    cout << "Right-handed or Left-handed";
    cout << "Answer: (\"right\" or \"left\"";
    cin >> handAns;


    cout << "" << endl;
    cout << "The BuzzFeed Overlords have their answer.";
    cout << "You are a" + season(seasonAns)+ ", "+ animal(animalAns)+" and, "+ hand(handAns)+".";


    return 0;
}