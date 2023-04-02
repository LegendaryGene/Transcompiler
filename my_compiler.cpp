//inputascii is left in basic functions
#include <bits/stdc++.h>
using namespace std;

void push_n_to_stack(int n, string &prev_loc, int &cond, int &top, int &max_cond, int &mem_1, int &mem_2){

    // need to add negative integers as well                        ####  IMPORTANT
    if(n == 0 ){
        cout << prev_loc << ", " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        mem_1++;
        mem_2++;
        top++;
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 1){
        cout << prev_loc << ", " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        mem_1++;
        mem_2++;
        top++;
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 2){
        return;
    }
    if(n == 3){
        return;
    }
    vector<int> v;
    while(n){
        v.push_back(n%2);
        n/=2;
    }
    cout << prev_loc << ", " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " <<  cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", oat_stairs_1" << endl;
    cout << "oat_stairs_1, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", hall_2" << endl;
    prev_loc = "hall_2";
    if(v[0] == 1 && v[1] == 1){
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", hall_2" << endl;
        cout << "hall_2, " << cond << ", kd_3" << endl;
        cout << "kd_3, " << cond << ", kd_2" << endl;  
        prev_loc = "kd_2";
    }else if(v[0] == 1 && v[1] == 0){
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", mt_3_1" << endl;
        cout << "mt_3_1, " << cond << ", kd_3" << endl;
        prev_loc = "kd_3";
    }else if(v[0] == 0 && v[1] == 1){
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", mt_3_2" << endl;
        cout << "mt_3_2, " << cond << ", kd_3" << endl;
        cout << "kd_3, " << cond << ", kd_2" << endl;  
        prev_loc = "kd_2";
    }
    cout << prev_loc << ", " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    prev_loc = "mt_1_3";

    // Adding the results to m_4;
    // cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    // cout << "mt_3_2, " << cond << ", rm_3" << endl;
    // cout << "rm_3, " << cond << ", mt_2_3" << endl;
    // cout << "mt_2_3, " << cond << ", hall_2" << endl;
    // cout << "hall_2, " << cond << ", kd_3" << endl;
    // cout << "kd_3, " << cond << ", mt_2_3" << endl;
    // cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;

    // Multiply and put result to m_1
    // cout << "mt_1_3, " << cond << ", hall_3" << endl;
    // cout << "hall_3, " << cond << ", mt_1_3" << endl;
    // cout << "mt_1_3, " << cond++ << ", oat_stage[1]" << endl;

    int prev_i = 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i]){
            if(i == 0){
                continue;
            }else if(i == 1){
                continue;
            }else{
                int temp = i - prev_i;
                while(temp--){
                    cout << prev_loc << ", " << cond << ", hall_3" << endl;
                    cout << "hall_3, " << cond++ << ", oat_stage[1]" << endl;
                    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
                    prev_loc = "mt_1_3";
                }
                cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
                cout << "mt_3_2, " << cond << ", rm_3" << endl;
                cout << "rm_3, " << cond << ", mt_2_3" << endl;
                cout << "mt_2_3, " << cond << ", hall_2" << endl;
                cout << "hall_2, " << cond << ", kd_3" << endl;
                cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
                cout << "oat_stage, " << cond << ", mt_2_3" << endl;
                prev_loc = "mt_2_3"; 

                prev_i = i;
            }
        }
    }
    cout << prev_loc << ", " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << cond << ", kd_3" << endl;
    prev_loc = "kd_3";
    cout << prev_loc << ", " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(cond, max_cond);
    top++;
    mem_1++;
    mem_2++;
    return;
}

void debug(int &top, int &cond, int &mem_1, int &mem_2, string &prev_loc, int &max_cond){
    int tmp = mem_2;
    tmp++;

    while(tmp>0){
        cout << prev_loc << ", " << cond <<  ", kd_2" << endl;
        cout << "kd_2, " << cond << ", oat_stage[1]" << endl;
        cond++;
        tmp--;
    }

    while(tmp < mem_2){
        cout << prev_loc << ", " << cond << ", iit_gate_out_2" << endl;
        cout << "iit_gate_out_2, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", oat_stage[1]" << endl;
        cond++;
        prev_loc = "oat_stage";
        tmp++;
    }

    cout << prev_loc << ", " << cond << ", iit_gate_out_2" << endl;
    cout << "iit_gate_out_2, " << cond << ", oat_stage[1]" << endl;
    cond++;
    prev_loc = "oat_stage";
    max_cond = max(max_cond, cond);
    return;
}

