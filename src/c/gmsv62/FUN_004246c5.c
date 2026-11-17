/* FUN_004246c5 - 0x004246c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004246c5(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  int iStack_dc;
  int iStack_d8;
  undefined4 *local_d4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  local_d4 = (undefined4 *)0x4246e5;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_d4 = (undefined4 *)(unaff_EBP + -0x14);
  iStack_d8 = unaff_EBP + -0x30;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_dc = 0x424700;
  iVar4 = FUN_004253e4();
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_d4 = (undefined4 *)0x424710;
    FUN_00424ff8();
  }
  else {
    local_d4 = *(undefined4 **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 8) = &iStack_d8;
    iStack_dc = 0x424727;
    iStack_d8 = extraout_ECX_00;
    FUN_00424fdb();
    iStack_dc = 0x42472e;
    FUN_00424aa1();
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar4 + -4);
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iVar4 = extraout_ECX;
    if (0 < *(int *)(unaff_EBP + -0x20)) {
      do {
        local_d4 = (undefined4 *)0x3;
        piVar1 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x3c) + *(int *)(unaff_EBP + 8) * 4)
        ;
        iStack_d8 = 0;
        iStack_dc = 0x42476f;
        FUN_004031b7();
        iVar4 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar4 == 0) {
          local_d4 = (undefined4 *)0x80004003;
          iStack_d8 = 0x424781;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x60);
        iStack_d8 = unaff_EBP + -0x24;
        iStack_dc = 0x424790;
        FUN_00425067();
        local_d4 = (undefined4 *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_d8 = 0x42479d;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4247a8;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)0x3;
        iStack_d8 = -2;
        iStack_dc = 0x4247b4;
        FUN_004031b7();
        iVar4 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar4 == 0) {
          local_d4 = (undefined4 *)0x80004003;
          iStack_d8 = 0x4247c6;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x40);
        iStack_d8 = unaff_EBP + -0x28;
        iStack_dc = 0x4247d5;
        FUN_0041141a();
        local_d4 = (undefined4 *)0x4247dd;
        FUN_004125e6();
        local_d4 = (undefined4 *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_d8 = 0x4247ea;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4247f5;
          FUN_00878dfb();
        }
        local_d4 = &DAT_00980690;
        iStack_d8 = 0x4247fe;
        FUN_00403191();
        local_d4 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_d8 = 0x42480b;
        FUN_00403191();
        local_d4 = (undefined4 *)0x3;
        iStack_d8 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_dc = 0x42481d;
        FUN_004031b7();
        local_d4 = (undefined4 *)0x3;
        iStack_d8 = -1;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_dc = 0x42482d;
        FUN_004031b7();
        local_d4 = (undefined4 *)0x3;
        iStack_d8 = 1000;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_dc = 0x424843;
        FUN_004031b7();
        iVar4 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar4 == 0) {
          local_d4 = (undefined4 *)0x80004003;
          iStack_d8 = 0x424855;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x70);
        iStack_d8 = unaff_EBP + -0x50;
        iStack_dc = unaff_EBP + -0xc0;
        FUN_004250ac(unaff_EBP + -0xd0,*(undefined4 *)(unaff_EBP + -0x24),unaff_EBP + -0xa0,
                     unaff_EBP + -0x80);
        local_d4 = (undefined4 *)(unaff_EBP + -0xd0);
        iStack_d8 = 0x42488c;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x424897;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0xa0);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_d8 = 0x4248a7;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4248b2;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x80);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_d8 = 0x4248bf;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4248ca;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_d8 = 0x4248da;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4248e5;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_d8 = 0x4248f2;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4248fd;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x70);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_d8 = 0x42490a;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x424915;
          FUN_00878dfb();
        }
        local_d4 = &DAT_00980690;
        iStack_d8 = 0x424921;
        FUN_00403191();
        local_d4 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_d8 = 0x424931;
        FUN_00403191();
        iVar4 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar4 == 0) {
          local_d4 = (undefined4 *)0x80004003;
          iStack_d8 = 0x424943;
          FUN_00878dfb();
        }
        piVar1 = (int *)*piVar1;
        iStack_dc = *(int *)(unaff_EBP + -0xac);
        iVar4 = *piVar1;
        iStack_d8 = *(int *)(unaff_EBP + -0xa8);
        local_d4 = *(undefined4 **)(unaff_EBP + -0xa4);
        *(int **)(unaff_EBP + -0x18) = piVar1;
        iVar4 = (**(code **)(iVar4 + 0x110))
                          (piVar1,0,*(undefined4 *)(unaff_EBP + -0x90),
                           *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                           *(undefined4 *)(unaff_EBP + -0x84),*(undefined4 *)(unaff_EBP + -0xb0));
        if (iVar4 < 0) {
          local_d4 = (undefined4 *)&DAT_00963df8;
          iStack_d8 = *(int *)(unaff_EBP + -0x18);
          iStack_dc = iVar4;
          FUN_00878e09();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0x90);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_d8 = 0x424993;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x42499e;
          FUN_00878dfb();
        }
        local_d4 = (undefined4 *)(unaff_EBP + -0xb0);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_d8 = 0x4249ae;
        local_d4 = (undefined4 *)FUN_00402bc3();
        if ((int)local_d4 < 0) {
          iStack_d8 = 0x4249b9;
          FUN_00878dfb();
        }
        puVar2 = *(undefined4 **)(unaff_EBP + 8);
        iStack_d8 = 0x4249c5;
        local_d4 = puVar2;
        FUN_00424e73();
        iStack_d8 = 0x4249cf;
        local_d4 = (undefined4 *)FUN_004255e1();
        local_d4 = (undefined4 *)*local_d4;
        *(undefined4 ***)(unaff_EBP + 8) = &local_d4;
        iStack_d8 = 0x4249de;
        FUN_00424ed4();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_d8 = 0x4249e7;
        FUN_00424e82();
        iStack_d8 = 0x4249ee;
        FUN_00427af9();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_d4 = (undefined4 *)0x4249fa;
        FUN_004125e6();
        iVar4 = (int)puVar2 + 1;
        *(int *)(unaff_EBP + 8) = iVar4;
      } while (iVar4 < *(int *)(unaff_EBP + -0x20));
      iVar4 = *(int *)(unaff_EBP + -0x2c);
    }
    uVar6 = *(uint *)(iVar4 + 0x10);
    while (uVar6 != 0) {
      iVar4 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
      uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar6 + 4);
      local_d4 = (undefined4 *)0x424a3e;
      FUN_00424fdb();
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar4 != 0) {
        local_d4 = (undefined4 *)0x424a4f;
        local_d4 = (undefined4 *)FUN_007d1e08();
        *(int **)(unaff_EBP + 8) = &iStack_dc;
        iStack_dc = extraout_ECX_01;
        iStack_d8 = extraout_ECX_01;
        FUN_00424e5b(unaff_EBP + -0x1c);
        FUN_00423801();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar6 = uVar5;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        local_d4 = (undefined4 *)0x0;
        iStack_d8 = 0x424a79;
        FUN_0042500e();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_d4 = (undefined4 *)0x0;
      iStack_d8 = 0x424a90;
      FUN_0042500e();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


