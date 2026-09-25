#include <iostream>
using namespace std;

int main()
{
    // Завдання 1(меню одне на if/switch)

    /*int menuNumber;
    cout << R"(
--------------------
        Menu
--------------------
[1] - Ukraine
[2] - Poland
[3] - USA
[4] - UK
[5] - Turkey

Enter number of country )";
    cin >> menuNumber;*/


    // 1.1
    /* if (menuNumber == 1)
        cout << "\nCapital city of Ukraine is Kyiv";
    else if (menuNumber == 2)
        cout << "\nCapital city of Poland is Varshava";
    else if (menuNumber == 3)
        cout << "\nCapital city of USA is Vashynhton";
    else if (menuNumber == 4)
        cout << "\nCapital city of UK is London";
    else if (menuNumber == 5)
        cout << "\nCapital city of Turkey is Ankara";
    else
        cout << "\nError input";*/


    // 1.2
    /*switch (menuNumber)
    {
    case 1:
        cout << "\nCapital city of Ukraine is Kyiv";
        break;
    case 2:
        cout << "\nCapital city of Poland is Varshava";
        break;
    case 3:
        cout << "\nCapital city of USA is Vashynhton";
        break;
    case 4:
        cout << "\nCapital city of UK is London";
        break;
    case 5:
        cout << "\nCapital city of Turkey is Ankara";
        break;
    default:
        cout << "\nError input";
        break;
    }*/



    // Завдання 2
    
    /*int dayNumber;
    cout << "Enter number of day ";
    cin >> dayNumber;*/


    // 2.1
    /*if (dayNumber >= 1 && dayNumber <= 5)
        cout << "It's working day";
    else if (dayNumber == 6 || dayNumber == 7)
        cout << "It's weekend";
    else
        cout << "\nError input";*/


    // 2.2
    /*switch (dayNumber)
    {
    case 1: case 2: case 3: case 4: case 5:
        cout << "It's working day";
        break;
    case 6: case 7:
        cout << "It's weekend";
        break;
    default:
        cout << "\nError input";
        break;
    }*/



    // Завдання 3

    /*int numDirection;
    cout << R"(
[1] - North
[2] - South
[3] - West
[4] - East

Enter direction )";
    cin >> numDirection;*/


    // 3.1
    /*if (numDirection == 1)
        cout << "Back direction - South";
    else if (numDirection == 2)
        cout << "Back direction - North";
    else if (numDirection == 3)
        cout << "Back direction - East";
    else if (numDirection == 4)
        cout << "Back direction - West";
    else
        cout << "\nError input";*/


    // 3.1
    /*switch (numDirection)
    {
    case 1:
        cout << "Back direction - South";
        break;
    case 2:
        cout << "Back direction - North";
        break;
    case 3:
        cout << "Back direction - East";
        break;
    case 4:
        cout << "Back direction - West";
        break;
    default:
        cout << "\nError input";
        break;
    }*/



    // Завдання 4

    /*int animalNum;
    cout << R"(
--------------------
       Animals
--------------------
[1] - Shark
[2] - Elephant
[3] - Lion
[4] - Wolf
[5] - Giraffe
[6] - Crocodile
[7] - Koala

Enter animal number )";
    cin >> animalNum;*/


    // 4.1
    /*if (animalNum == 1 or animalNum == 3 or animalNum == 4 or animalNum == 6)
        cout << "Animal is predator"; // хижак
    else if (animalNum == 2 or animalNum == 5 or animalNum == 7)
        cout << "Animal is herbivorous"; // травоїдна
    else
        cout << "\nError input";*/


    //4.2
    /*switch (animalNum)
    {   
    case 1: case 3: case 4: case 6:
        cout << "Animal is predator";
        break;
    case 2: case 5: case 7:
        cout << "Animal is herbivorous";
        break;
    default:
        cout << "\nError input";
        break;
    }*/
}
