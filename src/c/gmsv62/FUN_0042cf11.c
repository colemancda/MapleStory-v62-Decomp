/* FUN_0042cf11 - 0x0042cf11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042cf11(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int iStack_10c;
  wchar_t *pwStack_108;
  int *local_104;
  int local_100;
  int local_fc;
  int *piStack_f8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    piStack_f8 = (int *)(unaff_EBP + 0x14);
    local_fc = 0x42cf71;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 5;
  }
  else {
    piStack_f8 = (int *)(unaff_EBP + -0x18);
    local_fc = 0x42cf51;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  piStack_f8 = (int *)0x42cf88;
  FUN_00419192();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
     *(int *)(unaff_EBP + 0x14) != 0)) {
    piStack_f8 = (int *)0x42cfa9;
    FUN_00403384();
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x18) != 0)) {
    piStack_f8 = (int *)0x42cfc7;
    FUN_00403384();
  }
  piStack_f8 = (int *)0x42cfd9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f8 = (int *)0x42cfe6;
  FUN_00403191();
  piStack_f8 = (int *)0x0;
  local_fc = unaff_EBP + -0xd0;
  local_100 = unaff_EBP + -0x50;
  *(int ***)(unaff_EBP + 0x14) = &local_104;
  pwStack_108 = u_Effect_BasicEff_img_EmptyCanvas__00964068;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_10c = 0x42d007;
  local_104 = extraout_ECX_00;
  FUN_004033a1();
  pwStack_108 = (wchar_t *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_10c = 0x42d017;
  FUN_00405a1d();
  iStack_10c = 0x42d01e;
  FUN_00402660();
  iStack_10c = 0x42d025;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_fc = 0x42d030;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    piStack_f8 = (int *)0x42d046;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_f8 = (int *)0x42d057;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_f8 = (int *)0x42d067;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_f8 = (int *)0x42d072;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_f8 = (int *)0x42d07f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_f8 = (int *)0x42d08a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_f8 = (int *)0x42d09a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_f8 = (int *)0x42d0a5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  while( true ) {
    if (-1 < *(int *)(unaff_EBP + -0x10)) {
      FUN_0087a1b0();
      local_fc = *(undefined4 *)(unaff_EBP + -0x10);
      local_100 = 0x42d0c7;
      piStack_f8 = (int *)&stack0xffffff10;
      FUN_0087a25a();
    }
    piStack_f8 = (int *)(unaff_EBP + -0x30);
    local_fc = 0x42d0e6;
    puVar2 = (undefined4 *)FUN_00679d86();
    local_fc = *puVar2;
    piStack_f8 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    local_100 = unaff_EBP + -0x20;
    local_104 = (int *)0x42d0fa;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar1 = extraout_ECX_01;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      iVar1 = *(int *)(unaff_EBP + -0x30) + -0xc;
      piStack_f8 = (int *)0x42d111;
      FUN_00403384();
    }
    piStack_f8 = (int *)0xff;
    local_fc = 3;
    local_104 = (int *)(unaff_EBP + 0x10);
    *(int **)(unaff_EBP + -0x14) = &local_100;
    pwStack_108 = L"块赑౅첋斉僔ꗨj＀ࡵ䶍웠ﱅ\xe80b䓸\xfffe赐ᑅ\xe850ኝ";
    local_100 = iVar1;
    FUN_0041160e();
    local_104 = (int *)0x0;
    pwStack_108 = (wchar_t *)0x0;
    *(int **)(unaff_EBP + -0x2c) = &iStack_10c;
    iStack_10c = extraout_ECX_02;
    FUN_00433bdf(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar3 = FUN_00411641(*(undefined4 *)(unaff_EBP + 8));
    FUN_0042e3f0(unaff_EBP + 0x14,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + 0x14) == 0) break;
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      uVar3 = FUN_0042d476();
      piStack_f8 = (int *)0x42d17e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_f8 = (int *)0x42d18b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_f8 = (int *)0x42d19b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_f8 = (int *)0x42d1ab;
      FUN_00403191();
      piStack_f8 = (int *)0xc30;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      local_fc = 0x42d1be;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        piStack_f8 = (int *)0x42d1d1;
        FUN_00878dfb();
      }
      piStack_f8 = (int *)(unaff_EBP + -0x60);
      local_fc = unaff_EBP + -0xa0;
      local_100 = unaff_EBP + -0xc0;
      local_104 = (int *)(unaff_EBP + -0x80);
      pwStack_108 = *(wchar_t **)(unaff_EBP + -0x24);
      iStack_10c = unaff_EBP + -0xf0;
      FUN_004250ac();
      piStack_f8 = (int *)0x42d209;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d214;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_f8 = (int *)0x42d221;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d22c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_f8 = (int *)0x42d23c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d247;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_f8 = (int *)0x42d257;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d262;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_f8 = (int *)0x42d26f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d27a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_f8 = (int *)0x42d287;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d292;
        FUN_00878dfb();
      }
      local_fc = 0x42d2a0;
      piStack_f8 = (int *)uVar3;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (piVar4 == (int *)0x0) {
        piStack_f8 = (int *)0x42d2b5;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 0x14);
      }
      iVar1 = *piVar4;
      local_100 = *(int *)(unaff_EBP + -0x90);
      local_fc = *(int *)(unaff_EBP + -0x8c);
      piStack_f8 = *(int **)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      pwStack_108 = (wchar_t *)0x42d2d3;
      local_104 = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x10c))();
      if (iVar1 < 0) {
        piStack_f8 = *(int **)(unaff_EBP + -0x14);
        local_100 = 0x42d2e5;
        local_fc = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_f8 = (int *)0x42d2f5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_f8 = (int *)0x42d300;
        FUN_00878dfb();
      }
    }
    piStack_f8 = (int *)0x42d30c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    piStack_f8 = (int *)(unaff_EBP + -0x40);
    local_fc = 0x42d316;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_f8 = (int *)0x42d322;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_f8 = (int *)0x42d332;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (piVar4 == (int *)0x0) {
      piStack_f8 = (int *)0x42d347;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 0x14);
    }
    local_100 = *(int *)(unaff_EBP + -0x40);
    local_fc = *(int *)(unaff_EBP + -0x3c);
    iVar1 = *piVar4;
    piStack_f8 = *(int **)(unaff_EBP + -0x38);
    iStack_10c = *(int *)(unaff_EBP + -0xac);
    pwStack_108 = *(wchar_t **)(unaff_EBP + -0xa8);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    local_104 = *(int **)(unaff_EBP + -0xa4);
    iVar1 = (**(code **)(iVar1 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0xb0));
    if (iVar1 < 0) {
      piStack_f8 = *(int **)(unaff_EBP + -0x14);
      local_100 = 0x42d385;
      local_fc = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_f8 = (int *)0x42d395;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_f8 = (int *)0x42d3a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_f8 = (int *)0x42d3ad;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_f8 = (int *)0x42d3b8;
      FUN_00878dfb();
    }
    piStack_f8 = *(int **)(unaff_EBP + 0x14);
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff0c;
    if (piStack_f8 != (int *)0x0) {
      local_fc = 0x42d3d0;
      (**(code **)(*piStack_f8 + 4))();
    }
    piStack_f8 = (int *)0x42d3d8;
    FUN_00427af9();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
      piStack_f8 = (int *)0x42d3e9;
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) {
LAB_0042d402:
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        piStack_f8 = (int *)0x42d413;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_f8 = (int *)0x42d427;
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        piStack_f8 = (int *)0x42d43c;
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        piStack_f8 = (int *)0x42d44e;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        piStack_f8 = (int *)0x42d45f;
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  }
  FUN_00412600();
  goto LAB_0042d402;
}


