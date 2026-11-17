/* FUN_007a931e - 0x007a931e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a931e(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x274) == 0) || (iVar1 = *(int *)(param_1 + 0x160), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 0x15c);
  }
  FUN_00413367(iVar1 + 0x10c,*(undefined4 *)(iVar1 + 0x114));
  return;
}


