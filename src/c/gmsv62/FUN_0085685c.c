/* FUN_0085685c - 0x0085685c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0085685c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2cb8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2cb8) + -4);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x2cb8);
    do {
      if (*piVar2 == param_2) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < iVar3);
  }
  if (iVar1 != iVar3) {
    FUN_00414edd(*(int *)(param_1 + 0x2cbc) + iVar1 * 0x25,0xffffffff);
  }
  return iVar1 != iVar3;
}


