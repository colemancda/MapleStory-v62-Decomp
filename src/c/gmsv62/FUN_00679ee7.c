/* FUN_00679ee7 - 0x00679ee7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00679ee7(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int *extraout_ECX;
  uint uVar12;
  int unaff_EBP;
  byte *pbVar13;
  
  FUN_00879bb8();
  iVar11 = *(int *)(unaff_EBP + 8);
  if (iVar11 <= extraout_ECX[1]) {
    FUN_0087b2f0(unaff_EBP + -0x3c,4,2,&LAB_0067a086,thunk_FUN_0067a091);
    iVar11 = *(int *)(*extraout_ECX + iVar11 * 4);
    uVar4 = *(uint *)(*extraout_ECX + iVar11);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0067a0b3(uVar4 + 1,unaff_EBP + 0xb);
    FUN_0067a0b3(uVar4,unaff_EBP + 0xb);
    FUN_0067a0b3(uVar4,unaff_EBP + 0xb);
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(*extraout_ECX + 4 + uVar4 * 2 + iVar11);
    iVar8 = 0;
    if (0 < (int)uVar4) {
      do {
        *(undefined1 *)(iVar8 + *(int *)(unaff_EBP + -0x3c)) =
             *(undefined1 *)(*extraout_ECX + iVar11 + 4 + iVar8);
        *(undefined1 *)(iVar8 + *(int *)(unaff_EBP + -0x38)) =
             *(undefined1 *)(*extraout_ECX + uVar4 + iVar11 + 4 + iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar4);
    }
    uVar10 = **(undefined4 **)(unaff_EBP + 0xc);
    uVar12 = uVar4 >> 2;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar10;
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x10) = 0xbaadf00d;
    *(uint *)(unaff_EBP + -0x24) = uVar12;
    iVar11 = 0;
    if (uVar12 != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar10;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x38);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x3c);
      *(uint *)(unaff_EBP + -0x20) = uVar12;
      do {
        uVar12 = **(uint **)(unaff_EBP + -0x14);
        iVar11 = **(int **)(unaff_EBP + -0x18);
        uVar9 = FUN_0087a36a(iVar11,5);
        uVar5 = *(uint *)(unaff_EBP + -0x10);
        **(uint **)(unaff_EBP + -0x1c) = uVar9 ^ uVar12;
        iVar8 = FUN_0087a034(uVar12 ^ uVar5,5);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
        piVar1 = (int *)(unaff_EBP + -0x20);
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_EBP + -0x10) = iVar8 + iVar11;
      } while (*piVar1 != 0);
      iVar11 = *(int *)(unaff_EBP + -0x24);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x28);
    }
    iVar8 = uVar4 + iVar11 * -4;
    if (iVar8 != 0) {
      iVar6 = *(int *)(unaff_EBP + -0x2c);
      iVar7 = *(int *)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar10;
      pbVar13 = (byte *)(iVar11 * 4 + iVar6);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) - iVar6;
      *(int *)(unaff_EBP + -0x20) = iVar8;
      do {
        bVar2 = *pbVar13;
        bVar3 = pbVar13[iVar7 - iVar6];
        *(uint *)(unaff_EBP + -0x30) = (uint)bVar2;
        uVar12 = *(uint *)(unaff_EBP + -0x10);
        pbVar13[*(int *)(unaff_EBP + -0x1c)] = bVar2 ^ bVar3;
        iVar11 = FUN_0087a034(bVar3 ^ uVar12,5);
        pbVar13 = pbVar13 + 1;
        piVar1 = (int *)(unaff_EBP + -0x20);
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_EBP + -0x10) = iVar11 + *(int *)(unaff_EBP + -0x30);
      } while (*piVar1 != 0);
    }
    if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBP + -0x34)) {
      *(undefined1 *)(**(int **)(unaff_EBP + 0xc) + uVar4) = 0;
    }
    else {
      (*DAT_0097b398)(0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0087a0b8(unaff_EBP + -0x3c,4,2,thunk_FUN_0067a091);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


