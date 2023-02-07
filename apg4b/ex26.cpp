#include <bits/stdio.h>

using namespace std;

char getRandomCharUpper(void){
    const char CHARS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = getRand(0, (strlen(CHARS) - 1));
    char c = CHARS[index];
    return c
}
vector<char> getRandomCharUpperList(void){
    vector<char> list;
    
    while (sizeof(list) != 5;)
    {
        char c = getRandomCharUpper();
        if (find(list.begin(), list.end(), c)){
            list.push_back(c);
        }
        
    }
    return list;
    }

void var_int(vector<char> &vector, map<char, int> &variables)
{

    char cmd = '';
    char variable = '';
    for (char i : *vector)
    {
        // iが文字か
        if (isdigit(i))
        {
            //数字だったときの処理
            if (cmd == '+'){
                *variables[variable] += atoi(i);
            } else if(cmd == '-'){
                *variables[variable] -= atoi(i);
            } else {
                variable = i;
            }
        }
        else
        {
            //文字だった時の処理
            if (i == '+')
            {
                cmd = '+';
            }
            else if (i == '-')
            {
                cmd = '-';
            }else if (i == '='){
                continue;
            }
            else{
                cmd = i;
                variable = i;
            }
        }
    }
}
void var_vec(vector<char> &vector, map<char, int> &variables, map<char, vector<int>> &vec_variables)
{

    char cmd = '';
    char variable = *vector[0];
    vector<int> new_vector;
        
    //[]の場所を探す
    const int start_vector = distance(*vector.begin(), find(*vector.begin(), *vector.end(), '['));
    const int end_vector = distance(*vector.begin(), find(*vector.begin(), *vector.end(), '['));

    // 最初と最後の間でループする
    for (int i = start_vector; i < (end_vector - start_vector); i++){
        if (*vector[i] == '[' || *vector[i] == ']'  || *vector[i] == '='){
            continue;
        }else if (isdigit(*vector[i])){
            new_vector.push_back(atoi(*vector[i]))
        }else{
            new_vector.push_back(*variables[*vector[i]]);
        }
    }

}
void print_int(vector<char> &vector, map<char, int> &variables){
    vector<char> output;
    char c = getRandomCharUpper();
    output.insert(c);
    for(char i : *vector){
        output.insert(i);
        }
    var_int(*output, variables);
    cout << *variables[c] << endl;
    *variables.erase(c);
}
void print_vec(vector<char> &vector, map<char, int> &variables, map<char, vector<int>> &vec_variables){
    vector<char> namelist = getRandomCharUpperList();
    vector<char> output;
    int vector_num = 0;
    for (char i : *vector){
        output.push_back(i);
        if (i == ']'){
            output.front_back(namelist[vector_num]);
            vector_num++;
            var_vec(*output, variables, vec_variables);
            output.reset();
        }
    }
}