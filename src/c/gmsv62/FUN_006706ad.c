/* FUN_006706ad - 0x006706ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006706ad(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x10);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004245d2(extraout_ECX + 4,4);
  FUN_004245d2(extraout_ECX + 8,4);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0xc) = uVar3;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)(extraout_ECX + 0x14);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


