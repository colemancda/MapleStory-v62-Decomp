/* FUN_004344f4 - 0x004344f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004344f4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar2 = piVar3, piVar2 != (int *)0x0) {
    iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    *piVar2 = *piVar2 + -0x1e;
    if (*piVar2 < 0) {
      FUN_00435c84(piVar2);
    }
  }
  return;
}


