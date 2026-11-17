/* FUN_008482df - 0x008482df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_008482df(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *puVar9;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *puVar10;
  undefined *extraout_ECX_07;
  int unaff_EBP;
  undefined *puStack_74;
  int iStack_70;
  undefined *puStack_6c;
  undefined *puStack_68;
  undefined *local_64;
  
  FUN_00879bb8();
  puVar10 = *(undefined **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  local_64 = (undefined *)0x8482fc;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  *(uint *)(unaff_EBP + -0x50) = uVar2;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (uVar2 != 4) {
LAB_00848337:
    local_64 = (undefined *)(unaff_EBP + -0x20);
    puStack_68 = (undefined *)0x848342;
    local_64 = (undefined *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_68 = (undefined *)0x84834f;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar9 = extraout_ECX_01;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      puStack_68 = (undefined *)0x848363;
      FUN_00434e38();
      puVar9 = local_64;
    }
    if (uVar2 == 3) {
      local_64 = (undefined *)0x848370;
      uVar3 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x14) = uVar3 & 0xff;
      local_64 = (undefined *)0x84837d;
      uVar3 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x18) = uVar3 & 0xff;
      puVar9 = extraout_ECX_02;
      goto switchD_008483ef_switchD;
    }
    if (uVar2 == 8) {
      local_64 = (undefined *)0x848391;
      uVar3 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x14) = uVar3 & 0xff;
      local_64 = (undefined *)0x84839e;
      uVar3 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x18) = uVar3 & 0xff;
      local_64 = (undefined *)0x8483ab;
      cVar1 = FUN_0042452b();
      puVar9 = extraout_ECX_03;
      if (cVar1 == '\0') goto switchD_008483ef_switchD;
      puStack_68 = (undefined *)(unaff_EBP + -0x60);
      puStack_6c = (undefined *)0x8483b9;
      local_64 = puVar10;
      uVar4 = FUN_004b57d7();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_64 = (undefined *)0x8483c9;
      FUN_0052e11f();
      local_64 = (undefined *)0x8483d1;
      FUN_0046575e();
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_64 = (undefined *)0x8483e6;
      FUN_0046575e();
      puVar9 = extraout_ECX_04;
    }
    if (uVar2 < 0xb) goto switchD_008483ef_switchD;
    goto LAB_00848b2f;
  }
  local_64 = (undefined *)0x848329;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x24) = uVar3 & 0xff;
  puVar9 = extraout_ECX_00;
  if ((uVar3 & 0xff) != 0) goto LAB_00848337;
switchD_008483ef_switchD:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_64 = (undefined *)0x369;
    puStack_68 = (undefined *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_6c = (undefined *)0x848410;
    FUN_00679d22();
    local_64 = &DAT_00964364;
    puStack_68 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_6c = (undefined *)0x848424;
    FUN_004653c5();
    local_64 = (undefined *)(unaff_EBP + 8);
    puStack_68 = (undefined *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_6c = (undefined *)0x848437;
    local_64 = (undefined *)FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_68 = (undefined *)0x848444;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_64 = extraout_ECX_05;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x28) + -0xc);
      puStack_68 = (undefined *)0x848458;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
      puStack_68 = (undefined *)0x84846d;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puVar10 = local_64;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x30) + -0xc);
      puStack_68 = (undefined *)0x848482;
      FUN_00434e38();
      puVar10 = local_64;
    }
    if (DAT_00978360 == 0) {
      local_64 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_6c = (undefined *)0x0;
      iStack_70 = 0;
      *(undefined ***)(unaff_EBP + -0x50) = &puStack_74;
      puStack_74 = puVar10;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
    }
    else {
      puStack_68 = (undefined *)(unaff_EBP + -0x10);
      local_64 = (undefined *)0xa;
      puStack_6c = (undefined *)0x848496;
      FUN_00471102();
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008484bc;
  case 1:
    puStack_68 = (undefined *)0x1;
    *(undefined ***)(unaff_EBP + -0x50) = &puStack_74;
    goto LAB_00848a78;
  case 2:
    local_64 = (undefined *)0x8485c0;
    iVar5 = FUN_00429303();
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      local_64 = (undefined *)0x8485c9;
      FUN_00429303();
      local_64 = (undefined *)0x8485d4;
      uVar2 = FUN_004f162d();
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    local_64 = (undefined *)0x8485e8;
    uVar3 = FUN_0045e4b8();
    if (((uVar3 & 1) == 0) && ((int)(((ulonglong)uVar2 / 1000000) % 100) == 9)) {
LAB_008487aa:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_64 = (undefined *)0x8487b5;
      FUN_0046575e();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_64 = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
        puStack_68 = (undefined *)0x8487cd;
        FUN_00434e38();
      }
      goto LAB_00848b46;
    }
    local_64 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_6c = &DAT_00964da4;
    iStack_70 = 0x848617;
    local_64 = (undefined *)FUN_004538dc();
    puStack_68 = (undefined *)(unaff_EBP + -0x18);
    puStack_6c = (undefined *)0x848624;
    FUN_0045e070();
    iVar5 = *(int *)(iVar5 + 0x2098);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar5 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puStack_68 = (undefined *)(iVar5 + 4);
    }
    local_64 = *(undefined **)(unaff_EBP + -0x18);
    puStack_6c = (undefined *)0x848643;
    iVar5 = (*DAT_0097b4bc)();
    if (iVar5 != 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
      }
      local_64 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_6c = &DAT_00964da4;
      iStack_70 = 0x848664;
      iVar6 = FUN_004538dc();
      local_64 = (undefined *)((iVar5 - iVar6) + -3);
      puStack_68 = (undefined *)(unaff_EBP + -0x10);
      puStack_6c = (undefined *)0x848676;
      FUN_0045e08c();
      local_64 = (undefined *)0x1;
      puStack_68 = (undefined *)0x0;
      puStack_6c = (undefined *)0x1;
      iStack_70 = 0x400;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_74 = (undefined *)0x84868c;
      puStack_6c = (undefined *)FUN_00415015();
      iStack_70 = 0x848692;
      FUN_00471777();
      local_64 = (undefined *)0xffffffff;
      puStack_68 = (undefined *)0x84869f;
      FUN_004150c0();
      local_64 = (undefined *)0x707;
      puStack_68 = (undefined *)(unaff_EBP + -0x40);
      puStack_6c = (undefined *)0x8486b2;
      puVar7 = (undefined4 *)FUN_00679d22();
      local_64 = *(undefined **)(unaff_EBP + -0x10);
      puStack_6c = (undefined *)*puVar7;
      puStack_68 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_70 = unaff_EBP + 8;
      puStack_74 = (undefined *)0x8486c8;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        local_64 = (undefined *)(*(int *)(unaff_EBP + -0x40) + -0xc);
        puStack_68 = (undefined *)0x8486df;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        local_64 = (undefined *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        puStack_68 = (undefined *)0x8486f4;
        FUN_00434e38();
      }
    }
    puStack_68 = (undefined *)(unaff_EBP + 8);
    local_64 = (undefined *)0xd;
    puStack_6c = (undefined *)0x848700;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    local_64 = (undefined *)(unaff_EBP + -0x14);
    puStack_68 = (undefined *)0x1;
    puStack_6c = (undefined *)0x400;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_70 = 0x84871c;
    puStack_68 = (undefined *)FUN_00415015();
    puStack_6c = (undefined *)0x848722;
    iVar5 = FUN_00471a4c();
    local_64 = (undefined *)0xffffffff;
    puStack_68 = (undefined *)0x848730;
    FUN_004150c0();
    if (iVar5 != 0) {
      puStack_68 = (undefined *)(unaff_EBP + -0x14);
      local_64 = (undefined *)0x8;
      puStack_6c = (undefined *)0x84873f;
      FUN_00471102();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      puStack_68 = (undefined *)0x848755;
      FUN_00434e38();
    }
    iVar5 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008484bc;
  default:
    local_64 = (undefined *)0x848767;
    iVar5 = FUN_00429303();
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      local_64 = (undefined *)0x848770;
      FUN_00429303();
      local_64 = (undefined *)0x84877b;
      uVar2 = FUN_004f162d();
    }
    local_64 = (undefined *)0x84878f;
    uVar3 = FUN_0045e4b8();
    if (((uVar3 & 1) == 0) && ((int)(((ulonglong)uVar2 / 1000000) % 100) == 9)) goto LAB_008487aa;
    local_64 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_6c = &DAT_00964da4;
    iStack_70 = 0x8487e3;
    local_64 = (undefined *)FUN_004538dc();
    puStack_68 = (undefined *)(unaff_EBP + -0x24);
    puStack_6c = (undefined *)0x8487f0;
    FUN_0045e070();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
    }
    local_64 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_6c = &DAT_00964da4;
    iStack_70 = 0x84880d;
    iVar6 = FUN_004538dc();
    local_64 = (undefined *)((iVar5 - iVar6) + -3);
    puStack_68 = (undefined *)(unaff_EBP + -0x10);
    puStack_6c = (undefined *)0x84881f;
    FUN_0045e08c();
    iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2098);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar5 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puStack_68 = (undefined *)(iVar5 + 4);
    }
    local_64 = *(undefined **)(unaff_EBP + -0x24);
    puStack_6c = (undefined *)0x848841;
    iVar5 = (*DAT_0097b4bc)();
    if (iVar5 != 0) {
      local_64 = (undefined *)0x1;
      puStack_68 = (undefined *)0x0;
      puStack_6c = (undefined *)0x1;
      iStack_70 = 0x400;
      puStack_74 = (undefined *)0x848857;
      puStack_6c = (undefined *)FUN_00415015();
      iStack_70 = 0x84885d;
      FUN_00471777();
      local_64 = (undefined *)0xffffffff;
      puStack_68 = (undefined *)0x84886a;
      FUN_004150c0();
    }
    if (*(int *)(unaff_EBP + -0x54) != 0) {
      local_64 = (undefined *)0x84887e;
      local_64 = (undefined *)FUN_0045e2eb();
      puStack_68 = (undefined *)(unaff_EBP + -0x48);
      puStack_6c = (undefined *)0x84888e;
      puVar7 = (undefined4 *)FUN_0045a1d8();
      local_64 = (undefined *)0x110a;
      puStack_68 = (undefined *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puStack_6c = (undefined *)0x8488a4;
      puVar8 = (undefined4 *)FUN_00679d22();
      local_64 = *(undefined **)(unaff_EBP + -0x10);
      puStack_6c = (undefined *)*puVar8;
      puStack_68 = (undefined *)*puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_70 = unaff_EBP + -0x10;
      puStack_74 = (undefined *)0x8488b9;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        local_64 = (undefined *)(*(int *)(unaff_EBP + -0x44) + -0xc);
        puStack_68 = (undefined *)0x8488d0;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        local_64 = (undefined *)(*(int *)(unaff_EBP + -0x48) + -0xc);
        puStack_68 = (undefined *)0x8488e5;
        FUN_00434e38();
      }
    }
    local_64 = (undefined *)0x707;
    puStack_68 = (undefined *)(unaff_EBP + -0x4c);
    puStack_6c = (undefined *)0x8488f6;
    puVar7 = (undefined4 *)FUN_00679d22();
    local_64 = *(undefined **)(unaff_EBP + -0x10);
    puStack_6c = (undefined *)*puVar7;
    puStack_68 = *(undefined **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_70 = unaff_EBP + 8;
    puStack_74 = (undefined *)0x84890c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    local_64 = extraout_ECX_07;
    if (*(int *)(unaff_EBP + -0x4c) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x4c) + -0xc);
      puStack_68 = (undefined *)0x848923;
      FUN_00434e38();
    }
    if (DAT_00978360 != 0) {
      *(undefined ***)(unaff_EBP + -0x1c) = &puStack_68;
      puStack_6c = (undefined *)0x84893e;
      puStack_68 = local_64;
      local_64 = *(undefined **)(unaff_EBP + -0x54);
      FUN_0052e11f();
      puStack_6c = *(undefined **)(unaff_EBP + -0x18);
      iStack_70 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_74 = (undefined *)((*(int *)(unaff_EBP + -0x50) != 3) + 0xe);
      uVar4 = FUN_00449713();
      FUN_00449784(uVar4);
      FUN_00743a59(uVar4);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    local_64 = (undefined *)(unaff_EBP + -0x20);
    puStack_68 = (undefined *)0x1;
    puStack_6c = (undefined *)0x400;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_70 = 0x848984;
    puStack_68 = (undefined *)FUN_00415015();
    puStack_6c = (undefined *)0x84898a;
    iVar5 = FUN_00471a4c();
    local_64 = (undefined *)0xffffffff;
    puStack_68 = (undefined *)0x848998;
    FUN_004150c0();
    if (iVar5 != 0) {
      puStack_68 = (undefined *)(unaff_EBP + -0x20);
      local_64 = (undefined *)0x8;
      puStack_6c = (undefined *)0x8489a7;
      FUN_00471102();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      puStack_68 = (undefined *)0x8489bd;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      puStack_68 = (undefined *)0x8489d2;
      FUN_00434e38();
    }
    iVar5 = *(int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008484bc;
  case 4:
    if (((*(int *)(unaff_EBP + -0x24) == 0) || (*(char **)(unaff_EBP + 8) == (char *)0x0)) ||
       (**(char **)(unaff_EBP + 8) == '\0')) {
      if (DAT_0097bce4 != 0) {
        local_64 = (undefined *)0x848a35;
        FUN_00815de9();
        if (DAT_0097bce4 != 0) {
          local_64 = (undefined *)0x1;
          puStack_68 = (undefined *)0x848a4b;
          (*(code *)**(undefined4 **)(DAT_0097bce4 + 8))();
        }
      }
    }
    else {
      if (DAT_0097bce4 == 0) {
        local_64 = (undefined *)0x8489fc;
        FUN_0084e9b9();
      }
      puStack_68 = (undefined *)(unaff_EBP + 8);
      *(undefined ***)(unaff_EBP + -0x50) = &local_64;
      local_64 = (undefined *)0x0;
      puStack_6c = (undefined *)0x848a0d;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_68 = (undefined *)0x848a16;
      FUN_0084e9fb();
      puStack_68 = (undefined *)0x848a1d;
      FUN_0069b151();
    }
    break;
  case 5:
    local_64 = (undefined *)0xc;
LAB_00848a5e:
    puStack_68 = (undefined *)(unaff_EBP + 8);
    puStack_6c = (undefined *)0x848a67;
    FUN_00471102();
    break;
  case 6:
    if (DAT_00978360 != 0) {
      local_64 = (undefined *)0xa;
      goto LAB_00848a5e;
    }
    puStack_68 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x50) = &puStack_74;
LAB_00848a78:
    local_64 = (undefined *)0x0;
    puStack_6c = (undefined *)0x0;
    iStack_70 = 0;
    puStack_74 = puVar9;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    break;
  case 7:
    local_64 = (undefined *)0x69c;
    puStack_68 = (undefined *)0x848a9d;
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x50) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      local_64 = (undefined *)0x848aaf;
      iVar5 = FUN_007e62e9();
    }
    uVar2 = -(uint)(iVar5 != 0) & iVar5 + 8U;
    *(uint *)(unaff_EBP + -0x5c) = -(uint)(uVar2 != 0) & uVar2 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_64 = (undefined *)0x848ad6;
    FUN_004c26c4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    local_64 = (undefined *)0x848ae1;
    uVar4 = FUN_0042459a();
    local_64 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    iStack_70 = unaff_EBP + 8;
    *(undefined ***)(unaff_EBP + -0x50) = &puStack_6c;
    puStack_74 = (undefined *)0x848af4;
    FUN_00450368();
    puStack_74 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_70 = uVar4;
    FUN_004c2677();
    FUN_007eddac();
    local_64 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_6c = (undefined *)0x848b13;
    FUN_007edf11();
    local_64 = (undefined *)0x848b1b;
    FUN_007e6e3c();
    local_64 = (undefined *)0x848b23;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_64 = (undefined *)0x848b2f;
    FUN_004c26e1();
    break;
  case 9:
  case 10:
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_64 = (undefined *)0x369;
    puStack_68 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_6c = (undefined *)0x8484ec;
    FUN_00679d22();
    local_64 = &DAT_00964364;
    puStack_68 = (undefined *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_6c = (undefined *)0x848500;
    FUN_004653c5();
    local_64 = (undefined *)(unaff_EBP + 8);
    puStack_68 = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_6c = (undefined *)0x848513;
    local_64 = (undefined *)FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_68 = (undefined *)0x848520;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_64 = extraout_ECX_06;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x34) + -0xc);
      puStack_68 = (undefined *)0x848534;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x38) + -0xc);
      puStack_68 = (undefined *)0x848549;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puVar10 = local_64;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      local_64 = (undefined *)(*(int *)(unaff_EBP + -0x3c) + -0xc);
      puStack_68 = (undefined *)0x84855e;
      FUN_00434e38();
      puVar10 = local_64;
    }
    if (DAT_00978360 == 0) {
      local_64 = (undefined *)0x0;
      puStack_68 = (undefined *)0x0;
      puStack_6c = (undefined *)0x0;
      iStack_70 = 0;
      *(undefined ***)(unaff_EBP + -0x50) = &puStack_74;
      puStack_74 = puVar10;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
    }
    else {
      puStack_68 = (undefined *)(unaff_EBP + -0x10);
      local_64 = (undefined *)0xa;
      puStack_6c = (undefined *)0x848572;
      FUN_00471102();
    }
    local_64 = *(undefined **)(unaff_EBP + -0x10);
    puStack_68 = (undefined *)0x84859f;
    FUN_0082812c();
    iVar5 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_008484bc:
    if (iVar5 != 0) {
      local_64 = (undefined *)(iVar5 + -0xc);
      puStack_68 = (undefined *)0x8484cd;
      FUN_00434e38();
    }
  }
LAB_00848b2f:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_64 = (undefined *)0x848b3a;
  FUN_0046575e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_64 = (undefined *)0x848b46;
  FUN_00414ebb();
LAB_00848b46:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


