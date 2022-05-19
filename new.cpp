#include <string>
#include <iostream>

void asterisk(std::string word, std::string &text, int i) {
  
  for (int k = 0; k < word.size(); ++k) {
  
    text[i+k] = '*';
      
  }
  
}

void bleep(std::string word, std::string &text) {
    
  for (int i = 0; i < text.size(); ++i) {
        
    int match = 0;
        
    for (int j = 0; i < word.size(); i++) {
    
      if (text[i+j] == word[j]) {
        
        ++match;
          
      }
    
    }
        
    if (match == word.size()) {
            
      asterisk(word, text, i);
        
    }
      
  }
    
}
int main() {
    std::string word = "broccoli";

    std::string sent = "I hate broccoli";

    bleep(word, sent);

    for (int i = 0; i < sent.size(); i++)
    {
        std::cout << sent[i];
    }
    std::cout << "\n";

}