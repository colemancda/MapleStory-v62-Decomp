/* FUN_00867190 - 0x00867190 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00867190(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x40) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x40) + -1, *(int *)(param_1 + 0x40) = iVar1, iVar1 == 0)) &&
     (0 < *(int *)(param_1 + 0x3c))) {
    NPKCloseDriver(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


