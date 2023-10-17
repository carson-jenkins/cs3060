/*
Carson Jenkins
08/30/2023
Dr. Rory Lewis
7.5
*/

#include <iostream>
#include <iomanip>
using namespace std;

// constants
const int MONKEYS = 3;
const int DAYS = 5;

// function prototypes
void getFoodEaten(double[][DAYS]);
void displayAverageDaily(double[][DAYS]);
void displayLeastEaten(double[][DAYS]);
void displayMostEaten(double[][DAYS]);

int main(int argc, const char * argv[]) {
    
    // array to hold the monkey data
    double food[MONKEYS][DAYS];
    
    // get the amount eaten
    getFoodEaten(food);
    
    // display the average amount eaten daily by each monkey
    displayAverageDaily(food);
    
    // display the least amount eaten in a day by any one monkey
    displayLeastEaten(food);
    
    // display the most amount eaten in a day by any one monkey
    displayMostEaten(food);
    
    return 0;
}

void getFoodEaten(double food[][DAYS]){
    
    for(int monkey = 0; monkey < MONKEYS; monkey++){
        for(int day = 0; day < DAYS; day++){
            // amount eaten by monkey on this day
            cout << "Enter the pounds eaten by monkey " << "number " << (monkey + 1) << "\non day " << (day + 1) << ": ";
            cin >> food[monkey][day];
            
            // validation
            while(food[monkey][day] < 0){
                cout << "Enter a non-negative amount: ";
                cin >> food[monkey][day];
            }
        }
    }
}

void displayAverageDaily(double food[][DAYS]){
    
    double total; // accumulator
    double average; // average eaten
    
    for(int day = 0; day < DAYS; day++){
        
        // initialize the accumulator
        total = 0.0;
        
        // get the total eaten by the monkeys on this day
        for(int monkey = 0; monkey < MONKEYS; monkey++){
            total += food[monkey][day];
        }
        
        // calculate the average eaten
        average = total / MONKEYS;
        
        // display the average
        cout << "The average amount eaten on day " << (day + 1) << " is " << average << " pounds.\n";
    }
}

void displayLeastEaten(double food[][DAYS]){
    double leastFood;
    int leastMonkey;
    int leastDay;
    
    leastMonkey = 0;
    leastDay = 0;
    leastFood = food[leastMonkey][leastDay];
    
    // step through array comparing values
    for (int monkey = 0; monkey < MONKEYS; monkey++){
        for(int day = 0; day < DAYS; day++){
            if(food[monkey][day] > leastFood){
                leastFood = food[monkey][day];
                leastDay = day;
                leastMonkey = monkey;
            }
        }
    }
}

void displayMostEaten(double food[][DAYS]){
    double mostFood;
    int mostMonkey;
    int mostDay;
    
    mostMonkey = 0;
    mostDay = 0;
    mostFood = food[mostMonkey][mostDay];
    
    // step through array comparing values
    for (int monkey = 0; monkey < MONKEYS; monkey++){
        for(int day = 0; day < DAYS; day++){
            if(food[monkey][day] > mostFood){
                mostFood = food[monkey][day];
                mostDay = day;
                mostMonkey = monkey;
            }
        }
    }
}
