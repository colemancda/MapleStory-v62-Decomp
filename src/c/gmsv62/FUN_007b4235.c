/* FUN_007b4235 - 0x007b4235 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007b4235(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x1744) + 4 + iVar1) == 0) {
      return;
    }
    FUN_00617d5e();
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x18);
  return;
}


