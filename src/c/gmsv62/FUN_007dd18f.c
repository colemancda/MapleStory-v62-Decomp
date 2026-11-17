/* FUN_007dd18f - 0x007dd18f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007dd18f(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 200) {
    FUN_007dd3ba();
    if (param_2 == 0x3f3) {
      iVar1 = *(int *)(param_1[0x38] + 0x48);
    }
    else {
      if (param_2 != 0x3f4) goto LAB_007dd22f;
      iVar1 = *(int *)(param_1[0x3a] + 0x48);
    }
    FUN_00499fb8(iVar1 == 0);
  }
  else if (param_3 == 600) {
    if (param_2 == 0x3ed) {
      param_1[0x4c] = *(int *)(param_1[0x2a] + 0x60);
    }
    else if (param_2 == 0x3f2) {
      param_1[0x51] = *(int *)(param_1[0x32] + 0x60);
    }
  }
  else if (param_3 == 700) {
    FUN_007dd3ba();
  }
LAB_007dd22f:
  FUN_0047c31f(param_1 + 0x47,0);
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


