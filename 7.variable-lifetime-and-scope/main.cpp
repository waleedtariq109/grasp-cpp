#include <iostream>

int global_var{34};

void func()
{
  std::cout << "Global var: " << global_var << std::endl;
  int block_scope_var{44};
  std::cout << "block_scope_var: " << block_scope_var << std::endl;
  // std::cout << "block_var: " << block_var << std::endl; // Compiler error
}

int main()
{
  // Variable scope
  func();
  int block_var{88};
  // std::cout << "block_scope_var: " << block_scope_var << std::endl; -> Compiler error
  std::cout << "Global var: " << global_var << std::endl;
  std::cout << "block_var: " << block_var << std::endl;
  {
    int main_nested_scope{76};
    std::cout << "main_nested_scope: " << main_nested_scope << std::endl;
  }

  // std::cout << "main_nested_scope: " << main_nested_scope << std::endl; // Compiler error
  return 0;
}
