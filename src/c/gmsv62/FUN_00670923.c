/* FUN_00670923 - 0x00670923 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00670923(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x10);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006706ad(*(undefined4 *)(unaff_EBP + 8));
  uVar3 = FUN_00424561();
  *(undefined2 *)(extraout_ECX + 0x24) = uVar3;
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


