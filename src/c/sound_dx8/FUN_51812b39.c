/* FUN_51812b39 - 0x51812b39 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812b39(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  FUN_5180ea30();
  if ((*(undefined4 **)(unaff_EBP + 0x10) == (undefined4 *)0x0) ||
     (puVar2 = *(undefined4 **)(unaff_EBP + 0x14), puVar2 == (undefined4 *)0x0)) {
    uVar7 = 0x80004003;
  }
  else {
    piVar3 = *(int **)(unaff_EBP + 8);
    uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
    **(undefined4 **)(unaff_EBP + 0x10) = 0;
    *puVar2 = 0;
    *(int *)(unaff_EBP + -0x14) = piVar3[0x12];
    *(int *)(unaff_EBP + -0x10) = piVar3[0x13];
    iVar6 = (*DAT_5181fa20)(2,unaff_EBP + -0x14,0,uVar7);
    if (iVar6 == 0x102) {
      uVar7 = 0x8004022e;
    }
    else {
      if (iVar6 != 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        piVar1 = piVar3 + 6;
        *(int **)(unaff_EBP + 8) = piVar1;
        FUN_518017b5();
        iVar6 = piVar3[0x16];
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar6 != 0) {
          puVar4 = (undefined4 *)piVar3[0x17];
          *puVar2 = puVar4[1];
          FUN_51804af0((int *)(unaff_EBP + 0x14),(int *)*puVar4);
          piVar5 = *(int **)(unaff_EBP + 0x14);
          **(undefined4 **)(unaff_EBP + 0x10) = piVar5;
          (**(code **)(*piVar5 + 4))(piVar5);
          FUN_51810459(piVar3 + 0x14,piVar3[0x17]);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piVar5 = piVar3 + 7;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            *piVar1 = 0;
          }
          uVar7 = (**(code **)(*piVar3 + 0x18))(piVar3,*(undefined4 *)(unaff_EBP + 0x14));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piVar3 = *(int **)(unaff_EBP + 0x14);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          goto LAB_51812c32;
        }
        piVar3 = piVar3 + 7;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          *piVar1 = 0;
        }
        piVar3 = *(int **)(unaff_EBP + 0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
      }
      uVar7 = 0x80040227;
    }
  }
LAB_51812c32:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


