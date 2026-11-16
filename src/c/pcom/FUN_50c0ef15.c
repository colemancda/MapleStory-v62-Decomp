/* FUN_50c0ef15 - 0x50c0ef15 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0ef15(void)

{
  byte bVar1;
  uint uVar2;
  short *psVar3;
  size_t *psVar4;
  int *piVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int unaff_EBP;
  void *this;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_50c0f108();
    return;
  }
  FUN_50c08cee();
  this = (void *)(-(uint)(unaff_EBP != 0x4c) & unaff_EBP - 0x48U);
  bVar1 = *(byte *)((int)this + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((bVar1 & 0x10) == 0) {
    *(undefined1 *)(unaff_EBP + 0xf) = 0;
    FUN_50c08a3c(this,unaff_EBP + 0xf,1);
    iVar10 = *(int *)(unaff_EBP + 8);
    puVar6 = (undefined4 *)(iVar10 + 0x18);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar6;
    FUN_50c026fc();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_50c064e3();
    piVar5 = (int *)(iVar10 + 0x1c);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar6 = 0;
    }
    goto LAB_50c0f0bf;
  }
  FUN_50c0edcd((void *)(unaff_EBP + -0x4c),unaff_EBP + -0x18);
  piVar5 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar5 == (int *)0x0) {
    iVar10 = 0;
LAB_50c0ef90:
    uVar2 = 0;
  }
  else {
    iVar10 = *piVar5;
    if (*piVar5 == 0) goto LAB_50c0ef90;
    uVar2 = *(uint *)(*piVar5 + -4) >> 1;
  }
  psVar3 = (short *)(iVar10 + uVar2 * 2);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      psVar9 = (short *)0x0;
    }
    else {
      psVar9 = (short *)*piVar5;
    }
    if (((psVar3 < psVar9) || (*psVar3 == 0x2f)) || (*psVar3 == 0x5c)) break;
    psVar3 = psVar3 + -1;
  }
  if (piVar5 == (int *)0x0) {
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    iVar10 = *piVar5;
    iVar8 = *piVar5;
  }
  psVar4 = FUN_50c02a35(iVar8,(int)psVar3 + (2 - iVar10) >> 1);
  FUN_50c0f770((short *)psVar4);
  FUN_50c05e8d();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  FUN_50c08a10(this,unaff_EBP + 0xf,1);
  FUN_50c08a10(this,unaff_EBP + -0x11,1);
  piVar5 = (int *)FUN_50c06dac();
  FUN_50c04bec(piVar5);
  FUN_50c02a72((undefined4 *)(unaff_EBP + -0x18));
  puVar6 = (undefined4 *)*piVar5;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x20));
    puVar6 = *(undefined4 **)(unaff_EBP + -0x18);
  }
  if (puVar6 == (undefined4 *)0x0) {
    pwVar7 = (wchar_t *)0x0;
  }
  else {
    pwVar7 = (wchar_t *)*puVar6;
  }
  FUN_50c0f7f7(*(void **)(unaff_EBP + 8),pwVar7,(int *)(unaff_EBP + -0x1c));
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x18));
  }
LAB_50c0f0bf:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50c09968();
  FUN_50c0f108();
  return;
}


