/* FUN_005a7667 - 0x005a7667 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005a7667(int param_1)

{
  int iVar1;
  
  FUN_0047ccfd(0,0x5dc);
  iVar1 = (*DAT_0097b704)();
  *(int *)(param_1 + 0x1c) = iVar1 + 0x9c4;
  return;
}


