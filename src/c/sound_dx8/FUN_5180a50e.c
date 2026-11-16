/* FUN_5180a50e - 0x5180a50e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a50e(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0xc);
  FUN_518017b5();
  piVar2 = *(int **)(iVar1 + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x54))
              (piVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
               *(undefined4 *)(unaff_EBP + 0x14));
  }
  piVar2 = (int *)(iVar1 + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


