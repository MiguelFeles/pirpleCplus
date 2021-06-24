#include <iostream> 
#include <iomanip>//for prices
#include <string> //for strings

using namespace std;

class Dog{
    protected: //atrivutos
        string dogName;
        char breed;
        int age;
        int weight;
        bool subjectToDiscount;
        int riskWeight;
        float belowRiskWeightPremium;
        float aboveRiskWeightPremium;
    public: //metodoss
        Dog(string,int,int); //constructor inicializa los atributos
        int getAge();
        bool getSubjectToDiscount();
        float getBasePremium();
        virtual string displayDogBreed(); //virtual
        virtual ~Dog(); //virtual
};

                    Dog::Dog(string _dogName, int _age, int _weight) {
                    this->dogName = _dogName;
                    this->age = _age;
                    this->weight = _weight;
                    }
                    string Dog::displayDogBreed(){return " a dog";}
                    int Dog::getAge(){return age;} //this
                    float Dog::getBasePremium(){return (weight < riskWeight) ? belowRiskWeightPremium : aboveRiskWeightPremium;}
                    bool Dog::getSubjectToDiscount(){return this->subjectToDiscount;}
                    Dog::~Dog(){}

        class Pitbull : public Dog
        {
            public :
                Pitbull(string, int, int);
                string displayDogBreed();
                ~Pitbull();
        };

                    Pitbull::Pitbull(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                             {
                             this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'p';
                            this->subjectToDiscount = false;
                            this->riskWeight = 20;
                            this->belowRiskWeightPremium = 30.20f;
                            this->aboveRiskWeightPremium = 35.15f;  
                            }
                    string Pitbull::displayDogBreed(){return "a pitbull";}   
                    Pitbull :: ~Pitbull(){}

        class Doberman : public Dog
        {
            public :
                Doberman(string, int, int);
                string displayDogBreed();
                ~Doberman();
        };   
                    Doberman::Doberman(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'd';
                            this->subjectToDiscount = true;
                            this->riskWeight = 35;
                            this->belowRiskWeightPremium = 28.16f;
                            this->aboveRiskWeightPremium = 30.00f;
                            }
                    string Doberman :: displayDogBreed(){return " a Doberman";}
                    Doberman :: ~Doberman(){}

        class Rottweiler : public Dog
        {
            public :
                Rottweiler(string, int, int);
                string displayDogBreed();
                ~Rottweiler();
        };   
                    Rottweiler::Rottweiler(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'r';
                            this->subjectToDiscount = false;
                            this->riskWeight = 45;
                            this->belowRiskWeightPremium = 28.00f;
                            this->aboveRiskWeightPremium = 29.75f;
                            }
                    string Rottweiler :: displayDogBreed(){return " a Rottweiller";}
                    Rottweiler :: ~Rottweiler(){}    

        class German_shipherd : public Dog
        {
            public :
                German_shipherd(string, int, int);
                string displayDogBreed();
                ~German_shipherd();
        };   
                    German_shipherd::German_shipherd(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'g';
                            this->subjectToDiscount = true;
                            this->riskWeight = 30;
                            this->belowRiskWeightPremium = 27.50f;
                            this->aboveRiskWeightPremium = 29.75f;
                            }
                    string German_shipherd :: displayDogBreed(){return " a German Shipherd";}
                    German_shipherd :: ~German_shipherd(){}                  

        class Chowchow : public Dog
        {
            public :
                Chowchow(string, int, int);
                string displayDogBreed();
                ~Chowchow();
        };   
                    Chowchow::Chowchow(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'c';
                            this->subjectToDiscount = true;
                            this->riskWeight = 24;
                            this->belowRiskWeightPremium = 25.10f;
                            this->aboveRiskWeightPremium = 27.50f;
                            }
                    string Chowchow :: displayDogBreed(){return " a Chow Chow";}
                    Chowchow :: ~Chowchow(){}  

        class Great_dane : public Dog
        {
            public :
                Great_dane(string, int, int);
                string displayDogBreed();
                ~Great_dane();
        };   
                    Great_dane::Great_dane(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 't';
                            this->subjectToDiscount = true;
                            this->riskWeight = 55;
                            this->belowRiskWeightPremium = 25.10f;
                            this->aboveRiskWeightPremium = 25.20f;
                            }
                    string Great_dane :: displayDogBreed(){return " a Great Dane";}
                    Great_dane :: ~Great_dane(){}  

        class Presa_canario : public Dog
        {
            public :
                Presa_canario(string, int, int);
                string displayDogBreed();
                ~Presa_canario();
        };   
                    Presa_canario::Presa_canario(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 's';
                            this->subjectToDiscount = false;
                            this->riskWeight = 45;
                            this->belowRiskWeightPremium = 20.01f;
                            this->aboveRiskWeightPremium = 20.55f;
                            }
                    string Presa_canario :: displayDogBreed(){return " a Presa Canario";}
                    Presa_canario :: ~Presa_canario(){} 

        class Akita : public Dog
        {
            public :
                Akita(string, int, int);
                float getBasePremium();
                string displayDogBreed();
                ~Akita();
        };   
                    Akita::Akita(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'k';
                            this->subjectToDiscount = false;
                            this->belowRiskWeightPremium = 19.75f;
                            }
                    string Akita :: displayDogBreed(){return " an Akita";}
                    float Akita::getBasePremium() {return belowRiskWeightPremium;}
                    Akita :: ~Akita(){}  

        class Alaskan_malamute : public Dog
        {
            public :
                Alaskan_malamute(string, int, int);
                string displayDogBreed();
                ~Alaskan_malamute();
        };   
                    Alaskan_malamute::Alaskan_malamute(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'm';
                            this->subjectToDiscount = true;
                            this->riskWeight = 38;
                            this->belowRiskWeightPremium = 15.50f;
                            this->aboveRiskWeightPremium = 18.15f;
                            }
                    string Alaskan_malamute :: displayDogBreed(){return " an Alaskan Malamute";}
                    Alaskan_malamute :: ~Alaskan_malamute(){} 

        class Husky : public Dog
        {
            public :
                Husky(string, int, int);
                string displayDogBreed();
                ~Husky();
        };   
                    Husky::Husky(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'b';
                            this->subjectToDiscount = true;
                            this->riskWeight = 38;
                            this->belowRiskWeightPremium = 15.50f;
                            this->aboveRiskWeightPremium = 18.15f;
                            }
                    string Husky :: displayDogBreed(){return " a Husky";}
                    Husky :: ~Husky(){} 

        class Other_breed : public Dog
        {
            public :
                Other_breed(string, int, int);
                string displayDogBreed();
                ~Other_breed();
        };   
                    Other_breed::Other_breed(string _dogName, int _age, int _weight) : Dog(_dogName, _age, _weight)
                            {
                            this->dogName = _dogName;
                            this->age = _age;
                            this->weight = _weight;
                            this->breed = 'b';
                            this->subjectToDiscount = true;
                            this->riskWeight = 35;
                            this->belowRiskWeightPremium = 4.95f;
                            this->aboveRiskWeightPremium = 8.95f;
                            }
                    string Other_breed :: displayDogBreed(){return " an Other Breed";}
                    Other_breed :: ~Other_breed(){} 


 




int main()
{
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);            // code that they gave to me

     int dogCount = 0;
     float totalPremium = 0.0f;
    string characters = "pdrgctskmhb";





     cout << "Please enter the number of dogs in your household" << endl;
     cin >> dogCount;


     for(int i = 1; i<=dogCount; i++)
     {
         Dog *pet;
        float basePremium = 0.0f;
        float actualPremium = 0.0f;
        int weight = 0;
        int age = 0;
        bool subjectToDiscount;
        char breedCode = 'a';
        string dogName = "";


        cout << "Enter the name of dog #" << i <<":" << endl;
        cin.ignore();
        getline(cin, dogName);
        cout << "Enter the breed code for " << dogName << ": ";
        cin >> breedCode;
            if(characters.find(breedCode) == string::npos)
            {
            cout << "Sorry. That is not a valid breed code. Please re-enter this dog's information" << endl;
            basePremium = 0.0f;
            i--;
            }

            else
            {
            cout << "enter the current age of " << dogName << " : ";
            cin >> age;
            cout << "enter the weight of " << dogName << " : ";
            cin >> weight;

            switch (breedCode)
                {

                case 'p' : pet = new Pitbull(dogName, age, weight); break;
                case 'd' : pet = new Doberman(dogName, age, weight); break;
                case 'r' : pet = new Rottweiler(dogName, age, weight); break;
                case 'g' : pet = new German_shipherd(dogName, age, weight); break;
                case 'c' : pet = new Chowchow(dogName, age, weight); break;
                case 't' : pet = new Great_dane(dogName, age, weight); break;
                case 's' : pet = new Presa_canario(dogName, age, weight); break;
                case 'k' : pet = new Akita(dogName, age, weight); break;
                case 'm' : pet = new Alaskan_malamute(dogName, age, weight); break;
                case 'h' : pet = new Husky(dogName, age, weight); break;
                case 'b' : pet = new Other_breed(dogName, age, weight); break;      
                }

                
            }
    
            cout << dogName << " is " << pet->displayDogBreed() << "." << endl;
            basePremium = pet->getBasePremium();
            subjectToDiscount = pet->getSubjectToDiscount();
            actualPremium = (subjectToDiscount && pet->getAge() > 13) ? basePremium * 0.8 : basePremium;
            actualPremium = (weight > 50) ? actualPremium + basePremium / 4 : actualPremium;
            cout << "The monthly premium for " << dogName << " is " << actualPremium << "." << endl;
            totalPremium += actualPremium;
     }
    cout << endl;
    cout << "The total monthly premium for all dogs is " << totalPremium << "." << endl;
    return 0;
}