void swap(int &top, int &cond, int &mem_1, int &mem_2, string &prev_loc, int &max_cond){
    cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    cond++;
    max_cond = max(max_cond, cond);
    return;
}

void rev_swap(int &top, int &cond, int &mem_1, int &mem_2, string &prev_loc, int &max_cond){
    cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[1]" << endl;
    cond++;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", oat_stage[1]" << endl;
    cond++;
    prev_loc = "oat_stage";
    max_cond = max(max_cond, cond);
    return;
}

void pop(int &top, int &cond, int &mem_1, int &mem_2, string &prev_loc, int &max_cond)
{
    if(top == -1)
        return;
    else if(top == 0){
        cout <<  prev_loc << ", " << cond << ", hall_13_1" << endl;
        cout << "hall_13_1, " << cond << ", oat_stage[1]" << endl;
        prev_loc = "oat_stage";
        top--;
        cond++;
        max_cond = max(max_cond, cond);
    }
    else if(top == 1){
        cout <<  prev_loc << ", " << cond << ", hall_13_2" << endl;
        cout << "hall_13_2, " << cond << ", oat_stage[1]" << endl;
        prev_loc = "oat_stage";
        top--;
        cond++;
        max_cond = max(max_cond, cond);
    }
    else{
        cout << prev_loc << ", " << cond << ", hall_13_2" << endl;
        cout << "hall_13_2, " << cond << ", kd_1" << endl;
        cout << "kd_1, " << cond << ", kd_2" << endl;
        cout << "kd_2, " << cond << ", kd_3" << endl;
        cout << "kd_3, " << cond << ", oat_stage[1]" << endl;
        prev_loc = "oat_stage";
        mem_1--;
        mem_2--;
        top--;
        cond++;
        max_cond = max(max_cond, cond);
    }
    return;
}

