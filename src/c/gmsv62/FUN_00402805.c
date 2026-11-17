/* FUN_00402805 - 0x00402805 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00402805(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0040291f(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_0040394c(0);
  *(undefined4 *)(iVar1 + 4) = 1;
  *(int *)(param_1 + 4) = iVar1;
  return;
}


