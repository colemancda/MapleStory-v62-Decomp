/* FUN_50c0757a - 0x50c0757a in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c0757a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *this;
  ushort *puVar7;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 == 0) {
    uVar5 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50c075b7;
    uVar5 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar5 != 0) {
    FUN_50c0e8db(this,uVar5,0);
  }
LAB_50c075b7:
  puVar7 = (ushort *)**(undefined4 **)(unaff_EBP + 8);
  uVar5 = 0;
  if (puVar7 != (ushort *)0x0) {
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
      uVar5 = uVar5 * 0x20 + 1 + (uint)*puVar7;
    }
  }
  uVar5 = uVar5 % *(uint *)((int)this + 8);
  puVar6 = *(undefined4 **)(*(int *)((int)this + 4) + uVar5 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar5 * 4);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar6 = (undefined4 *)FUN_50c080de();
      *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_50c05e35();
        uVar3 = *puVar1;
        *puVar6 = &PTR_LAB_50c134fc;
        puVar6[1] = uVar3;
        puVar6[2] = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
        }
        *puVar6 = &PTR_FUN_50c134f8;
      }
      if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) && (*(int **)(unaff_EBP + -0x10) != (int *)0x0))
      {
        FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
      }
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      *puVar1 = puVar6;
LAB_50c0768f:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar6;
    }
    bVar4 = FUN_50c085af(puVar6 + 2,(wchar_t *)**(undefined4 **)(unaff_EBP + 8));
    if (bVar4) {
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        puVar6[3] = **(undefined4 **)(unaff_EBP + 0xc);
      }
      goto LAB_50c0768f;
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


