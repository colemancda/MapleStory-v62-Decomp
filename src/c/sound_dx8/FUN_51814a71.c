/* FUN_51814a71 - 0x51814a71 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51814a71(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar5 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd4;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (((piVar1 != (int *)0x0) &&
      (iVar4 = FUN_51810efb((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x1c)), iVar4 < 0)) &&
     (iVar4 != -0x7fffbffe)) {
    FUN_5180e990(iVar4);
  }
  puVar2 = (undefined4 *)piVar1[6];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x28) = puVar2;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5180a2f4(piVar1,(int *)0x0);
  if (piVar1[0x1a] == 0) {
    FUN_51814a24();
  }
  else {
    iVar5 = piVar1[0xb];
    while (iVar4 = (**(code **)(*(int *)piVar1[0x1a] + 0x20))
                             ((int *)piVar1[0x1a],unaff_EBP + -0x14,unaff_EBP + -0x24,
                              unaff_EBP + -0x20,0), -1 < iVar4) {
      if (*(int *)(unaff_EBP + -0x14) == 1) {
        iVar4 = FUN_518149ba();
        if ((iVar4 == 0) || (iVar5 == 0)) goto LAB_51814b7a;
        iVar5 = 1;
      }
      else if (*(int *)(unaff_EBP + -0x14) == 2) {
        FUN_51814a24();
LAB_51814b7a:
        iVar5 = 0;
      }
      (**(code **)(*(int *)piVar1[0x1a] + 0x30))
                ((int *)piVar1[0x1a],*(undefined4 *)(unaff_EBP + -0x14),
                 *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
    }
  }
  piVar3 = puVar2 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar2 = 0;
  }
  if (iVar5 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_51804b19();
    if (*(int *)(iVar5 + 0x18) == 0) {
      puVar2 = (undefined4 *)piVar1[6];
      *(undefined4 **)(unaff_EBP + -0x28) = puVar2;
      FUN_518017b5();
      iVar5 = piVar1[0x22];
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar5 == 0) {
        iVar5 = FUN_51804b19();
        iVar5 = *(int *)(iVar5 + 0x10);
        iVar4 = (*DAT_5181fc6c)();
        if (iVar5 != iVar4) {
          piVar3 = (int *)piVar1[0x1c];
          piVar1[0x22] = 1;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x1c))(piVar3,0xffffd8f0);
          }
        }
      }
      else {
        iVar5 = FUN_51804b19();
        iVar5 = *(int *)(iVar5 + 0x10);
        iVar4 = (*DAT_5181fc6c)();
        if (iVar5 == iVar4) {
          piVar1[0x22] = 0;
          (**(code **)(*piVar1 + 0x4c))(piVar1[0x21]);
        }
      }
      piVar3 = puVar2 + 1;
      *piVar3 = *piVar3 + -1;
      iVar5 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar5 == 0) {
        *puVar2 = 0;
      }
    }
    if ((piVar1[0x22] != 0) || (piVar1[0xf] == 0)) {
      FUN_51804b19();
    }
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = FUN_518011d6();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_51813012(unaff_EBP + -0x2c);
    }
    if (iVar5 == 0) {
      FUN_51814a24();
    }
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


