/* FUN_006614fb - 0x006614fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006614fb(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x10);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00670801(*(undefined4 *)(unaff_EBP + 8));
  FUN_00457d37(*(undefined4 *)(extraout_ECX + 0x1c));
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


