/* FUN_004629c3 - 0x004629c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004629c3(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x49c);
  FUN_004245d2(piVar2,0x28);
  iVar1 = 10;
  do {
    if (*piVar2 != 0) {
      FUN_0045c1e1(piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_008161f1(0);
  return;
}


