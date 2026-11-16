/* FUN_5140699f - 0x5140699f in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140699f(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  void *this;
  
  FUN_5140ad20();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_51406acb();
    return;
  }
  FUN_514032f3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  this = (void *)(-(uint)(unaff_EBP != 0x3c) & unaff_EBP - 0x38U);
  iVar4 = FUN_51403433(unaff_EBP + -0x3c);
  iVar3 = *(int *)(unaff_EBP + 8);
  if ((iVar4 == 0) && (*(int *)(iVar3 + 0x24) != 0)) {
    iVar4 = FUN_51406adc();
    *(int *)(unaff_EBP + 0xc) = iVar4;
    if (iVar4 < 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_514037f7();
      FUN_51406acb();
      return;
    }
  }
  bVar2 = *(byte *)((int)this + 8);
  piVar1 = (int *)(iVar3 + 0x1c);
  *(int **)(unaff_EBP + 0xc) = piVar1;
  if ((bVar2 & 8) == 0) {
    FUN_5140530b(this,piVar1);
  }
  else {
    FUN_514053b2(this,*piVar1);
  }
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    FUN_5140530b(this,(int *)(iVar3 + 0x20));
  }
  else {
    FUN_514053b2(this,*(int *)(iVar3 + 0x20));
  }
  iVar4 = FUN_51403433(unaff_EBP + -0x3c);
  if ((iVar4 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
    FUN_51406c64();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_514037f7();
  FUN_51406acb();
  return;
}


