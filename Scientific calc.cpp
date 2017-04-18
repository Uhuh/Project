#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const int BASE10 = 10;
    short choiceTwo, trigChoice;
    double answer;
    bool B10 = false, sCalc = true, trigCalc = true;
    double sciResult, logOf, base, expo, logBase;
    short choices;
    double value1, value2, result, trigResult, trigValue;
    cout << "\nCALCULATOR\nDylan Warren";
    while (true)
    {
        cout << "\n\n------------------------------"
                "\n1. Add\n" <<
                "\n2. Subtract\n" <<
                "\n3. Divide\n" <<
                "\n4. Multiply\n" <<
                "\n5. Scientific calculator.\n" <<
                "\n6. Exit\n" <<
                "------------------------------" <<
                "\nWhat would you like to do?(1-6): ";
                cin >> choices;
        if (choices == 6)
                break;
        switch(choices)
        {
        case 1:
            cout << "Enter the first value: ";
            cin >> value1;
            cout << "Enter the second value: ";
            cin >> value2;
            cout << "The solution is: ";
            result = value1 + value2;
            answer = result;
            cout << value1 << "+" << value2 << "=" << result;
            break;
        case 2:
            cout << "Enter the first value: ";
            cin >> value1;
            cout << "Enter the second value: ";
            cin >> value2;
            cout << "The solution is: ";
            result = value1 - value2;
            answer = result;
            cout << value1 << "-" << value2 << "=" << result;
            break;
        case 3:
            cout << "Enter the first value: ";
            cin >> value1;
            cout << "Enter the second value: ";
            cin >> value2;
            cout << "The solution is: ";
            result = value1 / value2;
            answer = result;
            cout << value1 << "/" << value2 << "=" << result;
            break;
        case 4:
            cout << "Enter the first value: ";
            cin >> value1;
            cout << "Enter the second value: ";
            cin >> value2;
            cout << "The solution is: ";
            result = value1 * value2;
            answer = result;
            cout << value1 << "*" << value2 << "=" << result;
            break;
        default:
            cout << "\nInvalid input, please enter a numeric value(1-2-3, etc)" << endl;
        case 5:
            sCalc = true;
            while (sCalc)
            {
                cout << "\n\n------------------------------"
                << "\nMenu for scientific calculator" << endl << endl
                << "1. Exponent(power)."
                << "\n2. Root."
                << "\n3. Logs."
                << "\n4. Trigonometric functions."
                << "\n5. Basic Calculator."
                << "\n------------------------------" << endl
                << "What would you like to do?(1-4): ";
                cin >> choiceTwo;
                if (choiceTwo==5)
                    break;
                switch (choiceTwo)
                {
                    case 1:
                        cout << "\nPlease enter the number being raised to a power: " << endl;
                        cin >> base;
                        cout << "\nNow please enter the exponent(power): ";
                        cin >> expo;
                        sciResult = pow(base, expo);
                        answer = sciResult;
                        cout << "The result of " << base << " raised to " << expo << " is: " << sciResult << "." << endl;
                        break;
                    case 2:
                        cout << "\nPlease enter the root(2-square, 3-cubic, etc): ";
                        cin >> expo;
                        cout << "\nPlease enter the base number: ";
                        cin >> base;
                        sciResult = pow(base, 1/expo);
                        answer = sciResult;
                        cout << "The root of " << base << " is: " << sciResult << "." << endl;
                        break;
                    case 3:
                        cout << "\nIs it base 10?(1-Yes, 0-No): ";
                        cin >> B10;
                        if (B10)
                        {
                            cout << "\nLn(Base 10) of what number?: ";
                            cin >> logOf;
                            sciResult = log(logOf)/log(10);
                            answer = sciResult;
                            cout << "The result of Ln " << logOf << " is: " << sciResult << "." << endl;
                            B10 = false;
                        }
                        else
                        {
                            cout << "\nPlease enter the base: ";
                            cin >> logBase;
                            cout << "\nLog(" << logBase << ") of what number?: ";
                            cin >> logOf;
                            sciResult = (log(logOf)/log(logBase));
                            answer = sciResult;
                            cout << endl << sciResult;
                        }
                        break;
                    default:
                        cout << "\nInvalid input please try again using numeric values.(1-2-3)" << endl;
                    case 4:
                        while (trigCalc)
                        {
                            cout << "\n------------------------------"
                                 << "\n1. Sine."
                                 << "\n2. Cosine."
                                 << "\n3. Tangent."
                                 << "\n4. Basic Calculator."
                                 << "\n5. Scientific Calculator."
                                 << "\n------------------------------"
                                 << "\nWhat would you like to do?(1-5): ";
                            cin >> trigChoice;
                            if (trigChoice == 4)
                            {
                                sCalc = false;
                                break;
                            }
                            if (trigChoice == 5)
                                break;
                            switch (trigChoice)
                            {
                                case 1:
                                    cout << "Sine() of?: ";
                                    cin >> trigValue;
                                    trigResult = sin(trigValue);
                                    cout << "Sine(" << trigValue << ") = " << trigResult << endl;
                                    break;
                                case 2:
                                    cout << "Cosine() of?: ";
                                    cin >> trigValue;
                                    trigResult = cos(trigValue);
                                    cout << "Cosine(" << trigValue << ") = " << trigResult << endl;
                                    break;
                                case 3:
                                    cout << "Tangent() of?: ";
                                    cin >> trigValue;
                                    trigResult = tan(trigValue);
                                    cout << "Tangent(" << trigValue << ") = " << trigResult << endl;
                                    break;
                                default:
                                    cout << "\nThat's not a valid choice. Enter a numeric value. (1-5)" << endl;
                            }
                        }
                }
            }
        }
    }
    cout << "\aGoodbye and thank you for using this calculator!" << endl;
    return 0;
}
