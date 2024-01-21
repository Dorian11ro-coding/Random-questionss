//
//  main.cpp
//  Random questions
//
//  Created by Scarlat  Dorian Andrei on 21.01.2024.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int q;
    string w;
    int e;
    int r;
    string t;
    string y;
    
    // here start's question 1/q

    cout << "Hello and welcome to my game,           ";
    
    cout << "In this game we will ask you some questions,           ";
    
    cout << "Let's get to question 1.           ";
    
    cout << "What's 22*3?          ";
    
    cout << "Option 1: 44      ";
    
    cout << "Option 2: 66      ";
    
    cout << "Option 3: 123     ";
    
    
    cin >> q;
    
    if(q==1){
        cout << "That's wrong";
    }
    else if(q==2){
        cout << "That's correct";
    }
    else if(q==3){
        cout << "That's wrong";
    }
    else{
        cout << "Invalid answer, please choose 1, 2 or 3";
    }
    
    // here ends question 1/q
    
    // here start's question 2/w
    
    cout << "Let's get to the next question, this wasn't hard but the others are gonna be hard.         ";
    
    
    cout << "What's the command for inputing a num in the terminal/words if a string is declared?       ";
    
    cin >> w;
    
    if(w=="cin"){
        cout << "Brilliant work!       ";
    }
    else{
        cout << "That's not correct!        ";
    }
    cout << "Question 3:When was C++ created?     ";
    
    cout << "Option 1: 1989     ";
    
    cout << "Option 2: 1997     ";
    
    cout << "Option 3: 1979     ";
    
    // here ends question 2/w
    
    // here start's question 3/e
    
    cin >> e;
    
    if(e==1){
        cout << "That's wrong!      ";
    }
    else if(e==2){
        cout << "That's wrong     ";
    }
    else if(e==3){
        cout << "That's correct      ";
    }
    else{
        cout << "Invalid answer, please choose 1, 2 or 3     ";
    }
    // here ends question 3/e
    
    // here start's question 4/r
    
    cout << "When was Minecraft created?     ";
    
    cout << "Option 1 : 2012 ";
    
    cout << "Option 2 : 2011 ";
    
    cout << "Option 3 : 2009 ";
    
    cin >> r;
    
    if(r==1){
        cout << "That's wrong!   ";
    }
    else if(r==2){
        cout << "That's wrong!   ";
    }
    else if(r==3){
        cout << "That's correct!   ";
    }
    else{
        cout << "Invalid answer, please choose from 1, 2 or 3";
    }
    
    cout << "Let's get to the next question.      ";
    
    cout << "With what programming language was Minecraft made?    ";
    
    cin >> r;
    
    if(t=="Java"){
        cout << "That's correct";
    }
    else{
        cout << "That's wrong!    ";
    }
    
    cout << "Let's get to the final question of this game.    ";
    
    cout << "What programming language did Apple made?    ";
    
    cin >> y;
    
    if(y=="Swift"){
        cout << "That's correct";
    }
    else{
        cout << "That's wrong";
    }
    
    return 0;
}
