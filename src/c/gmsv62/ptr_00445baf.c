/* ptr_00445baf - 0x00445baf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall ptr_00445baf(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00445b70();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_3 * 0x14 + 4);
    *param_1 = (uint)(piVar2 + 1);
    *piVar2 = param_3;
    uVar1 = *param_1;
    uVar3 = param_3 * 0x14 + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 0x14) {
      FUN_00446b89(uVar1);
    }
    uVar1 = *param_1;
  }
  return uVar1;
}


