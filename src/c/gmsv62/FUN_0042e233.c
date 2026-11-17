/* FUN_0042e233 - 0x0042e233 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0042e233(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
            int param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined4 local_ac [2];
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  int local_84;
  undefined4 local_7c;
  double local_74;
  double local_6c;
  double local_64;
  double local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  int local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if (param_4 - param_6 < 0) {
    local_14 = (double)(param_6 - param_4);
    fVar2 = (float10)(param_6 - param_4) * (float10)_DAT_008e8a90;
    local_ac[0] = param_2;
    local_84 = param_4;
    local_7c = param_2;
    fVar3 = (float10)(param_7 - (int)param_5) / fVar2;
    fVar4 = (float10)param_3;
    local_1c = (double)param_3;
    local_c = (double)((((float10)param_8 - fVar4 * fVar2) - (float10)param_5._4_4_) /
                      (fVar2 * fVar2));
    fVar2 = fVar2 * (float10)_DAT_008e89d0;
    local_a4 = (double)(int)param_5;
    local_9c = (double)param_5._4_4_;
    local_94 = (double)fVar3;
    local_8c = (double)param_3;
    local_74 = (double)(fVar2 * fVar3 + (float10)(int)param_5);
    local_6c = (double)((fVar2 * (float10)local_c + fVar4) * fVar2 + (float10)param_5._4_4_);
    local_64 = (double)fVar3;
    fVar2 = (float10)(double)(fVar2 * (float10)local_c);
    local_5c = (double)(fVar2 + fVar2 + fVar4);
    local_54 = __ftol();
    local_44 = (double)param_7;
    local_4c = param_2;
    local_3c = (double)extraout_ST0;
    local_24 = param_6;
    local_34 = (double)extraout_ST1;
    local_2c = (double)((float10)local_c * fVar3 + (float10)local_c * fVar3 + (float10)local_1c);
    uVar1 = FUN_0042e348(param_1,3,local_ac);
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}


