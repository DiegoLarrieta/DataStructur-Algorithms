#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
          {'I' , 1},
          {'V',5},
          {'X',10},
          {'L',50},
          {'C',100},
          {'D',500},
          {'M',1000}
        };

        int sum = 0; // Variable que acumulara la suma 
        int n = s.size(); // Obtenemos el tamanio del romano

        for(int i = 0 ; i <n; ++i){
          //checamos si el current numeral es menor que el siguiente
          if(i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]){
            //si lo es, substraemos su valor de sum o el total 
            sum -= romanMap[s[i]];
          }
          else{
            sum += romanMap[s[i]];
          }
        }
        return sum;
    }
};