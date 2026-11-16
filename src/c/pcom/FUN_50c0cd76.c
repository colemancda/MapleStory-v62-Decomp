/* FUN_50c0cd76 - 0x50c0cd76 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0cd76(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  if (*(short **)(unaff_EBP + 0xc) == (short *)0x0) {
    FUN_50c0cef4();
    return;
  }
  if (**(short **)(unaff_EBP + 0xc) == 0) {
    FUN_50c0cef4();
    return;
  }
  this = *(void **)(unaff_EBP + 8);
  puVar1 = (undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_50c0dcc3((void *)((int)this + 0x24),(undefined4 *)(unaff_EBP + 0xc),(void *)0x0);
  *(int *)(unaff_EBP + 8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_50c0dc20(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_50c05e8d();
    puVar3 = *(undefined4 **)(unaff_EBP + -0x1c);
    FUN_50c04bec((int *)(unaff_EBP + 8));
    FUN_50c02a72(puVar3);
    *puVar3 = *(undefined4 *)(unaff_EBP + 8);
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      FUN_50c02a85(*(int **)(unaff_EBP + 8));
    }
    FUN_50c0afd1((void *)(*(int *)(unaff_EBP + -0x1c) + 8),(short *)(unaff_EBP + 0x10));
    FUN_50c0cf05(this,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_50c045f3(unaff_EBP + -0x20);
    }
    piVar2 = (int *)((int)this + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    FUN_50c0cef4();
    return;
  }
  Ordinal_8(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_50c08394((ushort *)(unaff_EBP + -0x30),(ushort *)(unaff_EBP + 0x20),0,0xb);
  if ((-1 < iVar4) && (*(short *)(unaff_EBP + -0x28) != 0)) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x30));
    if (iVar4 < 0) {
      FUN_50c101c4(iVar4);
    }
    piVar2 = (int *)((int)this + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    FUN_50c0cef4();
    return;
  }
  FUN_50c0afd1((void *)(*(int *)(*(int *)(unaff_EBP + 8) + 4) + 8),(short *)(unaff_EBP + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x30));
  if (iVar4 < 0) {
    FUN_50c101c4(iVar4);
  }
  piVar2 = (int *)((int)this + 0x20);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_50c0cef4();
  return;
}


