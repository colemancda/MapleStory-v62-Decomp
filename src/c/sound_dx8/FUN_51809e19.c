/* FUN_51809e19 - 0x51809e19 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51809e19(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if ((iVar1 < -1) || (1 < iVar1)) {
LAB_51809e71:
    uVar5 = 0x80070057;
  }
  else {
    piVar2 = *(int **)(unaff_EBP + 8);
    puVar3 = (undefined4 *)piVar2[6];
    *(undefined4 **)(unaff_EBP + 0xc) = puVar3;
    FUN_518017b5();
    iVar4 = piVar2[0xb];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      if (iVar1 == 0) {
LAB_51809e8b:
        piVar2 = puVar3 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar3 = 0;
        }
        uVar5 = 1;
        goto LAB_51809e76;
      }
      piVar2[0xb] = iVar1;
      if (piVar2[0x14] != 0) {
        (**(code **)(*piVar2 + 0x50))(piVar2[0x14],piVar2[0x15]);
        piVar2[0x14] = 0;
        piVar2[0x15] = 0;
      }
      (**(code **)(*piVar2 + 0x40))();
    }
    else {
      if (iVar1 != 0) {
        if (iVar4 == iVar1) goto LAB_51809e8b;
        piVar2 = puVar3 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar3 = 0;
        }
        goto LAB_51809e71;
      }
      (**(code **)(*piVar2 + 0x44))();
    }
    piVar2 = puVar3 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar3 = 0;
    }
    uVar5 = 0;
  }
LAB_51809e76:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


