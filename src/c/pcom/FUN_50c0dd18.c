/* FUN_50c0dd18 - 0x50c0dd18 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c0dd18(void)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *this;
  ushort *puVar6;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 == 0) {
    uVar4 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50c0dd55;
    uVar4 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar4 != 0) {
    FUN_50c0e8db(this,uVar4,0);
  }
LAB_50c0dd55:
  puVar6 = (ushort *)**(undefined4 **)(unaff_EBP + 8);
  uVar4 = 0;
  if (puVar6 != (ushort *)0x0) {
    for (; *puVar6 != 0; puVar6 = puVar6 + 1) {
      uVar4 = uVar4 * 0x20 + 1 + (uint)*puVar6;
    }
  }
  uVar4 = uVar4 % *(uint *)((int)this + 8);
  puVar5 = *(undefined4 **)(*(int *)((int)this + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 4);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar5 = (undefined4 *)FUN_50c0ea82();
      *(undefined4 **)(unaff_EBP + -0x18) = puVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        FUN_50c05e35();
        puVar5[1] = *puVar1;
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        *puVar5 = &PTR_LAB_50c14764;
        FUN_50c05e16(puVar5 + 2,(int *)(unaff_EBP + -0x10));
        puVar5[4] = 0;
        *puVar5 = &PTR_FUN_50c14760;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) && (*(int **)(unaff_EBP + -0x10) != (int *)0x0))
      {
        FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_50c0dbf1(puVar5 + 3,*(int *)(unaff_EBP + 0xc));
      }
      *puVar1 = puVar5;
LAB_50c0de39:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar5;
    }
    bVar3 = FUN_50c085af(puVar5 + 2,(wchar_t *)**(undefined4 **)(unaff_EBP + 8));
    if (bVar3) {
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_50c0dbf1(puVar5 + 3,*(int *)(unaff_EBP + 0xc));
      }
      goto LAB_50c0de39;
    }
    puVar5 = (undefined4 *)puVar5[1];
  } while( true );
}


