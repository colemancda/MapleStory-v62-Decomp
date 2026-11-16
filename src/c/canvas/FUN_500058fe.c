/* FUN_500058fe - 0x500058fe in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_500058fe(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 4);
  FUN_500024f7();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar2 = FUN_500045c5((short *)(unaff_EBP + 0x18));
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  FUN_50006407();
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_50005cc5((void *)(extraout_ECX + 0xc),(int *)(unaff_EBP + -0x30),0);
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_50005acd(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_500059fc((void *)(*(int *)(unaff_EBP + -0x1c) + 0x10),(int *)(unaff_EBP + -0x30));
    FUN_50005d7b();
    FUN_50004d83();
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_5000362c(iVar4);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_50003649(unaff_EBP + -0x20);
  }
  else {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    FUN_5000362c(iVar4);
  }
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    FUN_500028a0(*(int **)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  piVar1 = (int *)(extraout_ECX + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


