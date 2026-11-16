/* FUN_50c0707f - 0x50c0707f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0707f(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  undefined3 extraout_var;
  int iVar7;
  byte *pbVar8;
  int unaff_EBP;
  uint *puVar9;
  ushort *puVar10;
  
  FUN_50c10270();
  piVar1 = *(int **)(unaff_EBP + 8);
  FUN_50c07020(piVar1,unaff_EBP + -0xd,1);
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    *(int *)(unaff_EBP + -0x14) = (int)*(char *)(unaff_EBP + -0xd);
    FUN_50c08677(piVar1,unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar6 = FUN_50c06bf8();
    bVar5 = FUN_50c06c2d((int)puVar6);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      iVar7 = *(int *)(unaff_EBP + -0x14);
      if (iVar7 < 0) {
        if (iVar7 == -0x80) {
          FUN_50c07020(piVar1,unaff_EBP + -0x14,4);
        }
        else {
          *(int *)(unaff_EBP + -0x14) = -iVar7;
        }
        if ((*(int *)(unaff_EBP + -0x14) < 0) || (0x1fff < *(int *)(unaff_EBP + -0x14))) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x80070570,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c02a35(0,*(int *)(unaff_EBP + -0x14));
        FUN_50c05e8d();
        FUN_50c04bec((int *)(unaff_EBP + 8));
        puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_50c02a72(puVar2);
        piVar3 = *(int **)(unaff_EBP + 8);
        *puVar2 = piVar3;
        if (piVar3 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar3;
          FUN_50c02a85(piVar3);
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        FUN_50c07020(piVar1,iVar7,*(int *)(unaff_EBP + -0x14));
        iVar4 = *(int *)(unaff_EBP + -0x14);
        pbVar8 = (byte *)(iVar7 + iVar4);
        puVar10 = (ushort *)(iVar7 + iVar4 * 2);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          pbVar8 = pbVar8 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = (ushort)(byte)((char)iVar4 + 0xaaU ^ *pbVar8);
        }
      }
      else {
        if (iVar7 == 0x7f) {
          FUN_50c07020(piVar1,unaff_EBP + -0x14,4);
          iVar7 = *(int *)(unaff_EBP + -0x14);
        }
        if ((iVar7 < 0) || (0x1fff < iVar7)) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x80070570,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c02a35(0,iVar7);
        FUN_50c05e8d();
        FUN_50c04bec((int *)(unaff_EBP + 8));
        puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_50c02a72(puVar2);
        piVar3 = *(int **)(unaff_EBP + 8);
        *puVar2 = piVar3;
        if (piVar3 == (int *)0x0) {
          puVar10 = (ushort *)0x0;
        }
        else {
          puVar10 = (ushort *)*piVar3;
          FUN_50c02a85(piVar3);
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        FUN_50c07020(piVar1,(int)puVar10,*(int *)(unaff_EBP + -0x14) * 2);
        iVar7 = 0;
        if (0 < *(int *)(unaff_EBP + -0x14)) {
          do {
            *puVar10 = *puVar10 ^ (short)iVar7 + 0xaaaaU;
            puVar10 = puVar10 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(unaff_EBP + -0x14));
        }
      }
    }
    else {
      iVar7 = *(int *)(unaff_EBP + -0x14);
      if (iVar7 < 0) {
        if (iVar7 == -0x80) {
          FUN_50c07020(piVar1,unaff_EBP + -0x14,4);
        }
        else {
          *(int *)(unaff_EBP + -0x14) = -iVar7;
        }
        iVar7 = *(int *)(unaff_EBP + -0x14);
        if ((iVar7 < 0) || (0x1fff < iVar7)) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x80070570,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c10310();
        if (&stack0x00000000 == (undefined1 *)0x2c) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c02a35(0,iVar7);
        FUN_50c05e8d();
        FUN_50c04bec((int *)(unaff_EBP + -0x18));
        puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_50c02a72(puVar2);
        piVar1 = *(int **)(unaff_EBP + -0x18);
        *puVar2 = piVar1;
        if (piVar1 == (int *)0x0) {
          puVar9 = (uint *)0x0;
        }
        else {
          puVar9 = (uint *)*piVar1;
          FUN_50c02a85(piVar1);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        FUN_50c07020(*(int **)(unaff_EBP + 8),(int)&stack0xffffffd4,*(int *)(unaff_EBP + -0x14));
        FUN_50c01076(puVar9,(uint *)&stack0xffffffd4,*(uint *)(unaff_EBP + -0x14),&DAT_50c17090);
        iVar7 = *(int *)(unaff_EBP + -0x14);
        pbVar8 = (byte *)((int)puVar9 + iVar7);
        puVar10 = (ushort *)((int)puVar9 + iVar7 * 2);
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
          pbVar8 = pbVar8 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = (ushort)(byte)((char)iVar7 + 0xaaU ^ *pbVar8);
        }
      }
      else {
        if (iVar7 == 0x7f) {
          FUN_50c07020(piVar1,unaff_EBP + -0x14,4);
          iVar7 = *(int *)(unaff_EBP + -0x14);
        }
        if ((iVar7 < 0) || (0x1fff < iVar7)) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x80070570,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c10310();
        if (&stack0x00000000 == (undefined1 *)0x2c) {
          FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
        }
        FUN_50c02a35(0,iVar7);
        FUN_50c05e8d();
        FUN_50c04bec((int *)(unaff_EBP + -0x18));
        puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_50c02a72(puVar2);
        piVar1 = *(int **)(unaff_EBP + -0x18);
        *puVar2 = piVar1;
        if (piVar1 == (int *)0x0) {
          puVar9 = (uint *)0x0;
        }
        else {
          puVar9 = (uint *)*piVar1;
          FUN_50c02a85(piVar1);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        FUN_50c07020(*(int **)(unaff_EBP + 8),(int)&stack0xffffffd4,*(int *)(unaff_EBP + -0x14) * 2)
        ;
        FUN_50c01076(puVar9,(uint *)&stack0xffffffd4,*(int *)(unaff_EBP + -0x14) * 2,&DAT_50c17090);
        iVar7 = 0;
        if (0 < *(int *)(unaff_EBP + -0x14)) {
          do {
            *(ushort *)puVar9 = (ushort)*puVar9 ^ (short)iVar7 + 0xaaaaU;
            puVar9 = (uint *)((int)puVar9 + 2);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(unaff_EBP + -0x14));
        }
      }
    }
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


