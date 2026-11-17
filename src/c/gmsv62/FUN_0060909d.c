/* FUN_0060909d - 0x0060909d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0060909d(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x84) = param_2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x84) = 2;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if ((param_2 == 2) || (param_2 == 0)) {
    FUN_004ab3a1(&DAT_00978474);
  }
  FUN_006090f8();
  FUN_008161f1(0);
  return;
}


