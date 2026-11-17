/* FUN_00525b6f - 0x00525b6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00525b6f(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(int *)(param_1 + iVar1 * 4) < *param_3) {
        param_1 = param_1 + iVar1 * 4 + 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}


