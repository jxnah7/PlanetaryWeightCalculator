#include <iostream>


int main() {
  
  double weight;
  int planet;


  std::cout << "What is your earth weight in pounds: ";
  std::cin >> weight;

  
  std::cout << std::endl << "List of all avaliable planets to fight on\n";
  std::cout << "[1]Mercury 0.38 relative gravity\n";
  std::cout << "[2]Venus 0.91 relative gravity\n";
  std::cout << "[3]Mars 0.38 relative gravity\n";
  std::cout << "[4]Jupiter 2.34 relative gravity\n";
  std::cout << "[5]Saturn 1.06 relative gravity\n";
  std::cout << "[6]Uranus 0.92 relative gravity\n";
  std::cout << "[7]Neptune 1.19 relative gravity\n";

  std::cout << "\nWhat planet do you want to fight on(1-7): ";
  std::cin >> planet;
  

  std::cout << "The planet you have chosen is: ";

  switch(planet) {

    case 1 :
      std::cout << "Mercury" << " with a relative gravity of 0.38!\n";
      std::cout << "You will weight " << weight * 0.38 << " on this planet.\n";
      break;
    case 2 :
      std::cout << "Venus" << " with a relative gravity of 0.91!\n";
      std::cout << "You will weight " << weight * 0.91 << " on this planet.\n";
      break;
    case 3 :
      std::cout << "Mars" << " with a relative gravity of 0.38!\n";
      std::cout << "You will weight " << weight * 0.38 << " on this planet.\n";
      break;
    case 4 :
      std::cout << "Jupiter" << " with a relative gravity of 2.34!\n";
      std::cout << "You will weight " << weight * 2.34 << " on this planet.\n";

      break;
    case 5 :
      std::cout << "Saturn" << " with a relative gravity of 1.06!\n";   
      std::cout << "You will weight " << weight * 1.06 << " on this planet.\n";
      break;
    case 6 :
      std::cout << "Uranus" << " with a relative gravity of 0.92!\n";
      std::cout << "You will weight " << weight * 0.92 << " on this planet.\n";

      break;
    case 7 :
      std::cout << "Neptune" << " with a relative gravity of 1.19!\n";
      std::cout << "You will weight " << weight * 1.19 << " on this planet.\n";

      break;
    default :
      std::cout << "Invalid number, please try again.\n";
      break;
  }
  
  
  return 0;
  
  
}
