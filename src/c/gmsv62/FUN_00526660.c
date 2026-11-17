/* FUN_00526660 - 0x00526660 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00526660(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(int *)(param_1 + 8 + iVar1 * 4) != 0) &&
       ((iVar1 != 0 || (*(int *)(param_1 + 0x20) != 0)))) {
      FUN_00526cad(iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


