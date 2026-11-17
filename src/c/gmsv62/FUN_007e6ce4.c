/* FUN_007e6ce4 - 0x007e6ce4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007e6ce4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 < 0) {
    return 0;
  }
  if (4 < iVar1) {
    if (iVar1 < 7) {
      return 0x1a3;
    }
    if (8 < iVar1) {
      return 0;
    }
  }
  return (-(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xfffffef9) + 0x211;
}


