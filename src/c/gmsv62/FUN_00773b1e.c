/* FUN_00773b1e - 0x00773b1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00773b1e(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar7;
  int *piVar8;
  undefined *puVar9;
  
  FUN_00879bb8();
  puVar7 = (undefined4 *)(extraout_ECX + 0x7c);
  *(undefined4 *)(unaff_EBP + -0x10) = 5;
  do {
    puVar7[-1] = 1;
    *puVar7 = 1;
    FUN_0078278c();
    puVar7[0x16] = 0;
    puVar7 = puVar7 + 0x20;
    piVar8 = (int *)(unaff_EBP + -0x10);
    *piVar8 = *piVar8 + -1;
  } while (*piVar8 != 0);
  iVar4 = *(int *)(DAT_00978368 + 0x2cd2);
  *(int *)(unaff_EBP + -0x1c) = DAT_00978368;
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x77c) = 0;
    *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x780) = 0;
  }
  else {
    uVar3 = FUN_00773ee6(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    uVar3 = FUN_00773f0a(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    FUN_00775b1e();
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar3 = FUN_008581b4(unaff_EBP + -0x10,iVar4);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    } while (iVar4 < 5);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      if (*(int *)(iVar4 + 0x2cb8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar4 + 0x2cb8) + -4);
      }
      if (iVar5 <= *(int *)(unaff_EBP + -0x14)) break;
      FUN_0085682d(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x10,unaff_EBP + -0xd4);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        *(undefined4 *)(unaff_EBP + -100) = 0;
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00414edd(unaff_EBP + -0xd4,0xffffffff);
        iVar4 = *(int *)(unaff_EBP + -199);
        *(int *)(unaff_EBP + -0x5c) = iVar4;
        if (iVar4 == -1) {
          puVar9 = &DAT_0096b794;
        }
        else {
          puVar9 = (undefined *)FUN_00482a39(iVar4);
        }
        FUN_00414edd(puVar9,0xffffffff);
        *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0xc3);
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0xbf);
        uVar3 = FUN_008581b4(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + -0xb3));
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414f8b(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0xb3);
        if (*(int *)(unaff_EBP + -0xbb) != 0) {
          iVar4 = unaff_EBP + -0x68;
          FUN_007827c8(0xffffffff);
          FUN_00776a8e(iVar4);
        }
        *(int *)(extraout_ECX + 0xd4) = *(int *)(extraout_ECX + 0xd4) + 1;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00773f2e();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x154;
    while( true ) {
      if (*(int *)(iVar4 + 0x2cf8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x2cf8) + -4);
      }
      if (iVar4 <= *(int *)(unaff_EBP + -0x14)) break;
      iVar5 = *(int *)(unaff_EBP + -0x10) + *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2cf8);
      iVar4 = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      while ((*(int *)(iVar5 + 0x10) != 0 &&
             (uVar2 = *(uint *)(unaff_EBP + -0x20), uVar2 < *(uint *)(*(int *)(iVar5 + 0x10) + -4)))
            ) {
        iVar6 = *(int *)(iVar5 + 0xc);
        if (*(int *)(iVar6 + uVar2 * 4) != 0) {
          *(undefined4 *)(unaff_EBP + -0xa8) = 0;
          *(undefined4 *)(unaff_EBP + -0xa4) = 0;
          *(undefined4 *)(unaff_EBP + -0x84) = 0;
          *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(iVar6 + uVar2 * 4);
          iVar6 = *(int *)(iVar5 + 0x10);
          *(undefined4 *)(unaff_EBP + -4) = 5;
          FUN_00414edd(iVar4 + iVar6,0xffffffff);
          iVar6 = *(int *)(iVar5 + 0x10);
          *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(iVar4 + 0xd + iVar6);
          iVar6 = *(int *)(iVar4 + 0xd + iVar6);
          if (iVar6 == -1) {
            puVar9 = &DAT_0096b794;
          }
          else {
            puVar9 = (undefined *)FUN_00482a39(iVar6);
          }
          FUN_00414edd(puVar9,0xffffffff);
          iVar6 = *(int *)(iVar5 + 0x10) + iVar4;
          *(undefined4 *)(unaff_EBP + -0x9c) =
               *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x11 + iVar4);
          *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(iVar6 + 0x15);
          uVar3 = FUN_008581b4(unaff_EBP + -0x24,*(undefined4 *)(iVar6 + 0x21));
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00414f8b(uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00414ebb();
          iVar6 = *(int *)(iVar5 + 0x10);
          *(undefined4 *)(unaff_EBP + -0x70) = 0;
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(iVar6 + 0x21 + iVar4);
          if (*(int *)(iVar6 + iVar4 + 0x19) != 0) {
            iVar6 = unaff_EBP + -0xac;
            FUN_007827c8(0xffffffff);
            FUN_00776a8e(iVar6);
          }
          **(int **)(unaff_EBP + -0x18) = **(int **)(unaff_EBP + -0x18) + 1;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00773f2e();
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        iVar4 = iVar4 + 0x25;
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x2a;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x80;
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x77c) = 0;
    piVar8 = (int *)(extraout_ECX + 0xd0);
    iVar4 = 5;
    do {
      FUN_007770bc();
      if (*piVar8 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar8 + -4);
      }
      piVar1 = (int *)(*(int *)(extraout_ECX + 0x24) + 0x77c);
      *piVar1 = *piVar1 + iVar5;
      piVar8 = piVar8 + 0x20;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_0077f351();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


