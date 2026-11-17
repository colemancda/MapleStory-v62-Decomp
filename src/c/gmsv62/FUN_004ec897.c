/* FUN_004ec897 - 0x004ec897 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004ec897(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  bVar3 = false;
  if ((((int)param_2 < 0) || (iVar1 = *(int *)(param_1 + 0x326c), iVar1 == 0)) ||
     (*(uint *)(iVar1 + -4) <= param_2)) {
    param_2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    bVar3 = true;
    puVar4 = &param_2;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + param_2 * 4);
  }
  uVar2 = *puVar4;
  if (bVar3) {
    FUN_00414ebb();
  }
  return uVar2;
}


