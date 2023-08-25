#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_OF_COOKIES_IN_BOX = 24;
const int CONTAINER_CAPACITY = 75;

int main()
{
    int numberOfCookies;
    int numberOfBoxes;
    int numberOfContainers;
    int leftoverCookies;
    int leftoverBoxes;

    cout << "Enter the total number of cookies: ";
    cin >> numberOfCookies;
    cout << endl;

    numberOfBoxes = numberOfCookies / NUMBER_OF_COOKIES_IN_BOX;
    cout << "The number of cookie boxes needed to hold the cookies: " << numberOfBoxes << endl;

    leftoverCookies = numberOfCookies % NUMBER_OF_COOKIES_IN_BOX;
    cout << "Leftover cookies: " << leftoverCookies << endl;

    numberOfContainers = numberOfBoxes / CONTAINER_CAPACITY;
    if (numberOfBoxes / CONTAINER_CAPACITY != 0) {
        numberOfContainers;
        leftoverBoxes = numberOfBoxes % CONTAINER_CAPACITY;
    }
    else {
        leftoverBoxes = 0;
    }

    cout << "The number of containers needed to store the cookie boxes: " << numberOfContainers << endl;

    cout << "Leftover boxes: " << leftoverBoxes << endl;

    system("pause");
    return 0;
}
