/* FUN_004b89cc - 0x004b89cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b89cc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
    if (5 < iVar1) {
      iVar1 = 5;
    }
  }
  FUN_00457cda(iVar1);
  if (0 < iVar1) {
    do {
      FUN_004b8928(param_2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


