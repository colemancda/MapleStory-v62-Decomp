/* FUN_50c0d935 - 0x50c0d935 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0d935(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBP;
  void *this;
  uint uVar5;
  int iVar6;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff8c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_50c0db8d();
    return;
  }
  iVar6 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x24) = iVar6 + 0x1c;
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c08cee();
  this = (void *)(-(uint)(unaff_EBP != 0x74) & unaff_EBP - 0x70U);
  bVar1 = *(byte *)((int)this + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((bVar1 & 0x10) == 0) {
    FUN_50c0dba3((void *)(unaff_EBP + -0x48),iVar6 + 0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined1 *)(unaff_EBP + 0xf) = 0;
    FUN_50c08a3c(this,unaff_EBP + 0xf,1);
    *(undefined1 *)(unaff_EBP + 0xf) = 0;
    FUN_50c08a3c(this,unaff_EBP + 0xf,1);
    FUN_50c0c113(this,*(int *)(unaff_EBP + -0x40));
    uVar5 = *(uint *)(unaff_EBP + -0x3c);
    while (uVar5 != 0) {
      uVar4 = -(uint)(*(int *)(uVar5 - 0xc) != 0) & *(int *)(uVar5 - 0xc) + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(uVar5 + 4);
      FUN_50c0dc53(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_50c064e3();
      *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x30) + 8;
      FUN_50c0d3bb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uVar5 = uVar4;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        FUN_50c045f3(unaff_EBP + -0x34);
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_50c131f4;
    FUN_50c04098(unaff_EBP + -0x48);
  }
  else {
    FUN_50c07810(iVar6 + 0x24);
    FUN_50c04098(iVar6 + 0x3c);
    *(undefined1 *)(unaff_EBP + -0x18) = 0;
    FUN_50c08a10(this,unaff_EBP + -0x18,1);
    if (*(char *)(unaff_EBP + -0x18) == '\0') {
      *(undefined1 *)(unaff_EBP + 0xf) = 0;
      FUN_50c08a10(this,unaff_EBP + 0xf,1);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_50c0c0ab(this,(int *)(unaff_EBP + -0x1c));
      for (iVar6 = 0; iVar6 < *(int *)(unaff_EBP + -0x1c); iVar6 = iVar6 + 1) {
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        FUN_50c0dc20(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_50c08a10(this,unaff_EBP + -0x11,1);
        piVar3 = (int *)FUN_50c06dac();
        FUN_50c04b87(*(void **)(unaff_EBP + -0x30),piVar3);
        FUN_50c02a72((undefined4 *)(unaff_EBP + -0x20));
        *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x30);
        *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x30) + 8;
        FUN_50c0d3bb();
        FUN_50c0cf05(*(void **)(unaff_EBP + 8),unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_50c045f3(unaff_EBP + -0x34);
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
      }
    }
    else {
      FUN_50c112d3();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c09968();
  puVar2 = *(undefined4 **)(unaff_EBP + -0x24);
  piVar3 = puVar2 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar2 = 0;
  }
  FUN_50c0db8d();
  return;
}


