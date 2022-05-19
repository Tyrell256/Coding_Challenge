#include <iostream>
#include <string>

void star(std::string word, std::string &text, int i){
    for (int k = 0; k < word.size(); k++)
    {
        text[i+k] = '*';
    }
    
}

void censor(std::string word, std::string &text){
    
for (int i = 0; i < text.size(); i++)
    {
    int match = 0;
    
    for (int j = 0; i < text.size(); i++)
        {
            if (text[i+j] == word[j])

            ++match;
        }
        
    }
    if (match == word.size()){
        star(word, text, i);
    }

}



int main() {
    std::string word = "broccoli";

    std::string sent = "I hate broccoli";

    censor(word, sent);

    for (int i = 0; i < sent.size(); i++)
    {
        std::cout << sent[i];
    }
    std::cout << "\n";

}