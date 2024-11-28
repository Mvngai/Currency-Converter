#include <iostream>
using namespace std;

class arithmetic{
public:
    int currency1;
    int currency2;
    float USD, EUR, JPY, GBP, CHF, KWD, BHD, OMR, AUD, CAD, KSH;

    // USD, EUR, JPY, GBP, CHF, KWD, BHD, OMR, AUD, CAD, KSH
    //Arrays storing conversion rates relative to each other
    float USD_CONVERSION[11] = {1, 0.92, 156.73, 0.79, 0.9, 0.31, 0.38, 0.38, 1.52, 1.38, 131.36};
    float EUR_CONVERSION[11] = {1.08, 1, 169.09, 0.85, 0.97, 0.33, 0.41, 0.42, 1.64, 1.49, 141.92};
    float JPY_CONVERSION[11] = {0.0064, 0.0059, 1, 0.0050, 0.0057, 0.0024, 0.0024, 0.0025, 0.0097, 0.0088, 0.84};
    float GBP_CONVERSION[11] = {1.27, 1.17, 198.64, 1, 1.14, 0.39, 0.48, 0.49, 1.93, 1.75, 166.84};
    float CHF_CONVERSION[11] = {1.11, 1.03, 174.50,0.88, 1, 0.34, 0.42, 0.43, 1.69, 1.53, 146.26};
    float KWD_CONVERSION[11] = {3.26, 3.03, 511.7, 2.57, 2.92, 1, 1.23, 1.26, 4.95, 4.49, 421.95};
    float BHD_CONVERSION[11] = {2.65, 2.47, 416.24, 2.09, 2.38, 0.81, 1, 1.02, 4.03, 3.66, 343.34};
    float OMR_CONVERSION[11] = {2.6, 2.41, 407.84, 2.04, 2.33, 0.8, 0.98, 1, 3.03, 3.58, 336.14};
    float AUD_CONVERSION[11] = {0.66, 0.61, 103.72, 0.52, 0.59, 0.2, 0.25, 0.25, 1, 0.91, 85.49};
    float CAD_CONVERSION[11] = {0.73, 0.68, 114.18, 0.57, 0.65, 0.22, 0.27, 0.28, 1.10, 1, 94.03};
    float KSH_CONVERSION[11] = {0.0077, 0.0072, 1.21, 0.0061, 0.0069, 0.0024, 0.0029, 0.003, 0.012, 0.011, 1};



    //A 2D array storing all conversion rates in one table for direct lookup
    float ALL_CURRENCIES[11][11] = {
        {1, 0.92, 156.73, 0.79, 0.9, 0.31, 0.38, 0.38, 1.52, 1.38, 131.36},            //Currency rates to others (USD to: USD, EUR, JPY)
        {1.08, 1, 169.09, 0.85, 0.97, 0.33, 0.41, 0.42, 1.64, 1.49, 141.92},           //Currency rates to others (EUR to: USD, EUR, JPY)
        {0.0064, 0.0059, 1, 0.0050, 0.0057, 0.0024, 0.0024, 0.0025, 0.0097, 0.0088, 0.84},
        {1.27, 1.17, 198.64, 1, 1.14, 0.39, 0.48, 0.49, 1.93, 1.75, 166.84},
        {1.11, 1.03, 174.50,0.88, 1, 0.34, 0.42, 0.43, 1.69, 1.53, 146.26},
        {3.26, 3.03, 511.7, 2.57, 2.92, 1, 1.23, 1.26, 4.95, 4.49, 421.95},
        {2.65, 2.47, 416.24, 2.09, 2.38, 0.81, 1, 1.02, 4.03, 3.66, 343.34},
        {2.6, 2.41, 407.84, 2.04, 2.33, 0.8, 0.98, 1, 3.03, 3.58, 336.14},
        {0.66, 0.61, 103.72, 0.52, 0.59, 0.2, 0.25, 0.25, 1, 0.91, 85.49},
        {0.73, 0.68, 114.18, 0.57, 0.65, 0.22, 0.27, 0.28, 1.10, 1, 94.03},
        {0.0077, 0.0072, 1.21, 0.0061, 0.0069, 0.0024, 0.0029, 0.003, 0.012, 0.011, 1},

    };