int main(int argc, char* argv[]){
    freopen(argv[1], "r", stdin);
    freopen("output.iitktvlr", "w", stdout);

    vector<string> stk_code;
    string c;
    while (cin >> c) {
        stk_code.push_back(c);
    }

    int cond = 0, mem_1 = 0, mem_2 = 1, top=-1;
    int max_cond = 0;
    string prev_loc = "start";
    stack<int> cond_vals;

    for (string code_word : stk_code) {
        if (code_word[0] == '`') {
            continue;
        }

        else if (isdigit(code_word[0]) ) {    // Has a corner case for negative numbers

            // can be optimized by checking quantity of operators & numbers being used
            int num;
            sscanf(code_word.c_str(), "%d", &num);
            if(top == -1){
                cout << prev_loc << "," << cond << ", iit_gate_in_1" << endl;
                cout << "iit_gate_in_1, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                top++;
                max_cond = max(max_cond, cond);
            }
            else if(top == 0){
                cout << prev_loc << ", " << cond << ", iit_gate_in_2" << endl;
                cout << "iit_gate_in_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                top++;
                max_cond = max(max_cond, cond);
            }
            else{
                cout << prev_loc << " ," << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", rm_3" << endl;
                cout << "rm_3" << ", " << cond << ", iit_gate_in_2" << endl;
                cout << "iit_gate_in_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                mem_1++;
                mem_2++;
                cond++;
                top++;
                max_cond = max(max_cond, cond);
            }
        }
        
        else if(code_word == "add"){
            cout << prev_loc << " ," << cond << ", hall_2" << endl;
            cout << "hall_2, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
            prev_loc = "hall_13_3";
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "sub"){
            cout << prev_loc << " ," << cond << ", hall_5" << endl;
            cout << "hall_5, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
            prev_loc = "hall_13_3";
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "mul"){
            cout << prev_loc << ", " << cond << ", hall_3" << endl;
            cout << "hall_3, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
            prev_loc = "hall_13_3";
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "div"){
            cout << prev_loc << ", " << cond << ", hall_12" << endl;
            cout << "hall_12, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
            prev_loc = "hall_13_3";
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }
        
        else if(code_word == "pop"){
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "swap"){
            swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "input"){
            if(top == -1){
                cout <<  prev_loc << ", " << cond << ", iit_gate_in_1" << endl;
                cout << "iit_gate_in_1, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                top++;
                cond++;
                max_cond = max(max_cond, cond);
            }
            else if(top == 0){
                cout<<  prev_loc << ", " << cond << ", iit_gate_in_2" << endl;
                cout << "iit_gate_in_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                top++;
                cond++;
                max_cond = max(max_cond, cond);
            }
            else{
                cout << prev_loc << ", " << cond << ", iit_gate_2" << endl;
                cout << "iit_gate_2, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", rm_3" << endl;
                cout << "rm_3, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                mem_1++;
                mem_2++;
                top++;
                cond++;
                max_cond = max(max_cond, cond);
            }
        }

        else if(code_word == "output"){
            if(top == -1)
                continue;
            else if(top == 0)
            {
                cout << prev_loc << ", " << cond << ", iit_gate_out_1" << endl;
                prev_loc = "iit_gate_out_1";
                pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
            }
            else
            {
                cout << prev_loc << ", " << cond << ", iit_gate_out_2" << endl;
                prev_loc = "iit_gate_out_2";
                pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
            }
        }

        else if(code_word == "outputascii"){
            if(top == 0){
                cout << prev_loc << ", " << cond << ", nankari_gate_out_1" << endl;
                prev_loc = "nankari_gate_out_1";
                pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
            }
            else{
                cout << prev_loc << ", " << cond << ", nankari_gate_out_2" << endl;
                prev_loc = "nankari_gate_out_2";
                pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
            }
        }

        else if(code_word == "dup"){
            if(top == 0){
                cout << prev_loc << ", " << cond << ", kd_3" << endl;
                cout <<  "kd_3, " << cond << ", mt_3_1" << endl;
                cout << "mt_3_1, " << cond << ", rm_3" << endl;
                cout << "rm_3, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                top++; 
                max_cond = max(max_cond, cond);
            }
            else{
                cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
                cout << "mt_3_2, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", rm_3" << endl;
                cout << "rm_3, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                mem_1++;
                mem_2++;
                cond++;
                top++; 
                max_cond = max(max_cond, cond);
            }
        }

        else if(code_word == "if"){
            cout << prev_loc << ", " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", lecture_hall_eq" << endl;
            cout << "lecture_hall_eq_f, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            cond_vals.push(cond);
            cond++;
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "fi"){
            int prev_cond_val = cond_vals.top();
            cond_vals.pop();
            int cond_diff = prev_cond_val - cond;
            cout << prev_loc << ", " << cond << ", oat_stage[" << cond_diff << "]" << endl;
            cond = prev_cond_val;
            cond_diff = max_cond - cond + 1;
            cout << "lecture_hall_eq_t, " << cond << ", oat_stage[" << cond_diff << "]" << endl;
            cond = max_cond + 1;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            cond++;
            max_cond = max(max_cond,cond);
        }

        else if(code_word == "debug"){
            if(top == 0){
                cout << prev_loc << ", " << cond << ", iit_gate_out_1" << endl;
                cout << "iit_gate_out_1, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
            }else debug(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "cycle"){
            int temp = mem_1;
            while(temp != 0){
                rev_swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
                cout << prev_loc << ", " << cond << ", kd_1" << endl;
                cout << "kd_1, " << cond << ", kd_2" << endl;
                cout << "kd_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                temp--;
            }
            if(temp == 0){
                rev_swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
            }
            while(temp != mem_1){
                cout << prev_loc << ", " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                temp++;
            }
        }

        else if(code_word == "rcycle"){
            int temp = mem_1;
            while(temp != 0){
                cout << prev_loc << ", " << cond << ", kd_1" << endl;
                cout << "kd_1, " << cond << ", kd_2" << endl;
                cout << "kd_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                temp--;
            }
            while(temp != mem_1){
                rev_swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
                cout << prev_loc << ", " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                temp++;
            }
            rev_swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
        }

        else if(code_word == "rev"){
            int tmp1 = mem_1;
            int tmp_2 = mem_2;

            while(tmp1>0){
                cout << prev_loc << ", " << cond << ", kd_1" << endl;
                cout << "kd_1, " << cond << ", oat_stage[1]" << endl;
                prev_loc = "oat_stage";
                cond++;
                tmp1--;
            }
            max_cond = max(cond, max_cond);
            for(int i=0; ((mem_2+1)/2)>i; i++)
            {
                rev_swap(top, cond, mem_1, mem_2, prev_loc, max_cond);
                cout << prev_loc << ", " << cond << ", kd_2" << endl;
                cout << "kd_2, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", oat_stage[1]" << endl;
                cond++;
            }

            for(int i=0 ; ((mem_2+1)/2)>i; i++)
            {
                cout << "oat_stage, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", rm_2" << endl;
                cout << "rm_2, " << cond << ", oat_stage[1]" << endl;
                cond++;
            }
            if(mem_2%2==0){
                cout << "oat_stage, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond << ", oat_stage[1]" << endl;
                cond++;
            }
            prev_loc = "oat_stage";
            max_cond= max(max_cond,cond);
        }

        // else if(code_word == "inputascii"){
        //     cout << prev_loc << ", " << cond << ", rm_1" << endl;
        //     cout << "rm_1, " << cond << ", rm_2" << endl;
        //     cout << "rm_2, " << cond << "rm_3" << endl;
        //     cout << "rm_3, " << cond << ", airstrip_land_2" << endl;
        //     cout << "airstrip_land_2, " << cond++ << ", oat_stage[1]" << endl;
        //     cout << "oat_stage, " << cond << ", events_2" << endl;
        //     cout << "events_2_f, " << cond << ", rm_1" << endl;
        //     cout << "rm_2, " << cond << "rm_3" << endl;
        //     cout << "rm_3, " << cond-- << ", oat_stage[-1]" << endl;
        //     cout << "events_t, " << cond << ", oat_stage[2]" << endl;
        //     cond += 2;
        //     prev_loc = "oat_stage";
        // }

        else if(code_word == "mod"){
            int temp_cond = cond;
            cout << prev_loc << ", " << cond << ", lecture_hall_gt" << endl;
            cout << "lecture_hall_gt_t, " << cond << ", hall_12" << endl;
            cout << "hall_12, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", hall_3" << endl;
            cout << "hall_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", hall_5" << endl;
            cout << "hall_5, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            pop(top, cond, mem_1, mem_2, prev_loc, max_cond);
            cout << "lecture_hall_gt_f, " << temp_cond << ", oat_stage[3]" << endl;
        }

        else if(code_word == "not"){
            cout << prev_loc << ", " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond <<  ", rm_1" << endl;
            cout << "rm_1, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", oat_stairs_2" << endl;
            cout << "oat_stairs_2, " << cond << ", oat_stairs_1" << endl;
            cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
            cout << "oat_stairs_1, " << cond << ", hall_3" << endl;
            cout << "hall_3, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", lecture_hall_lt" << endl;
            cout << "lecture_hall_lt_t, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", hall_3" << endl;
            cout << "lecture_hall_lt_f, " << cond << ", mt_3_1" << endl;
            cout << "mt_3_1, " << cond << ", southern_labs_1" << endl;
            cout << "southern_labs_1, " << cond << ", hall_2" << endl;
            cout << "hall_2, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", hall_5" << endl;
            cout << "hall_5, " << cond << ", mt_2_3" << endl;
            cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
        }
        
        else if (code_word == "quit"){
            break;
        }
    }
    cout << prev_loc << ", " << cond << ", finish" << endl;
    return 0;
}   