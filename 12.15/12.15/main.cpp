// 12.15
// Carson Jenkins

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <fstream>
using namespace std;

// fucntion prototypes
int countSentences(string);
int countWords(string);

int main(int argc, const char * argv[]) {

    int sentences;
    int words;
    double average;
    
    // get number of sentences
    sentences = countSentences("text.txt");
    
    // get number of words
    words = countWords("text.txt");
    
    // calculate average words per sentence
    average = static_cast<double>(words) / sentences;
    
    // display result
    cout << "The file contains " << words << " words, and " << sentences << " sentences.\n";
    cout << "There is an average of " << setprecision(1) << fixed << average << " words per sentence.\n";
    
    return 0;
}

int countSentences(string){
    
    const int SIZE = 500;
    char input[SIZE];
    fstream inputFile;
    int numSentences = 0;
    
    // open, read and close file
    inputFile.open(filename, ios::in);
    if(!inputFile){
        cout << "ERROR\n";
        exit(0);
    }
    
    inputFile.getline(input, SIZE);
    while(!inputFile.eof()){
        for(int index = 0; input[index] != '\0'; index++){
            if{
                
            }
        }
    }
    
    // return number of sentences
    return numSentences;
}

int countWords(string){
    const int SIZE = 500;
    char input[SIZE];
    fstream inputFile;
    int numWords = 0;
    
    // open, read and close file
    inputFile.open(filename, ios::in);
    if(!inputFile){
        cout << "ERROR\n";
        exit(0);
    }
    
    inputFile.getline(input, SIZE);
    while(!inputFile.eof()){
        int index = 0;
        while(input[index] != '\0'){
            while(isspace(input[index]) && input[index] != '\0'){
                index++;
            }
            
        }
    }
    
    // return number of sentences
    return numWords;
}
