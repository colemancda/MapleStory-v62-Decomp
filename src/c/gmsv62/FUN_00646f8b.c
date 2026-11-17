/* FUN_00646f8b - 0x00646f8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00646f8b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00646ff3();
  if ((*(int *)(param_1 + 0xbc) == 0) || (*(uint *)(*(int *)(param_1 + 0xbc) + -4) < 6)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *(int *)(*piVar1 + -4);
    }
    iVar2 = iVar2 + -4;
  }
  FUN_004ad003(iVar2);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 6)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    iVar3 = iVar3 + -4;
  }
  FUN_004ad003(iVar3);
  return;
}


