/* FUN_00552209 - 0x00552209 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552209(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined1 *puVar8;
  undefined4 extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *extraout_ECX_07;
  undefined *extraout_ECX_08;
  int unaff_EBP;
  float10 fVar9;
  undefined1 *puStack_54;
  undefined *puStack_50;
  undefined *local_4c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  local_4c = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_54;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&puStack_54,0x3b4);
  iVar3 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_54 = (undefined1 *)0x55225c;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    local_4c = (undefined *)(unaff_EBP + -0x14);
    puStack_50 = (undefined *)0x552272;
    local_4c = (undefined *)FUN_00404b30();
    if (((int)local_4c < 0) && (local_4c != (undefined *)0x80004002)) {
      puStack_50 = (undefined *)0x552283;
      FUN_00878dfb();
    }
  }
  local_4c = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_50 = (undefined *)0x552290;
  local_4c = (undefined *)FUN_00402bc3();
  if ((int)local_4c < 0) {
    puStack_50 = (undefined *)0x55229b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  local_4c = (undefined *)0x5522a6;
  FUN_005596c1();
  puStack_50 = *(undefined **)(unaff_EBP + -0x24);
  local_4c = (undefined *)0x0;
  *(undefined4 *)(puStack_50 + 4) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0xea6;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_54 = (undefined1 *)0x5522e8;
  uVar4 = FUN_00412550();
  local_4c = (undefined *)0x5522f4;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x552304;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x55230f;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_00;
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x63f;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_54 = (undefined1 *)0x552344;
  uVar4 = FUN_00412550();
  local_4c = (undefined *)0x552350;
  puVar6 = (undefined4 *)FUN_00559494();
  *puVar6 = uVar4;
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x55235f;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x55236a;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_01;
  }
  local_4c = (undefined *)0x64;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x641;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_54 = (undefined1 *)0x5523a0;
  uVar4 = FUN_00412550();
  local_4c = (undefined *)0x5523ac;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x1c) = uVar4;
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x5523bc;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x5523c7;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_02;
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x642;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_54 = (undefined1 *)0x5523fc;
  uVar4 = FUN_00412550();
  local_4c = (undefined *)0x552408;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x552418;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x552423;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_03;
  }
  local_4c = _DAT_008eba4c;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x643;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_54 = (undefined1 *)0x552461;
  fVar9 = (float10)FUN_00559bc7();
  *(float *)(unaff_EBP + 8) = (float)fVar9;
  local_4c = (undefined *)0x55246f;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(unaff_EBP + 8);
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x552482;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x55248d;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_04;
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x644;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_54 = (undefined1 *)0x5524c7;
  fVar9 = (float10)FUN_00559bc7();
  *(float *)(unaff_EBP + 8) = (float)fVar9;
  local_4c = (undefined *)0x5524d5;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(unaff_EBP + 8);
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x5524e8;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x5524f3;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_05;
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0x645;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_54 = (undefined1 *)0x552528;
  uVar4 = FUN_00412550();
  local_4c = (undefined *)0x552534;
  iVar3 = FUN_00559494();
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x552544;
  puVar5 = (undefined *)FUN_00402bc3();
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x55254f;
    local_4c = puVar5;
    FUN_00878dfb();
    local_4c = extraout_ECX_06;
  }
  puStack_54 = (undefined1 *)&local_4c;
  *(undefined ***)(unaff_EBP + 8) = &local_4c;
  puStack_50 = (undefined *)0x646;
  FUN_00679e4e();
  puStack_50 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_54 = (undefined1 *)0x552572;
  FUN_0040263d();
  puStack_54 = (undefined1 *)0x552579;
  psVar7 = (short *)FUN_004048a4();
  sVar1 = *psVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (sVar1 == 8) {
    puStack_50 = *(undefined **)(psVar7 + 4);
  }
  else {
    puStack_50 = &DAT_0097812c;
  }
  local_4c = (undefined *)0xffffffff;
  puStack_54 = (undefined1 *)0x55259d;
  FUN_00454081();
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x5525aa;
  puVar5 = (undefined *)FUN_00402bc3();
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x5525b5;
    local_4c = puVar5;
    FUN_00878dfb();
    local_4c = extraout_ECX_07;
  }
  puStack_54 = (undefined1 *)&local_4c;
  *(undefined ***)(unaff_EBP + 8) = &local_4c;
  puStack_50 = (undefined *)0x647;
  FUN_00679e4e();
  puStack_50 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_54 = (undefined1 *)0x5525d8;
  FUN_0040263d();
  puStack_54 = (undefined1 *)0x5525df;
  psVar7 = (short *)FUN_004048a4();
  sVar1 = *psVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (sVar1 == 8) {
    puStack_50 = *(undefined **)(psVar7 + 4);
  }
  else {
    puStack_50 = &DAT_0097812c;
  }
  local_4c = (undefined *)0xffffffff;
  puStack_54 = (undefined1 *)0x5525fe;
  FUN_00454081();
  local_4c = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_50 = (undefined *)0x55260b;
  puVar5 = (undefined *)FUN_00402bc3();
  puStack_50 = local_4c;
  if ((int)puVar5 < 0) {
    puStack_50 = (undefined *)0x552616;
    local_4c = puVar5;
    FUN_00878dfb();
    puStack_50 = extraout_ECX_08;
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0xea2;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_54 = (undefined1 *)0x55264b;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_4c = (undefined *)FUN_00402bc3();
  if ((int)local_4c < 0) {
    puStack_50 = (undefined *)0x552668;
    FUN_00878dfb();
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_50;
  puStack_54 = (undefined1 *)0xea3;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_54 = (undefined1 *)0x55269d;
  uVar4 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_4c = (undefined *)FUN_00402bc3();
  if ((int)local_4c < 0) {
    puStack_50 = (undefined *)0x5526ba;
    FUN_00878dfb();
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + -0x20) = &puStack_50;
  puStack_54 = (undefined1 *)0xea4;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_54 = (undefined1 *)0x5526ef;
  puVar8 = (undefined1 *)FUN_00412550();
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_4c = (undefined *)FUN_00402bc3();
  if ((int)local_4c < 0) {
    puStack_50 = (undefined *)0x55270b;
    FUN_00878dfb();
  }
  local_4c = (undefined *)0x0;
  *(undefined ***)(unaff_EBP + -0x20) = &puStack_50;
  puStack_54 = (undefined1 *)0xea5;
  FUN_00679e4e(&puStack_50);
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  puStack_50 = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_54 = (undefined1 *)0x552740;
  puVar5 = (undefined *)FUN_00412550();
  puStack_54 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_4c = (undefined *)FUN_00402bc3();
  if ((int)local_4c < 0) {
    puStack_50 = (undefined *)0x55275c;
    FUN_00878dfb();
  }
  puStack_50 = *(undefined **)(unaff_EBP + 8);
  puStack_54 = puVar8;
  local_4c = puVar5;
  (*DAT_0097b504)(*(int *)(unaff_EBP + -0x24) + 8,*(undefined4 *)(unaff_EBP + -0x18));
  FUN_0055a2c5(*(int *)(unaff_EBP + -0x24) + 4,unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00559845(0);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


