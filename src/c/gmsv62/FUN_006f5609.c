/* FUN_006f5609 - 0x006f5609 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006f5609(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  param_2 = param_2 - (int)param_1;
  while( true ) {
    uVar1 = *(uint *)(param_2 + (int)param_1);
    if (*param_1 < uVar1) {
      return 0xffffffff;
    }
    if (*param_1 != uVar1) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}


