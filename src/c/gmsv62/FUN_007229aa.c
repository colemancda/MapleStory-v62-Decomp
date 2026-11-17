/* FUN_007229aa - 0x007229aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_007229aa(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x580) + 0x3c);
  if (((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 0x580) + 0x48))) &&
     (local_8 = FUN_00722abd(0), local_8 != 0)) {
    param_2 = *(uint *)(*(int *)(param_1 + 0x588) + 0x38);
    iVar3 = 99;
    do {
      if (*(int *)(local_8 + 8) == 0) {
        return 0xffffffff;
      }
      if (*(uint *)(*(int *)(local_8 + 8) + -4) <= param_2) {
        return 0xffffffff;
      }
      if (param_4 == 0) {
        local_18 = 7;
        local_10 = 0xa1;
        local_c = iVar3 + 0x26;
        local_14 = iVar3;
      }
      else {
        local_18 = 10;
        local_10 = 0x2a;
        local_c = iVar3 + 0x23;
        local_14 = iVar3 + 3;
      }
      iVar2 = (*DAT_0097b57c)(&local_18,uVar1,param_3);
      if (iVar2 != 0) {
        return param_2;
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar3 < 0x103);
  }
  return 0xffffffff;
}


