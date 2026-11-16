/* FUN_5180c65c - 0x5180c65c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180c65c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_5180ea30();
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar4 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((piVar2 != (int *)0x0) &&
      (iVar3 = FUN_5180d98b((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x18)), iVar3 < 0)) &&
     (iVar3 != -0x7fffbffe)) {
    FUN_5180e990(iVar3);
  }
  puVar5 = (undefined4 *)piVar2[6];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar5;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5180a2f4(piVar2,(int *)0x0);
  if (piVar2[0x1d] == 0) {
    iVar4 = FUN_5180c4f3();
LAB_5180c6cb:
    piVar1 = puVar5 + 1;
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      *puVar5 = 0;
    }
    if (iVar4 == 0) goto LAB_5180c6fd;
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar4 = FUN_518011d6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_51813012(unaff_EBP + -0x20);
    }
    if (iVar4 != 0) goto LAB_5180c6fd;
    puVar5 = (undefined4 *)piVar2[6];
    *(undefined4 **)(unaff_EBP + 0x10) = puVar5;
    FUN_518017b5();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_5180c609();
  }
  else {
    if (piVar2[0xb] == 0) goto LAB_5180c6cb;
    (**(code **)(*piVar2 + 0x40))();
  }
  piVar2 = puVar5 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar5 = 0;
  }
LAB_5180c6fd:
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


