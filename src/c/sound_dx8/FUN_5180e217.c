/* FUN_5180e217 - 0x5180e217 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180e217(void)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  this = *(void **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(void **)(unaff_EBP + -0x18) = this;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (this != (void *)0x0) {
    iVar3 = FUN_5180d98b((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x18));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5180e990(iVar3);
    }
  }
  puVar1 = *(undefined4 **)((int)this + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5180a2f4(this,(int *)0x0);
  iVar4 = FUN_5180e157();
  piVar2 = puVar1 + 1;
  *piVar2 = *piVar2 + -1;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    *puVar1 = 0;
  }
  if (iVar4 != 0) {
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_518011d6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_51813012(unaff_EBP + -0x20);
    }
    if (iVar3 == 0) {
      puVar1 = *(undefined4 **)((int)this + 0x18);
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
      FUN_518017b5();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_5180e1cc();
      piVar2 = puVar1 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


