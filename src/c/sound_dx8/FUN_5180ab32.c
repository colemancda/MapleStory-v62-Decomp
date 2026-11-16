/* FUN_5180ab32 - 0x5180ab32 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180ab32(void)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar9 = FUN_51804b19();
  *(undefined4 *)(extraout_ECX + 0x14) = *(undefined4 *)(iVar9 + 0x30);
  iVar10 = FUN_51804b19();
  iVar9 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x18) = *(undefined4 *)(iVar10 + 0x34);
  FUN_5181022b((void *)(extraout_ECX + 0x24),iVar9);
  iVar9 = *(int *)(iVar9 + 4);
  iVar10 = 0;
  if (unaff_EBP != -8) {
    iVar10 = *(int *)(iVar9 + 0xc);
  }
  iVar9 = *(int *)(iVar9 + 8);
  iVar7 = *(int *)(unaff_EBP + 0x10);
  *(int *)(extraout_ECX + 0x1c) = iVar9;
  *(int *)(extraout_ECX + 0x20) = iVar9 + iVar10;
  psVar8 = *(short **)(*(int *)(iVar7 + 4) + 0x44);
  FUN_5181022b((void *)(extraout_ECX + 0x54),iVar7);
  if (*psVar8 == 1) {
    *(short **)(extraout_ECX + 0x5c) = psVar8;
    sVar1 = psVar8[1];
    sVar2 = psVar8[7];
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
    *(uint *)(extraout_ECX + 0x34) = CONCAT22(sVar1,sVar2);
    *(int *)(extraout_ECX + 0x14) = iVar10;
  }
  else {
    iVar9 = FUN_51804b19();
    FUN_51804b19();
    iVar10 = FUN_5180468e();
    if (iVar10 == 0) {
      piVar11 = *(int **)(unaff_EBP + 8);
      *(int *)(extraout_ECX + 0x5c) = iVar9 + 0x1c;
    }
    else {
      puVar12 = FUN_518019c0();
      *(uint **)(extraout_ECX + 0x5c) = puVar12;
      *(undefined4 *)(extraout_ECX + 0x60) = 1;
      *(undefined2 *)puVar12 = 1;
      *(ushort *)((int)puVar12 + 2) = (psVar8[1] != 1) + 1;
      uVar13 = *(uint *)(psVar8 + 2);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(iVar9 + 0x20);
      }
      uVar5 = *(ushort *)((int)puVar12 + 2);
      puVar12[1] = uVar13;
      uVar6 = *(ushort *)(iVar9 + 0x2a);
      *(uint *)(unaff_EBP + 0xc) = uVar13;
      *(ushort *)((int)puVar12 + 0xe) = uVar6;
      *(undefined2 *)(puVar12 + 4) = 0;
      uVar13 = (int)((uint)uVar6 * (uint)uVar5) / 8;
      *(short *)(puVar12 + 3) = (short)uVar13;
      puVar12[2] = (uVar13 & 0xffff) * *(int *)(unaff_EBP + 0xc);
      piVar11 = *(int **)(unaff_EBP + 8);
      FUN_51804b19();
      iVar9 = FUN_5180468e();
      if (iVar9 != 0) {
        FUN_51802a89(u_Sound_DX8__Unknown_format_5181f694,0);
        FUN_51802c9b((void *)(unaff_EBP + -0x20),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5181a2e0);
      }
    }
    uVar3 = *(undefined2 *)(*(int *)(extraout_ECX + 0x5c) + 2);
    uVar4 = *(undefined2 *)(*(int *)(extraout_ECX + 0x5c) + 0xe);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(uint *)(extraout_ECX + 0x34) = CONCAT22(uVar3,uVar4);
    iVar9 = acmStreamSize(*piVar11,*(int *)(extraout_ECX + 0x20) - *(int *)(extraout_ECX + 0x1c),
                          unaff_EBP + -0x10,0);
    if (iVar9 == 0) {
      iVar9 = FUN_51804b19();
      if (*(uint *)(unaff_EBP + -0x10) <= *(uint *)(iVar9 + 0x38)) {
        FUN_5180af1c();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar10 = FUN_51805b70((int *)(extraout_ECX + 0x2c),*(uint *)(unaff_EBP + -0x10));
        iVar9 = *piVar11;
        *(int *)(unaff_EBP + 0xc) = iVar10;
        piVar11 = FUN_5180b052((void *)(unaff_EBP + -0xac),extraout_ECX,iVar9);
        iVar10 = (**(code **)(*piVar11 + 8))
                           (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x10),0);
        *(undefined4 *)(extraout_ECX + 0x18) = 0;
        *(int *)(extraout_ECX + 0x14) = iVar10;
        iVar9 = *(int *)(extraout_ECX + 0x28);
        *(int *)(unaff_EBP + 0xc) = iVar10;
        if (iVar9 != 0) {
          FUN_51813012(extraout_ECX + 0x24);
          *(undefined4 *)(extraout_ECX + 0x28) = 0;
          iVar10 = *(int *)(unaff_EBP + 0xc);
        }
        iVar9 = *(int *)(extraout_ECX + 0x2c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(extraout_ECX + 0x1c) = iVar9;
        *(int *)(extraout_ECX + 0x20) = iVar9 + iVar10;
        FUN_5180afc5();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


