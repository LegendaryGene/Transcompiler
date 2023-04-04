#include "bitwise.hpp"
using namespace std;

void Bit_operators::Not(string &prev_loc, int &cond, int &max_cond){
    cout << prev_loc << ", " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ",southern_labs_2" << endl;
    cout << "southern_labs_2, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", southern_labs_1" << endl;
    cout << "southern_labs_1, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(max_cond,cond);
}

void Bit_operators::And(string &prev_loc, int &cond, int &max_cond){
    // swap if 2nd bigger than first
    cout << prev_loc << ", " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", lecture_hall_gt" << endl;

    cout << "lecture_hall_gt_t, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "lecture_hall_gt_f, " << cond-2 << ", oat_stage[2]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    // swap ends

    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", pronite_2" << endl;
    cout << "pronite_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 1st num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 2nd num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    // now pointer 1 is where 2nd element from top was(which is now zero), pointer 2 at the generated
    // 2, and pointer 3 just after the 2nd binary. 

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[0]" << endl;

    cout << "events_1_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

    // now the state is that both numbers have binary done, enclosed in eos, pointer 1 is at
    // eos before binary of the 1st number, and pointer 2 is at eos before that of 2nd, pt3 after pt1

    cout << "oat_stage, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    // cout << "oat_stage, " << cond << ", kd_2" << endl;
    // cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    // cout << "oat_stage, " << cond << ", kd_3" << endl;
    // cout << "kd_3, " << cond << ", mt_1_3" << endl;
    // cout << "mt_1_3, " << cond << ", iit_gate_out_1" << endl;
    // cout << "iit_gate_out_1, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_2" << endl;
    cout << "hall_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[-5]" << endl;
    cout << "events_1_t, " << cond-5 << ", oat_stage[6]" << endl;
    cond += 1;

    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_13_3" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
    max_cond= max(cond, max_cond);
    prev_loc = "oat_stage";
}

void Bit_operators::Or(string &prev_loc, int &cond, int &max_cond){
    cout << prev_loc << ", " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ",mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_2" << endl;
    cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    
    // And with Slight Changes
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "lecture_hall_gt_f, " << cond-2 << ", oat_stage[2]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    // swap ends

    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", pronite_2" << endl;
    cout << "pronite_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 1st num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 2nd num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    // now pointer 1 is where 2nd element from top was(which is now zero), pointer 2 at the generated
    // 2, and pointer 3 just after the 2nd binary. 

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[0]" << endl;

    cout << "events_1_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

    // now the state is that both numbers have binary done, enclosed in eos, pointer 1 is at
    // eos before binary of the 1st number, and pointer 2 is at eos before that of 2nd, pt3 after pt1

    cout << "oat_stage, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    // cout << "oat_stage, " << cond << ", kd_2" << endl;
    // cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    // cout << "oat_stage, " << cond << ", kd_3" << endl;
    // cout << "kd_3, " << cond << ", mt_1_3" << endl;
    // cout << "mt_1_3, " << cond << ", iit_gate_out_1" << endl;
    // cout << "iit_gate_out_1, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_2" << endl;
    cout << "hall_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[-5]" << endl;
    cout << "events_1_t, " << cond-5 << ", oat_stage[6]" << endl;
    cond += 1;

    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_13_3" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
    max_cond= max(cond, max_cond);
    prev_loc = "oat_stage";

    cout << prev_loc << ", " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(cond, max_cond);
}

void Bit_operators::Nand(string &prev_loc, int &cond, int &max_cond){
    this->And(prev_loc, cond, max_cond);
    this->Not(prev_loc, cond, max_cond);
}

void Bit_operators::Xor(string &prev_loc, int &cond, int &max_cond){
    cout << prev_loc << ", " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ",mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_2" << endl;
    cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";

    // And with slight Changes
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "lecture_hall_gt_f, " << cond-2 << ", oat_stage[2]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    // swap ends

    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", pronite_2" << endl;
    cout << "pronite_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 1st num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    // binary of 2nd num
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
    cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
    cout << "lecture_hall_gt_f, " << cond << ", lecture_hall_eq" << endl;
    cout << "lecture_hall_eq_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "lecture_hall_eq_f, " << cond-1 << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond-1 << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_12" << endl;
    cout << "hall_12, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stage[-6]" << endl;
    cond -= 6;
    cout << "lecture_hall_gt_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[7]" << endl;
    cond += 7;

    // now pointer 1 is where 2nd element from top was(which is now zero), pointer 2 at the generated
    // 2, and pointer 3 just after the 2nd binary. 

    cout << "oat_stage, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[0]" << endl;

    cout << "events_1_t, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;

    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;

    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

    // now the state is that both numbers have binary done, enclosed in eos, pointer 1 is at
    // eos before binary of the 1st number, and pointer 2 is at eos before that of 2nd, pt3 after pt1

    cout << "oat_stage, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", oat_stage[0]" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    // cout << "oat_stage, " << cond << ", kd_2" << endl;
    // cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    // cout << "oat_stage, " << cond << ", kd_3" << endl;
    // cout << "kd_3, " << cond << ", mt_1_3" << endl;
    // cout << "mt_1_3, " << cond << ", iit_gate_out_1" << endl;
    // cout << "iit_gate_out_1, " << cond++ << ", oat_stage[1]" << endl;

// #######################################################################

    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", hall_2" << endl;
    cout << "hall_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[-5]" << endl;
    cout << "events_1_t, " << cond-5 << ", oat_stage[6]" << endl;
    cond += 1;

    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", events_2" << endl;
    cout << "events_2_f, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_13_3" << endl;
    cout << "events_2_t, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
    max_cond= max(cond, max_cond);
    prev_loc = "oat_stage";
    // And ends

    cout << prev_loc << ", " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", hall_3" << endl;
    cout << "hall_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;


    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_5" << endl;
    cout << "hall_5, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", rm_2" << endl;
    cout << "rm_2, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(cond, max_cond);
}
