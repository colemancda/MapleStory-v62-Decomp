/* FUN_0043449b - 0x0043449b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0043449b(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    iVar2 = *(int *)((-(uint)(piVar1 != (int *)0x0) & (uint)(piVar1 + -4)) + 4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    if (*piVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_00432a57();
    if (iVar2 == 0) {
      FUN_00435afa(piVar1);
    }
  }
  return;
}


