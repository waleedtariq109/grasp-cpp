#include <iostream>

int main()
{
  // Constants

  const int AGE{23};
  const float PI{3.14f};

  int val{88};

  std::cout << "Age: " << AGE << std::endl;
  std::cout << "Pi value: " << PI << std::endl;
  std::cout << "val: " << val << std::endl;

  // You can't change the value of constant but you can do some math computation

  const int CHANP_KA_RATE{300}; // Chanp ki plate ka rate
  int total_plates;

  std::cout << "Ha javed kitni plates hai" << std::endl;
  std::cin >> total_plates;

  int total_bill{total_plates * CHANP_KA_RATE};

  std::cout << "Bhai sai " << total_bill << " lai lai" << std::endl;

  std::cout << "Ha Abid tu bata kitni plates hai" << std::endl;
  std::cin >> total_plates;

  total_bill = total_plates * CHANP_KA_RATE;

  std::cout << "Tu Bhai sai " << total_bill << " lai lai" << std::endl;

  return 0;
}
