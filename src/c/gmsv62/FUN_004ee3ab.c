/* FUN_004ee3ab - 0x004ee3ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ee3ab(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  int *local_5c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d8) = *(undefined4 *)(unaff_EBP + 0x10);
  if (iVar2 == 0) {
    if (*(int **)(extraout_ECX + 0x24) != (int *)0x0) {
      local_5c = (int *)0x0;
      iStack_64 = 0x4ee3e7;
      piStack_60 = *(int **)(extraout_ECX + 0x24);
      FUN_0043405b();
    }
    local_5c = (int *)0x4ee3ee;
    FUN_005a7912();
    local_5c = (int *)0x4ee3f5;
    FUN_005a73c5();
    if ((*(int *)(extraout_ECX + 0x1f0) == 0) && (DAT_00978360 != 0)) {
      local_5c = (int *)0x1388;
      piStack_60 = (int *)0x0;
      iStack_64 = 0;
      piStack_68 = (int *)0x4ee413;
      FUN_0073e6de();
    }
    *(undefined4 *)(extraout_ECX + 0x1d4) = 0;
  }
  else {
    local_5c = (int *)0x4ee420;
    uVar1 = FUN_007d1e08();
    local_5c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x1d4) = uVar1;
    piStack_60 = (int *)(unaff_EBP + 0x10);
    iStack_64 = 0x4ee438;
    FUN_004497f5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      local_5c = *(int **)(unaff_EBP + 8);
      piStack_60 = (int *)0x4ee449;
      iVar2 = FUN_0048b567();
      piVar3 = local_5c;
      if (iVar2 != 0) {
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        piStack_60 = piVar3;
        *(int ***)(unaff_EBP + 8) = &piStack_60;
        iStack_64 = 0x5ed;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee49d;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee4a4;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_64 = 0x4ee4ae;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + 8) = uVar1;
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee4be;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee4cb;
          FUN_00878dfb();
        }
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x24) = &piStack_60;
        iStack_64 = 0x70d;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee4ef;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee4f6;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_64 = 0x4ee500;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee510;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee51d;
          FUN_00878dfb();
        }
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x24) = &piStack_60;
        iStack_64 = 0xe7e;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee541;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee548;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_64 = 0x4ee552;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee562;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee56f;
          FUN_00878dfb();
        }
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x20) = &piStack_60;
        iStack_64 = 0x655;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee593;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee59a;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_64 = 0x4ee5a4;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee5b4;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee5c1;
          FUN_00878dfb();
        }
        local_5c = (int *)&DAT_0097812c;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x28) = &piStack_60;
        iStack_64 = 0x70e;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_68 = (int *)0x4ee5ea;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee5f1;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_64 = 0x4ee5fb;
        piStack_60 = (int *)FUN_004343c5();
        local_5c = (int *)0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        iStack_64 = 0x4ee60b;
        FUN_004184ca();
        local_5c = (int *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_60 = (int *)0x4ee618;
        piVar3 = (int *)FUN_00402bc3();
        piStack_60 = local_5c;
        if ((int)piVar3 < 0) {
          piStack_60 = (int *)0x4ee623;
          local_5c = piVar3;
          FUN_00878dfb();
          piStack_60 = extraout_ECX_00;
        }
        local_5c = (int *)&DAT_0097812c;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x28) = &piStack_60;
        iStack_64 = 0x70f;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_68 = (int *)0x4ee647;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee64e;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_64 = 0x4ee658;
        piStack_60 = (int *)FUN_004343c5();
        local_5c = (int *)0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_64 = 0x4ee668;
        FUN_004184ca();
        local_5c = (int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_60 = (int *)0x4ee675;
        piVar3 = (int *)FUN_00402bc3();
        piStack_60 = local_5c;
        if ((int)piVar3 < 0) {
          piStack_60 = (int *)0x4ee680;
          local_5c = piVar3;
          FUN_00878dfb();
          piStack_60 = extraout_ECX_01;
        }
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x28) = &piStack_60;
        iStack_64 = 0x710;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_68 = (int *)0x4ee6a4;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee6ab;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_64 = 0x4ee6b5;
        iVar2 = FUN_00412550();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_68 = (int *)0x4ee6ca;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee6d7;
          FUN_00878dfb();
        }
        local_5c = (int *)0x0;
        piStack_68 = (int *)&piStack_60;
        *(int ***)(unaff_EBP + -0x28) = &piStack_60;
        iStack_64 = 0x9a0;
        FUN_00679e4e();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_68 = (int *)0x4ee6fb;
        FUN_0040263d();
        piStack_68 = (int *)0x4ee702;
        piStack_60 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_64 = 0x4ee70c;
        iVar4 = FUN_00412550();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_68 = (int *)0x4ee721;
        local_5c = (int *)FUN_00402bc3();
        if ((int)local_5c < 0) {
          piStack_60 = (int *)0x4ee72e;
          FUN_00878dfb();
        }
        if ((*(short **)(unaff_EBP + -0x10) != (short *)0x0) &&
           (**(short **)(unaff_EBP + -0x10) != 0)) {
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            if (iVar2 == 0) {
              piStack_60 = (int *)0x64;
              iStack_64 = *(undefined4 *)(unaff_EBP + -0x14);
              piStack_68 = (int *)0x4ee776;
              local_5c = (int *)(uint)(iVar4 != 0);
              uVar1 = FUN_00433c19();
              *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x24) = uVar1;
            }
            else {
              local_5c = (int *)0x1;
              piStack_60 = (int *)0x3e8;
              iStack_64 = 1000;
              piStack_68 = (int *)(uint)(iVar4 != 0);
              FUN_0045af91(*(undefined4 *)(unaff_EBP + -0x14));
            }
          }
          piVar3 = (int *)0x0;
          if (DAT_00978360 != 0) {
            local_5c = (int *)0x4e20;
            piStack_60 = *(int **)(unaff_EBP + -0x1c);
            iStack_64 = *(undefined4 *)(unaff_EBP + 0xc);
            piStack_68 = (int *)0x4ee796;
            FUN_0073e6de();
            piVar3 = extraout_ECX_02;
          }
          if (*(int *)(unaff_EBP + 8) == 3) {
            piStack_60 = (int *)(unaff_EBP + -0x10);
            *(int ***)(unaff_EBP + 8) = &local_5c;
            local_5c = (int *)0x0;
            iStack_64 = 0x4ee7ad;
            FUN_00419192();
            piStack_60 = (int *)0x4ee7b5;
            FUN_005a7189();
          }
          else if (*(int *)(unaff_EBP + 8) == 4) {
            piStack_60 = (int *)(unaff_EBP + -0x10);
            *(int ***)(unaff_EBP + 8) = &local_5c;
            local_5c = (int *)0x0;
            iStack_64 = 0x4ee7ce;
            FUN_00419192();
            piStack_60 = (int *)0x4ee7d6;
            FUN_005a72b3();
          }
          else {
            local_5c = *(int **)(unaff_EBP + -0x20);
            piStack_60 = *(int **)(unaff_EBP + -0x24);
            iStack_64 = *(int *)(unaff_EBP + 8);
            *(int ***)(unaff_EBP + 8) = &piStack_68;
            piStack_68 = piVar3;
            FUN_004343e4(unaff_EBP + -0x10);
            FUN_005a55ec();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        local_5c = (int *)0x4ee804;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_5c = (int *)0x4ee810;
        FUN_00402676();
        local_5c = *(int **)(unaff_EBP + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (local_5c != (int *)0x0) {
          piStack_60 = (int *)0x4ee820;
          (**(code **)(*local_5c + 8))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_5c = (int *)0x4ee82c;
        FUN_00414ebb();
        goto LAB_004ee82c;
      }
    }
    local_5c = (int *)0x4ee456;
    FUN_004027eb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    local_5c = (int *)(*(int *)(unaff_EBP + 0xc) + -0xc);
    piStack_60 = (int *)0x4ee46e;
    FUN_00434e38();
  }
LAB_004ee82c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


