/* FUN_0061636f - 0x0061636f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0061636f(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_4c;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x84) == 0) goto LAB_006166da;
  *(int *)(unaff_EBP + -0x14) = DAT_00978368 + 0x2e9c;
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_00964188;
  do {
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4 + **(int **)(unaff_EBP + -0x10) * 8) != 0) {
      uStack_28 = 0x6163c1;
      uStack_28 = FUN_0045e2eb();
      iStack_2c = 0x6163c9;
      FUN_0054e7b3();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 0x9641d8);
  uStack_28 = *(undefined4 *)(extraout_ECX + 0x150);
  iStack_2c = extraout_ECX + 0x148;
  uStack_30 = 0x616446;
  uVar1 = FUN_004cd670();
  uStack_30 = *(undefined4 *)(extraout_ECX + 0x138);
  iStack_34 = extraout_ECX + 0x130;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  uStack_38 = 0x61645b;
  uVar1 = FUN_004cd670();
  uStack_38 = *(undefined4 *)(extraout_ECX + 0x144);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iStack_3c = extraout_ECX + 0x13c;
  uStack_40 = 0x616470;
  uVar1 = FUN_004cd670();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  uStack_28 = 0x61648d;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x120) = uVar1;
  uStack_28 = 0x6164aa;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 300) = uVar1;
  uStack_28 = 0x6164c3;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x138) = uVar1;
  uStack_28 = 0x6164e0;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x144) = uVar1;
  uStack_28 = 0x6164fd;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x150) = uVar1;
  uStack_28 = 0x61651a;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x15c) = uVar1;
  uStack_28 = 0x616537;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x168) = uVar1;
  uStack_28 = 0x616554;
  uVar1 = FUN_0055a766();
  iVar2 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x174) = uVar1;
  if (*(int *)(iVar2 + 4 + (&DAT_009641d8)[*(int *)(extraout_ECX + 0x8c) * 2] * 8) == 0) {
    uStack_28 = *(undefined4 *)(extraout_ECX + 0x180);
    iStack_2c = extraout_ECX + 0x178;
    uStack_30 = 0x616583;
    iVar2 = FUN_004cd670();
    if (iVar2 == 0) goto LAB_006165cc;
    uStack_28 = 0x616592;
    uVar1 = FUN_0055a766();
    *(undefined4 *)(extraout_ECX + 0x180) = uVar1;
    uStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
    uStack_38 = 0;
    iStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0x3eb;
    iStack_4c = extraout_ECX + 0x80;
    *(undefined1 **)(unaff_EBP + -0x20) = auStack_48;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x24) = &iStack_4c;
    FUN_0041160e(extraout_ECX + 0x114);
LAB_00616642:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar1 = FUN_00449713();
    FUN_00560272(uVar1);
  }
  else {
LAB_006165cc:
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4 +
                (&DAT_009641d8)[*(int *)(extraout_ECX + 0x8c) * 2] * 8) != 0) {
      uStack_28 = *(undefined4 *)(extraout_ECX + 0x180);
      iStack_2c = extraout_ECX + 0x178;
      uStack_30 = 0x6165f5;
      iVar2 = FUN_004cd670();
      if (iVar2 == 0) {
        uStack_28 = 0x616605;
        uVar1 = FUN_0055a766();
        *(undefined4 *)(extraout_ECX + 0x180) = uVar1;
        uStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0;
        iStack_34 = 0;
        uStack_38 = 0;
        iStack_3c = 0;
        uStack_40 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x10);
        iStack_4c = extraout_ECX + 0x80;
        uStack_44 = 0x3eb;
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_48;
        FUN_00433bdf();
        *(int **)(unaff_EBP + -0x20) = &iStack_4c;
        FUN_0041160e(extraout_ECX + 0x114);
        goto LAB_00616642;
      }
    }
  }
  uStack_28 = 0x616682;
  uVar1 = FUN_0055a766();
  uStack_28 = *(undefined4 *)(extraout_ECX + 0x150);
  *(undefined4 *)(extraout_ECX + 0x18c) = uVar1;
  iStack_2c = extraout_ECX + 0x148;
  uStack_30 = 0x61669a;
  iVar2 = FUN_004cd670();
  if (*(int *)(unaff_EBP + -0x10) == iVar2) {
    uStack_28 = *(undefined4 *)(extraout_ECX + 0x138);
    iStack_2c = extraout_ECX + 0x130;
    uStack_30 = 0x6166b3;
    iVar2 = FUN_004cd670();
    if (*(int *)(unaff_EBP + -0x18) == iVar2) {
      uStack_28 = *(undefined4 *)(extraout_ECX + 0x144);
      iStack_2c = extraout_ECX + 0x13c;
      uStack_30 = 0x6166cc;
      iVar2 = FUN_004cd670();
      if (*(int *)(unaff_EBP + -0x1c) == iVar2) goto LAB_006166da;
    }
  }
  *(undefined4 *)(extraout_ECX + 400) = 0;
LAB_006166da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


