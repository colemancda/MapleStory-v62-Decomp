/* FUN_006cf108 - 0x006cf108 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006cf108(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((*(int *)(param_1 + 0xec) == 0) || (*(int *)(param_1 + 0xf0) != iVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_00498e6c(uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


