/*
#include <iostream>
using namespace std;


class arithmetic{
public:

    int currency1;
    int currency2;

    float USD, EUR, JPY, GBP, CHF, KWD, BHD, OMR, AUD, CAD, KSH;



    //Dollars

 void USDtoUSD(){
    cout<<USD *1 <<"Dollars\n\n";
}
void USDtoEUR(){
    cout<<USD *0.92 <<"Euros\n\n";
 }
void USDtoJPY(){
    cout<<USD *156.73 <<"Yens\n\n";
 }
void USDtoGBP(){
    cout<<USD *0.79 <<"Pounds\n\n";
 }
void USDtoCHF(){
    cout<<USD *0.9 <<"Francs\n\n";
 }
void USDtoKWD(){
    cout<<USD *0.31 <<"Kuwaiti Dinars\n\n";
 }
void USDtoBHD(){
    cout<<USD *0.38 <<"Bahraini Dinars\n\n";
 }
void USDtoOMR(){
    cout<<USD *0.38 <<"Ohmani Rials\n\n";
 }
void USDtoAUD(){
    cout<<USD *1.52 <<"Australian Dollars\n\n";
 }
void USDtoCAD(){
    cout<<USD *1.38 <<"Canadian Dollars\n\n";
 }
void USDtoKSH(){
    cout<<USD *131.36 <<"Shillings\n\n";
 }


        //Euros Function

  void EURtoUSD(){
    cout<<EUR *1.08 <<"Dollars\n\n";
}
void EURtoEUR(){
     cout<<EUR *1 <<"Euros\n\n";
 }

 void EURtoJPY(){
     cout<<EUR *169.09 <<"Yens\n\n";
 }

 void EURtoGBP(){
     cout<<EUR *0.85 <<"Pounds\n\n";
 }

 void EURtoCHF(){
     cout<<EUR *0.97 <<"Francs\n\n";
 }

 void EURtoKWD(){
     cout<<EUR *0.33 <<"Kuwaiti Dinars\n\n";
 }

 void EURtoBHD(){
     cout<<EUR *0.41 <<"Bahraini Dinars\n\n";
 }

 void EURtoOMR(){
     cout<<EUR *0.42 <<"Ohmani Rials\n\n";
 }

 void EURtoAUD(){
     cout<<EUR *1.64 <<"Australian Dollars\n\n";
 }

 void EURtoCAD(){
     cout<<EUR *1.49 <<"Canadian Dollars\n\n";
 }

 void EURtoKSH(){
     cout<<EUR *141.92 <<"Shillings\n\n";
 }


      //Yens Function

void JPYtoUSD(){
    cout<<JPY *0.0064<<"Dollars\n\n";
}

 void JPYtoEUR(){
     cout<<JPY *0.0059 <<"Euros\n\n";
 }

 void JPYtoJPY(){
     cout<<JPY* 1 <<"Yens\n\n";
 }

 void JPYtoGBP(){
     cout<<JPY *0.0050 <<"Pounds\n\n";
 }

 void JPYtoCHF(){
     cout<<JPY *0.0057 <<"Francs\n\n";
 }

 void JPYtoKWD(){
     cout<<JPY *0.0024 <<"Kuwaiti Dinars\n\n";
 }

 void JPYtoBHD(){
     cout<<JPY *0.0024 <<"Bahraini Dinars\n\n";
 }

 void JPYtoOMR(){
     cout<<JPY *0.0025 <<"Ohmani Rials\n\n";
 }

 void JPYtoAUD(){
     cout<<JPY *0.0097 <<"Australian Dollars\n\n";
 }

 void JPYtoCAD(){
     cout<<JPY *0.0088 <<"Canadian Dollars\n\n";
 }

 void JPYtoKSH(){
     cout<<JPY *0.84 <<"Shillings\n\n";
 }


     //Pounds Function

void GBPtoUSD(){
    cout<<GBP *1.27 <<"Dollars\n\n";
}
void GBPtoEUR(){
    cout<<GBP *1.17 <<"Euros\n\n";
 }
void GBPtoJPY(){
    cout<<GBP *198.64 <<"Yens\n\n";
 }
void GBPtoGBP(){
    cout<<GBP *1 <<"Pounds\n\n";
 }
void GBPtoCHF(){
    cout<<GBP *1.14 <<"Francs\n\n";
 }
void GBPtoKWD(){
    cout<<GBP *0.39 <<"Kuwaiti Dinars\n\n";
 }
void GBPtoBHD(){
    cout<<GBP *0.48 <<"Bahraini Dinars\n\n";
 }
void GBPtoOMR(){
    cout<<GBP *0.49 <<"Ohmani Rials\n\n";
 }
void GBPtoAUD(){
    cout<<GBP *1.93 <<"Australian Dollars\n\n";
 }
void GBPtoCAD(){
    cout<<GBP *1.75 <<"Canadian Dollars\n\n";
 }
void GBPtoKSH(){
    cout<<GBP *166.84 <<"Shillings\n\n";
 }


    //Swiss Francs

void CHFtoUSD(){
    cout<<CHF *1.11 <<"Dollars\n\n";
}
void CHFtoEUR(){
    cout<<CHF *1.03 <<"Euros\n\n";
 }
void CHFtoJPY(){
    cout<<CHF *174.50 <<"Yens\n\n";
 }
void CHFtoGBP(){
    cout<<CHF *0.88 <<"Pounds\n\n";
 }
void CHFtoCHF(){
    cout<<CHF *1 <<"Francs\n\n";
 }
void CHFtoKWD(){
    cout<<CHF *0.34 <<"Kuwaiti Dinars\n\n";
 }
void CHFtoBHD(){
    cout<<CHF *0.42 <<"Bahraini Dinars\n\n";
 }
void CHFtoOMR(){
    cout<<CHF *0.43 <<"Ohmani Rials\n\n";
 }
void CHFtoAUD(){
    cout<<CHF *1.69 <<"Australian Dollars\n\n";
 }
void CHFtoCAD(){
    cout<<CHF *1.53 <<"Canadian Dollars\n\n";
 }
void CHFtoKSH(){
    cout<<CHF *146.26 <<"Shillings\n\n";
 }


    //Kuwaiti

void KWDtoUSD(){
    cout<<KWD *3.26 <<"Dollars\n\n";
}
void KWDtoEUR(){
    cout<<KWD *3.03 <<"Euros\n\n";
 }
void KWDtoJPY(){
    cout<<KWD *511.70 <<"Yens\n\n";
 }
void KWDtoGBP(){
    cout<<KWD *2.57 <<"Pounds\n\n";
 }
void KWDtoCHF(){
    cout<<KWD *2.92 <<"Francs\n\n";
 }
void KWDtoKWD(){
    cout<<KWD *1 <<"Kuwaiti Dinars\n\n";
 }
void KWDtoBHD(){
    cout<<KWD *1.23 <<"Bahraini Dinars\n\n";
 }
void KWDtoOMR(){
    cout<<KWD *1.26 <<"Ohmani Rials\n\n";
 }
void KWDtoAUD(){
    cout<<KWD *4.95 <<"Australian Dollars\n\n";
 }
void KWDtoCAD(){
    cout<<KWD *4.49 <<"Canadian Dollars\n\n";
 }
void KWDtoKSH(){
    cout<<KWD *421.95 <<"Shillings\n\n";
 }


   //Bahraini Dinar


 void BHDtoUSD(){
    cout<<BHD *2.65 <<"Dollars\n\n";
}
void BHDtoEUR(){
    cout<<BHD *2.47 <<"Euros\n\n";
 }
void BHDtoJPY(){
    cout<<BHD *416.24 <<"Yens\n\n";
 }
void BHDtoGBP(){
    cout<<BHD *2.09 <<"Pounds\n\n";
 }
void BHDtoCHF(){
    cout<<BHD *2.38 <<"Francs\n\n";
 }
void BHDtoKWD(){
    cout<<BHD *0.81 <<"Kuwaiti Dinars\n\n";
 }
void BHDtoBHD(){
    cout<<BHD *1 <<"Bahraini Dinars\n\n";
 }
void BHDtoOMR(){
    cout<<BHD *1.02 <<"Ohmani Rials\n\n";
 }
void BHDtoAUD(){
    cout<<BHD *4.03 <<"Australian Dollars\n\n";
 }
void BHDtoCAD(){
    cout<<BHD *3.66 <<"Canadian Dollars\n\n";
 }
void BHDtoKSH(){
    cout<<BHD *343.34 <<"Shillings\n\n";
 }


    //Omani Rial


void OMRtoUSD(){
    cout<<OMR *2.6 <<"Dollars\n\n";
}
void OMRtoEUR(){
    cout<<OMR *2.41 <<"Euros\n\n";
 }
void OMRtoJPY(){
    cout<<OMR *407.84 <<"Yens\n\n";
 }
void OMRtoGBP(){
    cout<<OMR *2.04 <<"Pounds\n\n";
 }
void OMRtoCHF(){
    cout<<OMR *2.33 <<"Francs\n\n";
 }
void OMRtoKWD(){
    cout<<OMR *0.8 <<"Kuwaiti Dinars\n\n";
 }
void OMRtoBHD(){
    cout<<OMR *0.98 <<"Bahraini Dinars\n\n";
 }
void OMRtoOMR(){
    cout<<OMR *1 <<"Ohmani Rials\n\n";
 }
void OMRtoAUD(){
    cout<<OMR *3.93 <<"Australian Dollars\n\n";
 }
void OMRtoCAD(){
    cout<<OMR *3.58 <<"Canadian Dollars\n\n";
 }
void OMRtoKSH(){
    cout<<OMR *336.14 <<"Shillings\n\n";
 }


     //Australin Dollar

void AUDtoUSD(){
    cout<<AUD *0.66 <<"Dollars\n\n";
}
void AUDtoEUR(){
    cout<<AUD *0.61 <<"Euros\n\n";
 }
void AUDtoJPY(){
    cout<<AUD *103.72 <<"Yens\n\n";
 }
void AUDtoGBP(){
    cout<<AUD *0.52 <<"Pounds\n\n";
 }
void AUDtoCHF(){
    cout<<AUD *0.59 <<"Francs\n\n";
 }
void AUDtoKWD(){
    cout<< AUD *0.2 <<"Kuwaiti Dinars\n\n";
 }
void AUDtoBHD(){
    cout<<AUD *0.25 <<"Bahraini Dinars\n\n";
 }
void AUDtoOMR(){
    cout<<AUD *0.25 <<"Ohmani Rials\n\n";
 }
void AUDtoAUD(){
    cout<<AUD *1 <<"Australian Dollars\n\n";
 }
void AUDtoCAD(){
    cout<<AUD *0.91 <<"Canadian Dollars\n\n";
 }
void AUDtoKSH(){
    cout<<AUD *85.49 <<"Shillings\n\n";
 }


     //Canadian Dollars


void CADtoUSD(){
    cout<<CAD *0.73 <<"Dollars\n\n";
}
void CADtoEUR(){
    cout<<CAD *0.68 <<"Euros\n\n";
 }
void CADtoJPY(){
    cout<<CAD *114.18 <<"Yens\n\n";
 }
void CADtoGBP(){
    cout<<CAD *0.57 <<"Pounds\n\n";
 }
void CADtoCHF(){
    cout<<CAD *0.65 <<"Francs\n\n";
 }
void CADtoKWD(){
    cout<<CAD *0.22 <<"Kuwaiti Dinars\n\n";
 }
void CADtoBHD(){
    cout<<CAD *0.27 <<"Bahraini Dinars\n\n";
 }
void CADtoOMR(){
    cout<<CAD *0.28 <<"Ohmani Rials\n\n";
 }
void CADtoAUD(){
    cout<<CAD *1.10 <<"Australian Dollars\n\n";
 }
void CADtoCAD(){
    cout<<CAD *1 <<"Canadian Dollars\n\n";
 }
void CADtoKSH(){
    cout<<CAD *94.03 <<"Shillings\n\n";
}

        //KSH


void KSHtoUSD(){
    cout<<KSH *0.0077 <<"Dollars\n\n";
}
void KSHtoEUR(){
    cout<<KSH *0.0072 <<"Euros\n\n";
 }
void KSHtoJPY(){
    cout<<KSH *1.21 <<"Yens\n\n";
 }
void KSHtoGBP(){
    cout<<KSH *0.0061 <<"Pounds\n\n";
 }
void KSHtoCHF(){
    cout<<KSH *0.0069 <<"Francs\n\n";
 }
void KSHtoKWD(){
    cout<<KSH *0.0024 <<"Kuwaiti Dinars\n\n";
 }
void KSHtoBHD(){
    cout<<KSH *0.0029 <<"Bahraini Dinars\n\n";
 }
void KSHtoOMR(){
    cout<<KSH *0.003 <<"Ohmani Rials\n\n";
 }
void KSHtoAUD(){
    cout<<KSH *0.012 <<"Australian Dollars\n\n";
 }
void KSHtoCAD(){
    cout<<KSH *0.011 <<"Canadian Dollars\n\n";
 }
void KSHtoKSH(){
    cout<<KSH *1 <<"Shillings\n\n";
 }



};


int main(){
    arithmetic currency;


do{

    cout<< "\n\n******     CURRENCY CONVERTER     ******\n";

     cout<< "     1. US Dollar (USD)\n";
     cout<< "     2. Euro (EUR)\n";
     cout<< "     3. Japanese Yen (JPY)\n";
     cout<< "     4. Sterling Pound (GBP)\n";
     cout<< "     5. Swiss Franc (CHF)\n";
     cout<< "     6. Kuwaiti Dinar(KWD)\n";
     cout<< "     7. Bahraini Dinar (BHD)\n";
     cout<< "     8. Omani Rial (OMR)\n";
     cout<< "     9. Australian Dollar (AUD)\n";
     cout<< "     10. Canadian Dollar (CAD)\n";
     cout<< "     11. Kenyan Shilling (KSH)\n";
     cout<< "     12. Exit.\n\n";

     cout<< "Enter the currency you would like to convert: ";
     cin>> currency.currency1;



                 cout<< "\n\nSelect the currency you would like to convert it to.\n";

                 cout<< "     1. US Dollar (USD)\n";
                 cout<< "     2. Euro (EUR)\n";
                 cout<< "     3. Japanese Yen (JPY)\n";
                 cout<< "     4. Sterling Pound (GBP)\n";
                 cout<< "     5. Swiss Franc (CHF)\n";
                 cout<< "     6. Kuwaiti Dinar(KWD)\n";
                 cout<< "     7. Bahraini Dinar (BHD)\n";
                 cout<< "     8. Omani Rial (OMR)\n";
                 cout<< "     9. Australian Dollar (AUD)\n";
                 cout<< "     10. Canadian Dollar (CAD)\n";
                 cout<< "     11. Kenyan Shilling (KSH)\n\n";

                 cin>> currency.currency2;



        switch(currency.currency1){
            case 1:
                cout<< "Enter USD amount: ";
                cin>> currency.USD;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.USDtoKSH();
                        break;
                    }
            break;

            case 2:
                cout<< "Enter EUR amount: ";
                cin>> currency.EUR;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoEUR();
                        break;
                    case 3:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoJPY();
                        break;
                    case 4:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoGBP();
                        break;
                    case 5:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoCHF();
                        break;
                    case 6:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoKWD();
                        break;
                    case 7:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoBHD();
                        break;
                    case 8:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoOMR();
                        break;
                    case 9:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoAUD();
                        break;
                    case 10:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoCAD();
                        break;
                    case 11:
                        cout<<"\n"  <<currency.EUR <<" EUR is equal to ";
                        currency.EURtoKSH();
                        break;
                    }

            break;

            case 3:
                cout<< "Enter JPY amount: ";
                cin>> currency.JPY;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.JPY <<" JPY is equal to ";
                        currency.JPYtoKSH();
                        break;
                    }
            break;

            case 4:
                cout<< "Enter GBP amount: ";
                cin>> currency.GBP;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.GBP <<" GBP is equal to ";
                        currency.GBPtoKSH();
                        break;
                    }
            break;

            case 5:
                cout<< "Enter CHF amount: ";
                cin>> currency.CHF;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.USDtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.CHF <<" CHF is equal to ";
                        currency.CHFtoKSH();
                        break;
                    }
            break;

            case 6:
                cout<< "Enter KWD amount: ";
                cin>> currency.KWD;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.KWD <<" KWD is equal to ";
                        currency.KWDtoKSH();
                        break;
                    }
            break;

            case 7:
                cout<< "Enter BHD amount: ";
                cin>> currency.BHD;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.USD <<" USD is equal to ";
                        currency.BHDtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.BHD <<" BHD is equal to ";
                        currency.BHDtoKSH();
                        break;
                    }
            break;

            case 8:
                cout<< "Enter OMR amount: ";
                cin>> currency.OMR;


                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.OMR <<" OMR is equal to ";
                        currency.OMRtoKSH();
                        break;
                    }
            break;

            case 9:
                cout<< "Enter AUD amount: ";
                cin>> currency.AUD;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.AUD <<" AUD is equal to ";
                        currency.AUDtoKSH();
                        break;
                    }
            break;

            case 10:
                cout<< "Enter CAD amount: ";
                cin>> currency.CAD;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.CAD <<" CAD is equal to ";
                        currency.CADtoKSH();
                        break;
                    }

            break;

            case 11:
                cout<< "Enter KSH amount: ";
                cin>> currency.KSH;

                    switch(currency.currency2){
                    case 1:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoUSD();
                        break;
                    case 2:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoEUR();
                        break;
                     case 3:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoJPY();
                        break;
                     case 4:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoGBP();
                        break;
                     case 5:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoCHF();
                        break;
                     case 6:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoKWD();
                        break;
                     case 7:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoBHD();
                        break;
                     case 8:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoOMR();
                        break;
                     case 9:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoAUD();
                        break;
                     case 10:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoCAD();
                        break;
                     case 11:
                        cout<<"\n"  <<currency.KSH <<" KSH is equal to ";
                        currency.KSHtoKSH();
                        break;
                    }

            break;

            case 12:
                exit(0);

            break;

            default:
                cout<< "Invalid opertaion selected!";
            }


}while(1);


return 0;
}
*/


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
    bool exit = false;          //To control a program loop
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



 //line 1205  currency.currencies[currency.currency1 - 1]
 //read on that -1 function -for calling correct indexes on in an array, since they start at 0. Eg, to call if sb calls element 1 referring to index 0 then its (1-1) hence element 0 is called
