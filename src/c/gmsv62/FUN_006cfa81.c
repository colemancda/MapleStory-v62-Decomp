/* FUN_006cfa81 - 0x006cfa81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006cfa81(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((*(int *)(param_1 + 0x104) == 0) || (*(int *)(param_1 + 0x108) != iVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_00498e6c(uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return;
}


