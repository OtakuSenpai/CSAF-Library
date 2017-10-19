#include <iostream>
 
#include "list.hpp"
 
int main() {
  try {	
    List<int> l;
    int temp;
    int a,size = 3;
    std::cout<<"Size will be 3...\n"; 
  
    std::cout<<"Enter the elements now...\n";
    for(int i = 0;i<size;i++) {
	  std::cout<<"I("<<i<<"): ";
	  std::cin>>a; std::cout<<std::endl;
	  l.pushBack(a);
    }
  
    std::cout<<"\nDisplaying: \n";
  
    for(int i = 0; i<size; i++) {
	  std::cout<<l[i]<<"\n";
    }
    
    std::cout<<"Switching elements at pos 0 with 1: \n";
    std::cout<<"l[0]: "<<l[0]<<"\n";
    std::cout<<"l[1]: "<<l[1]<<"\n";
    temp = l[0]; l[0] = l[1];
    l[1] = temp;
    std::cout<<"l[0]: "<<l[0]<<"\n";
    std::cout<<"l[1]: "<<l[1]<<"\n";
    
    std::cout<<"Size: "<<l.size()<<"\n";
    
    std::cout<<"Deleting list...\n";
    l.empty();
    std::cout<<"Size: "<<l.size()<<"\n";
    
    List<int> ll(5);
    std::cout<<"\nDisplaying new list: \n";
  
    for(int i = 0; i<ll.size(); i++) {
	  std::cout<<ll[i]<<"\n";
    }
    
    std::cout<<"Size: "<<ll.size()<<"\n";
  }
  catch(const char *e) {
	std::cout<<"Caught exception: \n"<<e<<std::endl;
  }  
  return 0;
}
