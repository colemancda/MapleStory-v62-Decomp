/* FUN_008628a4 - 0x008628a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008628a4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int *piVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  iVar9 = *(int *)(iVar5 + 0x98);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar9 == 0) {
    FUN_00862b53();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar5 + 0x9c);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar5 + 0xa0);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar5 + 0xa4);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar5 + 0xa8);
  iVar5 = *(int *)(unaff_EBP + -0x24);
  iVar9 = *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x20)) / 2;
  piVar6 = (int *)(*(int *)(unaff_EBP + 8) + 8);
  iVar11 = 0;
  do {
    iVar8 = piVar6[2];
    iVar2 = *piVar6;
    *(int *)(unaff_EBP + -0x40 + iVar11 * 4) = iVar11;
    iVar4 = (piVar6[3] + piVar6[1]) / 2 - *(int *)(unaff_EBP + -0x14);
    iVar8 = (iVar8 + iVar2) / 2 - (iVar9 + iVar5) / 2;
    *(int *)(unaff_EBP + -0x54 + iVar11 * 4) = iVar4 * iVar4 + iVar8 * iVar8;
    iVar11 = iVar11 + 1;
    piVar6 = piVar6 + 7;
  } while (iVar11 < 5);
  *(undefined4 *)(unaff_EBP + -0x14) = 4;
  iVar5 = 0;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - (unaff_EBP + -0x54);
  do {
    *(int *)(unaff_EBP + -0x1c) = iVar5 + 1;
    if (iVar5 + 1 < 5) {
      iVar5 = iVar5 * 4;
      piVar6 = (int *)(unaff_EBP + -0x54 + iVar5);
      *(int *)(unaff_EBP + -0x10) = iVar5;
      iVar9 = *(int *)(unaff_EBP + -0x14) + (int)piVar6;
      do {
        iVar11 = *(int *)(unaff_EBP + -0x54 + iVar9);
        if (*piVar6 < iVar11) {
          iVar8 = *piVar6;
          *piVar6 = iVar11;
          *(int *)(unaff_EBP + -0x54 + iVar9) = iVar8;
          uVar3 = *(undefined4 *)(unaff_EBP + -0x40 + iVar5);
          *(undefined4 *)(unaff_EBP + -0x40 + iVar5) = *(undefined4 *)(unaff_EBP + -0x40 + iVar9);
          *(undefined4 *)(unaff_EBP + -0x40 + iVar9) = uVar3;
          iVar5 = *(int *)(unaff_EBP + -0x10);
        }
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x14);
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
  } while (iVar5 < 5);
  FUN_0087b2f0(unaff_EBP + -0x8c,0x1c,2,&LAB_00861fd2,FUN_00861fdd);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(int *)(unaff_EBP + -0x10) = unaff_EBP + -0x40;
  puVar7 = (undefined4 *)(unaff_EBP + -0x74);
  do {
    puVar1 = (undefined4 *)(**(int **)(unaff_EBP + -0x10) * 0x1c + 8 + *(int *)(unaff_EBP + 8));
    puVar7[-6] = *puVar1;
    puVar7[-5] = puVar1[1];
    puVar7[-4] = puVar1[2];
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
    puVar7[-3] = puVar1[3];
    FUN_008623dc(puVar1 + 4);
    iVar5 = *(int *)(unaff_EBP + 8);
    *puVar7 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18);
    FUN_00862c03(**(undefined4 **)(unaff_EBP + -0x10));
    iVar9 = *(int *)(unaff_EBP + -0x14);
    if (iVar9 < 2) {
      piVar6 = *(int **)(unaff_EBP + -0x10);
      do {
        piVar6 = piVar6 + 1;
        if (*piVar6 == *(int *)(iVar5 + 0x94)) {
          *(int *)(unaff_EBP + -0x40 + iVar9 * 4) = **(int **)(unaff_EBP + -0x10);
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
    puVar7 = puVar7 + 7;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    if (1 < *(int *)(unaff_EBP + -0x14) + -1) {
      FUN_008620a1(iVar5,0);
      uVar3 = *(undefined4 *)(iVar5 + 4);
      uVar10 = unaff_EBP - 0x70;
      do {
        FUN_00861d7a(uVar10,*(undefined4 *)(unaff_EBP + 0xc),uVar3);
        uVar10 = uVar10 - 0x1c;
      } while (unaff_EBP - 0x8cU <= uVar10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0087a0b8(unaff_EBP + -0x8c,0x1c,2,FUN_00861fdd);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


