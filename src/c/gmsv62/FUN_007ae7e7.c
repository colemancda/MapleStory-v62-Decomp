/* FUN_007ae7e7 - 0x007ae7e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007ae7e7(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00413367(param_1 + 0x2414,*(undefined4 *)(param_1 + 0x241c));
  iVar2 = (*DAT_0097b704)();
  return iVar2 - iVar1;
}


