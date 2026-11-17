/* FUN_0084aa92 - 0x0084aa92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084aa92(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int extraout_ECX;
  int *piVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 *puVar10;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX + 0x3278;
  FUN_0045f253();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(extraout_ECX + 0x3274);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar4 = *(undefined4 *)(iVar5 + -4);
  }
  FUN_0045f36d(uVar4,unaff_EBP + -0x15);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar2 = 0;
  iVar5 = extraout_ECX;
  while ((iVar3 = *(int *)(iVar5 + 0x3274), iVar3 != 0 && (uVar2 < *(uint *)(iVar3 + -4)))) {
    iVar5 = *(int *)(unaff_EBP + -0x10);
    iVar9 = uVar2 * 8;
    FUN_0045e45d();
    FUN_0045e46f();
    uVar4 = *(undefined4 *)(iVar9 + iVar3 + 4);
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(undefined4 *)(iVar9 + iVar5 + 4) = uVar4;
    iVar3 = *(int *)(iVar9 + 4 + *(int *)(unaff_EBP + -0x10));
    iVar5 = *(int *)(unaff_EBP + -0x30);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 100);
    uVar2 = *(uint *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_0042459a();
  *(int *)(unaff_EBP + -0x24) = iVar3;
  if (0 < iVar3) {
    FUN_0056a92f(iVar3,unaff_EBP + -0x15);
    FUN_004245d2(*(undefined4 *)(unaff_EBP + -0x28),iVar3 << 2);
  }
  uVar2 = FUN_00424561();
  if ((uVar2 & 0xffff) != 0) {
    *(uint *)(unaff_EBP + -0x14) = uVar2 & 0xffff;
    do {
      uVar2 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_00469866();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar9 = FUN_0042459a();
      iVar3 = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x34) = iVar9;
      piVar8 = (int *)(iVar3 + 4);
      while (iVar3 != 0) {
        if (*(uint *)(iVar3 + -4) <= uVar2) {
LAB_0084abee:
          if ((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + -4))) goto LAB_0084ac2e;
          break;
        }
        if (*(int *)(*piVar8 + 0xc) == iVar9) {
          FUN_0084adea(*(undefined4 *)(*(int *)(iVar5 + 0x3274) + 4 + uVar2 * 8));
          FUN_00469490(*(undefined4 *)(unaff_EBP + 8));
          iVar3 = *(int *)(unaff_EBP + -0x10);
          FUN_0045e45d();
          FUN_0045e46f();
          *(undefined4 *)(iVar3 + uVar2 * 8 + 4) = *(undefined4 *)(unaff_EBP + -0x1c);
          iVar3 = *(int *)(unaff_EBP + -0x10);
          iVar9 = *(int *)(unaff_EBP + -0x34);
          goto LAB_0084abee;
        }
        uVar2 = uVar2 + 1;
        piVar8 = piVar8 + 2;
      }
      FUN_00469866();
      uVar4 = *(undefined4 *)(unaff_EBP + 8);
      *(int *)(*(int *)(unaff_EBP + -0x1c) + 0xc) = iVar9;
      FUN_00469490(uVar4);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 100) =
           *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x20);
      iVar3 = unaff_EBP + -0x20;
      FUN_0045f28f(0xffffffff);
      FUN_0045e10e(iVar3);
LAB_0084ac2e:
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045e46f();
      piVar8 = (int *)(unaff_EBP + -0x14);
      *piVar8 = *piVar8 + -1;
    } while (*piVar8 != 0);
    iVar3 = *(int *)(unaff_EBP + -0x24);
  }
  iVar5 = *(int *)(unaff_EBP + -0x10);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      uVar2 = 0;
      piVar8 = (int *)(iVar5 + 4);
      while( true ) {
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar2)) goto LAB_0084ac7f;
        if (*(int *)(*piVar8 + 0xc) == *(int *)(*(int *)(unaff_EBP + -0x28) + iVar9 * 4)) break;
        uVar2 = uVar2 + 1;
        piVar8 = piVar8 + 2;
      }
      FUN_0045f31f(iVar5 + uVar2 * 8);
      iVar5 = *(int *)(unaff_EBP + -0x10);
LAB_0084ac7f:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_EBP + -0x24));
  }
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar4 = *(undefined4 *)(iVar5 + -4);
  }
  FUN_0045f36d(uVar4,unaff_EBP + -0x15);
  for (uVar2 = 0;
      (iVar5 = *(int *)(unaff_EBP + -0x10), iVar5 != 0 && (uVar2 < *(uint *)(iVar5 + -4)));
      uVar2 = uVar2 + 1) {
    FUN_0045e10e(iVar5 + uVar2 * 8);
  }
  FUN_0084a288();
  piVar8 = *(int **)(unaff_EBP + -0x2c);
  iVar5 = FUN_0084a8b2(piVar8);
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0x22000006;
    *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
    *(undefined1 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_008f7260);
  }
  *(undefined4 *)(unaff_EBP + -0x46c) = 0;
  puVar10 = (undefined4 *)(unaff_EBP + -0x468);
  for (iVar5 = 0x10d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  uVar2 = FUN_0042452b();
  if ((uVar2 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x24) = uVar2 & 0xff;
    do {
      uVar2 = FUN_0042452b();
      uVar6 = FUN_0042452b();
      uVar7 = FUN_0042452b();
      piVar1 = (int *)(unaff_EBP + -0x24);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      *(uint *)(unaff_EBP + -0x46c + ((uVar2 & 0xff) * 0x1e + (uVar6 & 0xff)) * 4) = uVar7 & 0xff;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar5 = *piVar8, iVar5 != 0 && (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar5 + -4)))) {
    iVar5 = *(int *)(iVar5 + 4 + *(uint *)(unaff_EBP + -0x14) * 8);
    if (*(int *)(iVar5 + 0x20) == *(int *)(iVar5 + 100)) {
      iVar3 = *(int *)(unaff_EBP + -0x46c +
                      (((*(int *)(iVar5 + 0xc) / 10000000) % 10) * 0x1e +
                      (*(int *)(iVar5 + 0xc) / 100000) % 100) * 4);
      iVar9 = *(int *)(unaff_EBP + -0x14);
      *(int *)(iVar5 + 0x58) = iVar3;
      iVar5 = *(int *)(*piVar8 + 4 + iVar9 * 8);
      *(int *)(iVar5 + 0x20) = ((100 - iVar3) * *(int *)(iVar5 + 0x20)) / 100;
    }
    else {
      *(undefined4 *)(iVar5 + 0x58) = 0;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045f253();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


