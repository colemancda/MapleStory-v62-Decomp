/* FUN_007b02be - 0x007b02be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b02be(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iVar2 = DAT_00978368;
  iStack_20 = unaff_EBP + -0x14;
  uStack_24 = 0x7b02e1;
  iStack_20 = FUN_004dee9b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_24 = 0x7b02f2;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x7b02fe;
  FUN_00414ebb();
  *(undefined2 *)(extraout_ECX + 0xd84) = *(undefined2 *)(iVar2 + 0x2cc4);
  *(undefined2 *)(extraout_ECX + 0xd88) = *(undefined2 *)(iVar2 + 0x2cc7);
  *(undefined1 *)(extraout_ECX + 0xd86) = *(undefined1 *)(iVar2 + 0x2cc6);
  *(undefined1 *)(extraout_ECX + 0xd8a) = *(undefined1 *)(iVar2 + 0x2cc9);
  iStack_20 = unaff_EBP + -0x10;
  uStack_24 = 0x7b033d;
  FUN_0079c916();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_20 = 0x7b0349;
  piVar1 = (int *)FUN_00429303();
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
    pcStack_40 = extraout_ECX_00;
  }
  else {
    iStack_20 = 0x7b0356;
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    pcStack_40 = extraout_ECX_01;
  }
  if ((((iVar2 == 10) || (iVar2 == 0xb)) &&
      (pcStack_40 = *(char **)(unaff_EBP + -0x10), pcStack_40 != (char *)0x0)) &&
     (*pcStack_40 != '\0')) {
    iStack_20 = *(undefined4 *)(extraout_ECX + 0x16fc);
    iStack_44 = extraout_ECX + 0xd74;
    uStack_24 = *(undefined4 *)(extraout_ECX + 0x1e38);
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0x3ed;
    *(char ***)(unaff_EBP + -0x18) = &pcStack_40;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x14) = &iStack_44;
    FUN_0041160e(extraout_ECX + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (iVar2 == 0xd) {
      iStack_20 = *(undefined4 *)(extraout_ECX + 0x16fc);
      iStack_44 = extraout_ECX + 0xd74;
      uStack_24 = *(undefined4 *)(extraout_ECX + 0x1e38);
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0x3ec;
      *(char ***)(unaff_EBP + -0x14) = &pcStack_40;
      FUN_00433bdf();
      *(int **)(unaff_EBP + -0x1c) = &iStack_44;
      FUN_0041160e(extraout_ECX + 0xd3c);
      uVar4 = 0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar3 = FUN_006ddf78(0xffffffff);
      uVar3 = FUN_0045f0f3(uVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uVar3 = FUN_004f5ef8(uVar3);
      FUN_00560272(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      goto LAB_007b049b;
    }
    uStack_28 = (uint)*(byte *)(extraout_ECX + 0xd8a);
    iStack_20 = 0;
    uStack_24 = *(undefined4 *)(extraout_ECX + 0x1e38);
    uStack_2c = (uint)*(ushort *)(extraout_ECX + 0xd88);
    uStack_30 = (uint)*(byte *)(extraout_ECX + 0xd86);
    uStack_34 = (uint)*(ushort *)(extraout_ECX + 0xd84);
    uStack_38 = 0;
    uStack_3c = 0x3ec;
    iStack_44 = extraout_ECX + 0xd74;
    *(char ***)(unaff_EBP + -0x1c) = &pcStack_40;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x18) = &iStack_44;
    FUN_0041160e(extraout_ECX + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  uVar3 = FUN_00449713();
  FUN_00560272(uVar3);
LAB_007b049b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


