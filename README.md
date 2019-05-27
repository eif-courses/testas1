# testas1

Atsiskaityti privalote iki paskutinės praktinės paskaitos.

Užduoties sąlyga. Praplėsti 1 užduoties funkcionalumą (atnaujinimas v1.1) ir papildyti šiomis funkcijomis:

Pasiekimų sistema (angl. Achievments):
atvaizduoti pasiekimų lentelę mažiausiai 15-20 skirtingų pasiekimų;
pridėti filtrų pagal, kuriuos atvaizduojate pasiekimus;
sukurti keletą skirtingų žaidime esančių lygių: easy, hard, medium, impossible, veteran ir t.t. pagal, kuriuos suteikiami skirtingi pasiekimai;
žaidimo metu žaidėjas gauną skirtingus pasiekimus priklausomai nuo atliktos užduoties, nugalėto priešo ar sėkmingai įvykdyto istorijos etapo;
Progreso sistema:
gauti patirties taškų (angl. Experience points) už nugalėtą priešininką, praeitą istorijos etapą, pereitą į naują zoną ir pan.
pasirinkti progreso patirties taškų sistemą: tiesinę arba horizontaliąją ar kt.
taip pat lygių sistemą: galimybė žaidėjui įgyti aukštesnį lygį ir gauti papildomą atlygį arba atidaromas naujas turinys ir pan.
Žaidėjo HUD:
atvaizduoti žaidėjo informaciją: pasiekimo taškus, gyvybių skaičių, virtualią valiutą ir papildomą informaciją pagal pasirinkta tematika;
šią informaciją atvaizduoti žaidimo metu.


```c++
/* 
 * File:   main.cpp
 * Author: Marius
 *
 * Created on January 27, 2019, 12:02 AM
 */

#include <cstdlib>
#include <iostream>
#define MAX_SIZE 10 // Max size of Stack container

using namespace std;

int container[MAX_SIZE]; // Container to store Stack ADT elements

class Stack{
    public: 
        int top;
        
        Stack(){ top = -1;}
        
        bool isFull(){
            if(MAX_SIZE - top == 1){
                return true;
            }else{
                return false;
            }
        }
        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }
        void push(int x){
            if(!isFull()){
                top++;
                container[top] = x;
            }else{
               cout<< "\nStack is full\n";
            }
        }
        int pop(){
            int x;
            if(!isEmpty()){
                x = container[top];
                top--;
                return x;
            }else{
                return -1;
            }
        }
        void print(){
            cout << "------------------------------------"<< endl;
            for(int i=0; i <= top; i++){
                if(top == i){
                    cout << container[i] << ".";
                }else{
                    cout << container[i] << ",";
                } 
            }
            cout << "\n------------------------------------"<< endl;
        }
        
};

int main(int argc, char** argv) {
    Stack stack;
   
    for(int i=0; i < MAX_SIZE; i++){
        stack.push(i);
    }
    
    // Every step displaying Stack data structure container 
    stack.print();
    stack.pop();
    stack.print();
    stack.push(99);
    stack.print();

}
```
