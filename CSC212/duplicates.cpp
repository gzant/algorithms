#include<iostream>
#include<string>

int main(){
    char phrase[80];
    std::cin >> phrase;
    for (int i = 0; i < phrase['\n']; i++){
        for (int j = 0; j < phrase['\n']; j++){
            if (phrase[i] == phrase[j]){
                i++;
                j++;
                if (phrase[i] == ' '){
                    std::cout << "yes";
                }
                else {
                    std::cout << "no";
                }

            }


        }
    }
    return 0;
}