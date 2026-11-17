/* FUN_006707b6 - 0x006707b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006707b6(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0042459a();
  iVar3 = (*DAT_0097b704)();
  *(int *)(param_1 + 8) = iVar3 - iVar2;
  uVar1 = FUN_00424561();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}


