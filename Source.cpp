#include "c:\Users\james\Desktop\std_lib_facilities.h"

//prints string, but censors some words.

/*    int main()
    {
        vector<string> dislikedVector = { "Broccoli", "Puree", "Cauliflower", "Cabbage" };
        bool disliked = false;

        for (string temp; cin >> temp; ) // read
        {
            for (auto word : dislikedVector) //auto...sets data type to...first input? idk.
            {
                if (word == temp)
                {
                    disliked = true;  //if the word isn't found in temp- doesn't actually matter! We handle it later with the
                                        //logic below. 
                    break;
                }
            }
            if (disliked) //loops once per word. This is the key! I need to block code better.
                cout << "BLEEP" << '\n';
            else
                cout << temp << '\n';

            disliked = false;
        }
    }
    */

int main()
{
    double val = 0;
    double smallest = 0;
    double largest = 0;

    vector<double> values;
    
    double m_to_cm = 100;
    double cm_to_m = 1 / 100;
    
    double in_to_cm = 2.54;
    double cm_to_in = 0.4;

    double in_to_ft = 12;
    double ft_to_in = 1 / 12;

    string unit = " ";
    

    cout << "Please enter a number.\n";

        while (cin >> val >> unit) {

            if ((unit != "ft") || (unit != "m" )|| (unit != "cm") || (unit != "in"))
                cout << "unit not recognised!";
                break;
           /* else
                if (values.size() == 0) {
                 values.push_back(val);
                 largest = val;
                 smallest = val;
                  cout << val << " is the smallest and largest value.\n";
                }
                

                else {
                    if (val < smallest) {
                       smallest = val;
                      cout << val << " is the smallest number!\n";
                }
                    
                    if (val > largest) {
                       largest = val;
                       cout << val << " is the largest number!\n";
                }
                

            }
            


*/        }
}


