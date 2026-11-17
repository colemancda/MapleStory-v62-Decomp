/* FUN_00652350 - 0x00652350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00652350(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 100) == 0) ||
     (uVar1 = *(uint *)(*(int *)(param_1 + 100) + -4), uVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_004133f0();
    uVar2 = FUN_00652305(*(undefined4 *)(*(int *)(param_1 + 100) + (uVar3 % uVar1) * 4));
  }
  return uVar2;
}


