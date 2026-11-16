/* FUN_50807309 - 0x50807309 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50807309(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  if (*(undefined4 **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
    FUN_50807436();
    return;
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  **(undefined4 **)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50806ab4();
  Ordinal_8(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,2,0,0,unaff_EBP + -0x28);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_508012a1();
    FUN_50803e96(piVar2 + 5);
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
    puVar3 = (undefined4 *)piVar2[5];
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
    if (iVar4 == 0) {
      piVar2[1] = 0;
    }
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar3;
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_5080dfed(0x80004003);
    }
    iVar4 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x24))
                      (*(int **)(unaff_EBP + 8),2,uVar5,0,unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x14));
    }
  }
  if ((-1 < iVar4) && (*(short *)(unaff_EBP + -0x28) != 0)) {
    FUN_50804f37((void *)(unaff_EBP + -0x28),0xd,(ushort *)0x0);
    **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined2 *)(unaff_EBP + -0x28) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_508037a7((short *)(unaff_EBP + -0x28));
  if (iVar4 < 0) {
    FUN_5080dfed(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_50807436();
  return;
}


