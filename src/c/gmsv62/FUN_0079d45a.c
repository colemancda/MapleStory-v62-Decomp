/* FUN_0079d45a - 0x0079d45a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0079d45a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x1744) + 4 + iVar1) == 0) {
      return;
    }
    FUN_00617b68(param_2);
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x18);
  return;
}


