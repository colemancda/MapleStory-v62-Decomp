/* FUN_007702e2 - 0x007702e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007702e2(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined *puVar6;
  
  FUN_00879bb8();
  puVar5 = (undefined4 *)(extraout_ECX + 0x80);
  iVar4 = 2;
  do {
    puVar5[-1] = 1;
    *puVar5 = 1;
    FUN_007826c1();
    puVar5 = puVar5 + 0x1f;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(DAT_00978368 + 0x2cac);
  *(int *)(unaff_EBP + -0x14) = DAT_00978368;
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)(extraout_ECX + 0x28) + 0x77c) = 0;
    *(undefined4 *)(*(int *)(extraout_ECX + 0x28) + 0x780) = 2;
  }
  else {
    uVar1 = FUN_004dee9b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    piVar2 = (int *)FUN_0077055e(unaff_EBP + -0x10);
    iVar4 = *piVar2;
    if (*piVar2 == 0) {
      iVar4 = DAT_00980dfc;
    }
    iVar3 = *(int *)(extraout_ECX + 0x58);
    if (*(int *)(extraout_ECX + 0x58) == 0) {
      iVar3 = DAT_00980dfc;
    }
    uVar1 = FUN_008858f0(iVar3,iVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      uVar1 = FUN_0077055e(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      FUN_00771fce();
    }
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = FUN_008569e9(unaff_EBP + -0x18,iVar4);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    } while (iVar4 < 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2cb8);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + -4);
      }
      if (iVar4 <= *(int *)(unaff_EBP + -0x10)) break;
      FUN_0085682d(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x1c,unaff_EBP + -0x48);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + -0x84) = 0;
        *(undefined4 *)(unaff_EBP + -0x80) = 0;
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        *(int *)(unaff_EBP + -0x88) = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00414edd(unaff_EBP + -0x48,0xffffffff);
        iVar4 = *(int *)(unaff_EBP + -0x3b);
        *(int *)(unaff_EBP + -0x7c) = iVar4;
        if (iVar4 == -1) {
          puVar6 = &DAT_0096b794;
        }
        else {
          puVar6 = (undefined *)FUN_00482a39(iVar4);
        }
        FUN_00414edd(puVar6,0xffffffff);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x37);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x33);
        uVar1 = FUN_008569e9(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + -0x33));
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414f8b(uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414ebb();
        iVar4 = unaff_EBP + -0x88;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        FUN_007826fd(0xffffffff);
        FUN_00772d62(iVar4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00770582();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
    FUN_007733df();
    FUN_007733df();
    if (*(int *)(extraout_ECX + 0xd4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(extraout_ECX + 0xd4) + -4);
    }
    if (*(int *)(extraout_ECX + 0x150) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x150) + -4);
    }
    *(int *)(*(int *)(extraout_ECX + 0x28) + 0x77c) = iVar3 + iVar4;
    FUN_0077f304();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


