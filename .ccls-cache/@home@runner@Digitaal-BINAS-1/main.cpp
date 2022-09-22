// Library
#include <iostream>


class BewegingKrachtDichtheid {

    public:

        void afstand(double snelheid, double tijd) {
            double afstand = snelheid * tijd;
            std::cout << "In Woorden >>  afstand = snelheid x tijd" << std::endl;
            std::cout << "In Symbolen >>  s = v x t" << std::endl;
            std::cout << "\033[1;32mDe afstand is: \033[0m" << afstand << " meter" << std::endl;
        }

        void gemiddeldeSnelheid(double afstand, double tijd) {
            double gemiddeldeSnelheid = afstand / tijd;
            std::cout << "In Woorden >>  gemiddelde snelheid = afstand : tijd" << std::endl;
            std::cout << "In Symbolen >>  v = s : t" << std::endl;
            std::cout << "\033[1;32mDe gemiddelde snelheid is: \033[0m" << gemiddeldeSnelheid << " meter per seconde" << std::endl;
        }
        
        void versnelling(double snelheid, double tijd) {
            double versnelling = snelheid / tijd;
            std::cout << "In Woorden >>  versnelling = snelheidsverandering : tijd" << std::endl;
            std::cout << "In Symbolen >>  a = (V eind - V begin) : t" << std::endl;
            std::cout << "\033[1;32mDe versnelling is: \033[0m" << versnelling << " meter per seconde per seconde" << std::endl;
        }

       void krachtVoorVersnelling(double massa, double versnelling) {
           double kracht = massa * versnelling;
           std::cout << "In Woorden >>  kracht = massa x versnelling" << std::endl;
           std::cout << "In Symbolen >>  F = m x a" << std::endl;
           std::cout << "\033[1;32mDe kracht is: \033[0m" << kracht << " Newton" << std::endl;
       }

       void gewicht(double massa, double valversnelling) {
           double gewicht = massa * valversnelling;
           std::cout << "In Woorden >>  gewicht = massa x valversnelling" << std::endl;
           std::cout << "In Symbolen >>  Fg = m x g" << std::endl;
           std::cout << "\033[32mHet gewicht is: \033[0m" << gewicht << " Newton" << std::endl;
       }

       void druk(double kracht, double oppervlakte) {
           double druk = kracht / oppervlakte;
           std::cout << "In Woorden >>  druk = kracht : oppervlakte" << std::endl;
           std::cout << "In Symbolen >>  P = F : A" << std::endl;
           std::cout << "\033[32mDe druk is: \033[0m" << druk << " Pascal" << std::endl;
       }

       void arbeid(double kracht, double afstand) {
           double arbeid = kracht * afstand;
           std::cout << "In Woorden >>  arbeid = kracht x afstand" << std::endl;
           std::cout << "In Symbolen >>  W = F x s" << std::endl;
           std::cout << "\033[1;32mDe arbeid is: \033[0m" << arbeid << " Joule" << std::endl;
       }

       void vermogen(double arbeid, double tijd) {
           double vermogen = arbeid / tijd;
           std::cout << "In Woorden >>  vermogen = arbeid : tijd" << std::endl;
           std::cout << "In Symbolen >>  P = W : t" << std::endl;
           std::cout << "\033[1;32mHet vermogen is: \033[0m" << vermogen << " Watt" << std::endl;
       }

       void moment(double kracht, double afstand) {
           double moment = kracht * afstand;
           std::cout << "In Woorden >>  moment = kracht x lengte van de hefboom" << std::endl;
           std::cout << "In Symbolen >>  M = F x l" << std::endl;
           std::cout << "\033[1;32mHet moment is: \033[0m" << moment << " Newton meter" << std::endl;
       }

       void dichtheid(double massa, double volume) {
           double dichtheid = massa / volume;
           std::cout << "In Woorden >>  dichtheid = massa : volume" << std::endl;
           std::cout << "In Symbolen >> ρ = m : V" << std::endl;
           std::cout << "" << "\033[1;32mDe dichtheid is: \033[0m" << dichtheid << " kilogram per kubieke meter" << std::endl;
       }

};


// Main func
int main() {
    BewegingKrachtDichtheid bkd;
    bkd.dichtheid(10, 10);
    std::endl (std::cout);
    bkd.krachtVoorVersnelling(10, 10);
    return 0;
}