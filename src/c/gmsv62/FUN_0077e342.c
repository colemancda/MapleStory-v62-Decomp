/* FUN_0077e342 - 0x0077e342 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0077e342(int *param_1,int param_2)

{
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piStack_18;
  undefined4 uStack_14;
  
  param_1[0x162] = param_2;
  param_1[0x15c] = param_2;
  if (param_2 < 0) goto LAB_0077e44b;
  if (param_2 < 2) {
LAB_0077e3ee:
    piStack_18 = param_1;
    if (param_1[0x202] != 0) {
      uStack_14 = 0x77e3fe;
      (**(code **)(*param_1 + 0x38))();
      piStack_18 = extraout_ECX_01;
    }
    if (param_1[0x204] != 0) {
      uStack_14 = 0x77e40e;
      (**(code **)(*param_1 + 0x3c))();
      piStack_18 = extraout_ECX_02;
    }
    uStack_14 = 0;
    FUN_00679e4e(&piStack_18,0x817);
    FUN_008163ca();
    uStack_14 = 0x77e43c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1[0x209] + 0x5c),
               (IBinding *)0x0);
LAB_0077e43c:
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1[0x20a] + 0x58);
  }
  else {
    if (param_2 == 2) {
      piStack_18 = param_1;
      if (param_1[0x204] != 0) {
        uStack_14 = 0x77e3cd;
        (**(code **)(*param_1 + 0x3c))();
        piStack_18 = extraout_ECX_00;
      }
      uStack_14 = 0;
      FUN_00679e4e(&piStack_18,0x818);
      FUN_008163ca();
      goto LAB_0077e43c;
    }
    if (param_2 != 3) {
      if (param_2 != 4) goto LAB_0077e44b;
      goto LAB_0077e3ee;
    }
    piStack_18 = param_1;
    if (param_1[0x202] != 0) {
      uStack_14 = 0x77e38f;
      (**(code **)(*param_1 + 0x38))();
      piStack_18 = extraout_ECX;
    }
    uStack_14 = 0;
    FUN_00679e4e(&piStack_18,0x818);
    FUN_008163ca();
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1[0x209] + 0x5c);
  }
  uStack_14 = 0x77e44b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
LAB_0077e44b:
  FUN_0077e45e();
  param_1[0x206] = 0;
  return;
}