    //float ALL_CURRENCIES[11][11] = {USD_CONVERSION,  EUR_CONVERSION,  JPY_CONVERSION, GBP_CONVERSION, CHF_CONVERSION, KWD_CONVERSION, BHD_CONVERSION, OMR_CONVERSION, AUD_CONVERSION, CAD_CONVERSION, KSH_CONVERSION};
    string currencies[11] = {"USD","EUR","JPY", "GBP", "CHF", "KWD", "BHD", "OMR", "AUD", "CAD", "KSH"};

    // function used for conversion
    float convert_currency(int amount){
        if(currency1 == 1){
                return amount * USD_CONVERSION[currency2-1];
        }else if(currency1 == 2){
            return amount * EUR_CONVERSION[currency2-1];
        }else if(currency1 == 3){
            return amount * JPY_CONVERSION[currency2-1];
        }else if(currency1 == 4){
            return amount * GBP_CONVERSION[currency2-1];
        }else if(currency1 == 5){
            return amount * CHF_CONVERSION[currency2-1];
        }else if(currency1 == 6){
            return amount * KWD_CONVERSION[currency2-1];
        }else if(currency1 == 7){
            return amount * BHD_CONVERSION[currency2-1];
        }else if(currency1 == 8){
            return amount * OMR_CONVERSION[currency2-1];
        }else if(currency1 == 9){
            return amount * AUD_CONVERSION[currency2-1];
        }else if(currency1 == 10){
            return amount * CAD_CONVERSION[currency2-1];
        }else if(currency1 == 11){
            return amount * KSH_CONVERSION[currency2-1];
        }else{
            cout<<"Invalid Operation!";
        }
    }

    float convert_currency_2(int amount){
        return amount * ALL_CURRENCIES[currency1-1][currency2-2];
    }


    // display the options.
    void diplay_options(){
        cout<< "\n\nSelect the currency you would like to convert it to.\n";
        cout<< " 1. US Dollar (USD)\n";
        cout<< " 2. Euro (EUR)\n";
        cout<< " 3. Japanese Yen (JPY)\n";
        cout<< " 4. Sterling Pound (GBP)\n";
        cout<< " 5. Swiss Franc (CHF)\n";
        cout<< " 6. Kuwaiti Dinar(KWD)\n";
        cout<< " 7. Bahraini Dinar (BHD)\n";
        cout<< " 8. Omani Rial (OMR)\n";
        cout<< " 9. Australian Dollar (AUD)\n";
        cout<< " 10. Canadian Dollar (CAD)\n";
        cout<< " 11. Kenyan Shilling (KSH)\n";
        //cout<< " 12. Select another currency\n\n";
        cout<< "Enter your option here:";
    }
};
int main()
{
    arithmetic currency;
    bool exit = false;          //To control the program loop
    int amount;
    do{
        cout<< "\n\n****** CURRENCY CONVERTER ******\n";
        cout<< "Currency Rates are as of Sunday 9th June 2024\n\n";
        cout<< " 1. US Dollar (USD)\n";
        cout<< " 2. Euro (EUR)\n";
        cout<< " 3. Japanese Yen (JPY)\n";
        cout<< " 4. Sterling Pound (GBP)\n";
        cout<< " 5. Swiss Franc (CHF)\n";
        cout<< " 6. Kuwaiti Dinar(KWD)\n";
        cout<< " 7. Bahraini Dinar (BHD)\n";
        cout<< " 8. Omani Rial (OMR)\n";
        cout<< " 9. Australian Dollar (AUD)\n";
        cout<< " 10. Canadian Dollar (CAD)\n";
        cout<< " 11. Kenyan Shilling (KSH)\n";
        cout<< " 12. Exit.\n\n";
        cout<< "Enter the currency you would like to convert: ";
        cin >> currency.currency1;
        cout<<"\nYou have selected "<< currency.currencies[currency.currency1 - 1] << " \n\n";

        if(currency.currency1 >= 1 && currency.currency1 < 12){

            //display the second option
            currency.diplay_options();
            cin>> currency.currency2;
            cout<<"\nYou want to convert "<< currency.currencies[currency.currency1 - 1] << " to "<< currency.currencies[currency.currency2 - 1] <<"\n\n";

            if(currency.currency2 >= 1){
                // do the currency conversion
                cout<< "Enter the amount you want to convert: ";
                cin>>amount;
                cout << "Your conversion from "<< currency.currencies[currency.currency1 - 1] << " " << amount << " is " << currency.currencies[currency.currency2 - 1] << " " << currency.convert_currency(amount) << "\n\n";
            }else if(currency.currency2 == 12){
                int main();
            }

        }else{
         exit = true;
        }
    }while(!exit);
    return 0;
}
