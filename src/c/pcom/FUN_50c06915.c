/* FUN_50c06915 - 0x50c06915 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c06915(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined3 extraout_var;
  ushort *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int unaff_EBP;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  
  FUN_50c10270();
  puVar4 = *(ushort **)(unaff_EBP + 0xc);
  if (puVar4 == (ushort *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(puVar4 + -2) >> 1;
  }
  iVar10 = 0;
  if (uVar9 != 0) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      if ((uVar1 & 0xff00) != 0) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar9);
  }
  FUN_50c08677(*(void **)(unaff_EBP + 8),unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar3 = FUN_50c06bf8();
  bVar2 = FUN_50c06c2d((int)puVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    if (uVar9 != 0) {
      if (iVar10 < (int)uVar9) {
        if (uVar9 < 0x7f) {
          iVar10 = uVar9 * 2 + 1;
          FUN_50c10310();
          puVar5 = &stack0xffffffd1;
        }
        else {
          iVar10 = uVar9 * 2 + 5;
          FUN_50c10310();
          puVar5 = &stack0xffffffd5;
        }
        *(undefined1 **)(unaff_EBP + -0x14) = puVar5;
        memcpy(*(void **)(unaff_EBP + -0x14),*(void **)(unaff_EBP + 0xc),uVar9 * 2);
        iVar7 = 0;
        puVar5 = &stack0xffffffd0;
        if (uVar9 != 0) {
          do {
            puVar4 = *(ushort **)(unaff_EBP + -0x14);
            *puVar4 = *puVar4 ^ (short)iVar7 + 0xaaaaU;
            iVar7 = iVar7 + 1;
            *(ushort **)(unaff_EBP + -0x14) = puVar4 + 1;
            puVar5 = &stack0xffffffd0;
          } while (iVar7 < (int)uVar9);
        }
      }
      else {
        if (uVar9 < 0x80) {
          iVar10 = uVar9 + 1;
          FUN_50c10310();
          pbVar6 = &stack0xffffffd1;
        }
        else {
          iVar10 = uVar9 + 5;
          FUN_50c10310();
          pbVar6 = &stack0xffffffd5;
        }
        pbVar8 = *(byte **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        puVar5 = &stack0xffffffd0;
        if (uVar9 != 0) {
          do {
            *pbVar6 = *(char *)(unaff_EBP + 0xc) + 0xaaU ^ *pbVar8;
            pbVar6 = pbVar6 + 1;
            pbVar8 = pbVar8 + 2;
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
            puVar5 = &stack0xffffffd0;
          } while (*(int *)(unaff_EBP + 0xc) < (int)uVar9);
        }
      }
      goto LAB_50c06bcd;
    }
  }
  else if (uVar9 != 0) {
    if (iVar10 < (int)uVar9) {
      iVar10 = uVar9 * 2;
      *(int *)(unaff_EBP + -0x18) = iVar10;
      FUN_50c10310();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
      if (&stack0x00000000 == (undefined1 *)0x30) {
        FUN_50c061b4((void *)(unaff_EBP + -0x30),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x30),(ThrowInfo *)&DAT_50c14eb0);
      }
      if (uVar9 < 0x7f) {
        iVar10 = iVar10 + 1;
        FUN_50c10310();
        puVar5 = &stack0xffffffd1;
      }
      else {
        iVar10 = iVar10 + 5;
        FUN_50c10310();
        puVar5 = &stack0xffffffd5;
      }
      *(undefined1 **)(unaff_EBP + -0x1c) = puVar5;
      memcpy(*(void **)(unaff_EBP + -0x14),*(void **)(unaff_EBP + 0xc),
             *(size_t *)(unaff_EBP + -0x18));
      puVar4 = *(ushort **)(unaff_EBP + -0x14);
      iVar7 = 0;
      if (uVar9 != 0) {
        do {
          *puVar4 = *puVar4 ^ (short)iVar7 + 0xaaaaU;
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar9);
      }
      uVar9 = *(uint *)(unaff_EBP + -0x18);
      puVar12 = *(uint **)(unaff_EBP + -0x14);
      puVar11 = *(uint **)(unaff_EBP + -0x1c);
    }
    else {
      FUN_50c10310();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
      if (&stack0x00000000 == (undefined1 *)0x30) {
        FUN_50c061b4((void *)(unaff_EBP + -0x30),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x30),(ThrowInfo *)&DAT_50c14eb0);
      }
      if (uVar9 < 0x80) {
        iVar10 = uVar9 + 1;
        FUN_50c10310();
        puVar5 = &stack0xffffffd1;
      }
      else {
        iVar10 = uVar9 + 5;
        FUN_50c10310();
        puVar5 = &stack0xffffffd5;
      }
      *(undefined1 **)(unaff_EBP + -0x1c) = puVar5;
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
      iVar7 = 0;
      if (uVar9 != 0) {
        do {
          pbVar6 = *(byte **)(unaff_EBP + 0xc);
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 2;
          *(byte *)(*(int *)(unaff_EBP + -0x14) + iVar7) = (char)iVar7 + 0xaaU ^ *pbVar6;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar9);
      }
      puVar12 = *(uint **)(unaff_EBP + -0x14);
      puVar11 = *(uint **)(unaff_EBP + -0x1c);
    }
    FUN_50c01000(puVar11,puVar12,uVar9,&DAT_50c17090);
    puVar5 = &stack0xffffffd0;
    goto LAB_50c06bcd;
  }
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  iVar10 = 1;
  puVar5 = (undefined1 *)(unaff_EBP + -0xd);
LAB_50c06bcd:
  FUN_50c068b6(*(int **)(unaff_EBP + 8),(int)puVar5,iVar10);
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x20));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


