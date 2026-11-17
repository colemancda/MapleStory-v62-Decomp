/* FUN_0075a959 - 0x0075a959 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075a959(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int unaff_EBP;
  undefined8 uStack_c8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb();
  }
  uStack_c8._4_4_ = (char *)(**(code **)(**(int **)(unaff_EBP + -0x14) + 0x8c))();
  if ((int)uStack_c8._4_4_ < 0) {
    uStack_c8._0_4_ = 0x75a9f8;
    FUN_00878e09();
  }
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  uStack_c8._4_4_ = (char *)0x75aa0d;
  FUN_00414edd();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
    }
    if ((iVar3 == 0) && (*(int *)(*(int *)(unaff_EBP + 0x1c) + 0x10) == 0)) {
      uStack_c8._4_4_ = (char *)0x75aa4f;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_c8._4_4_ = (char *)0x75aa65;
      FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_c8._4_4_ = (char *)(unaff_EBP + -0x48);
      uStack_c8._0_4_ = 0x75aa7c;
      FUN_00434e21();
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        FUN_00434e38();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_c8._4_4_ = (char *)FUN_00449713();
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff40;
      uStack_c8._0_4_ = 0x75aadb;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_c8._4_4_ = (char *)0x75aae7;
      FUN_0044974c();
      uStack_c8._4_4_ = (char *)0x75aaee;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_c8._4_4_ = (char *)0x75ab33;
      uStack_c8._4_4_ = (char *)FUN_00449749();
      uStack_c8._0_4_ = 0x75ab3c;
      uVar4 = FUN_00449713();
      *(undefined8 **)(unaff_EBP + -0x4c) = &uStack_c8;
      uStack_c8._0_4_ = extraout_ECX_00;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + 8);
      iVar3 = (*(int *)(extraout_ECX + 0xc) - *(int *)(unaff_EBP + 0xc)) / 2;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_004115d9(iVar3,uVar4);
      FUN_00448e3a(iVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + 0x14) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004497b5();
    }
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
  }
  if (iVar3 != 0) {
    uStack_c8._4_4_ = (char *)0x75abdc;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb();
    }
    uVar4 = FUN_004a2734();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) + -0x1e;
    *(undefined4 *)(unaff_EBP + 0x14) = 1;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
      }
      iVar7 = *(int *)(unaff_EBP + 0x14);
      if ((iVar5 + -1 <= iVar7) || (99 < iVar7)) break;
      FUN_00403191();
      uStack_c8._0_4_ = unaff_EBP + -0x34;
      uStack_c8._4_4_ = *(char **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0045ece0();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      uStack_c8._4_4_ = (char *)FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff40;
      uStack_c8._0_4_ = 0x75ac70;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      uStack_c8._4_4_ = (char *)0x75ac7c;
      FUN_0044974c();
      uStack_c8._4_4_ = (char *)0x75ac83;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      if (iVar3 < *(int *)(unaff_EBP + -0x2c)) {
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_c8._4_4_ = (char *)0x75ace6;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = *(undefined4 *)(unaff_EBP + 0x14);
        FUN_0045ece0(unaff_EBP + -0x4c,*(undefined4 *)(unaff_EBP + -0x10));
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_c8._0_4_ = 0x75ad04;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + -0x2c) = &uStack_c8;
        uStack_c8._0_4_ = extraout_ECX_01;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar5 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004115d9(iVar5,uVar4);
        FUN_00448e3a(iVar5,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x14);
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x48);
      }
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
    }
    if (*(int *)(unaff_EBP + -0x10) < iVar7) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_c8._4_4_ = (char *)0x75adc0;
      uStack_c8._4_4_ = (char *)FUN_00449749();
      uStack_c8._0_4_ = 0xffffffff;
      FUN_0045ece0(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uStack_c8._0_4_ = 0x75addd;
      uVar4 = FUN_00449713();
      *(undefined8 **)(unaff_EBP + -0x4c) = &uStack_c8;
      uStack_c8._0_4_ = extraout_ECX_02;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + 8);
      iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_004115d9(iVar3,uVar4);
      FUN_00448e3a(iVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (*(int *)(unaff_EBP + 0x14) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x48);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004497b5();
  }
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      FUN_00434e38();
    }
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0052e143();
  }
  else {
    if (0 < *(int *)(*(int *)(unaff_EBP + 0x1c) + 0x10)) {
      uStack_c8._4_4_ = (char *)0x75aeaf;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        FUN_00878dfb();
      }
      iVar3 = FUN_0075baf6();
      *(int *)(unaff_EBP + -0x10) = iVar3 + 2;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      iVar3 = **(int **)(*(int *)(unaff_EBP + 0x1c) + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + 0x20) == 2) {
        uVar4 = (**(code **)(iVar3 + 0x18))();
        *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
        uStack_c8._4_4_ = (char *)0x75af00;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        uStack_c8._0_4_ = 0x75af16;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        if (*(int *)(unaff_EBP + 0x20) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          FUN_00434e38();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75af71;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        uStack_c8._4_4_ = (char *)0x75af7d;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75af84;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        uStack_c8._4_4_ = (char *)0x75afc8;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75afd1;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x1c);
        uStack_c8._4_4_ = (char *)0x75b04d;
        puVar6 = (undefined4 *)FUN_00679d22();
        uVar4 = *puVar6;
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        uStack_c8._0_4_ = 0x75b079;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b0c2;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        uStack_c8._4_4_ = (char *)0x75b0ce;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b0d5;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        uStack_c8._4_4_ = (char *)0x75b119;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b122;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10);
        uStack_c8._4_4_ = (char *)0x75b19b;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        uStack_c8._0_4_ = 0x75b1b4;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b1fd;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        uStack_c8._4_4_ = (char *)0x75b209;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b210;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        uStack_c8._4_4_ = (char *)0x75b254;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b25d;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x1c);
        uStack_c8._4_4_ = (char *)0x75b2d9;
        puVar6 = (undefined4 *)FUN_00679d22();
        uVar4 = *puVar6;
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        uStack_c8._0_4_ = 0x75b30b;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        uStack_c8._4_4_ = (char *)0x75b345;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b36d;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        uStack_c8._4_4_ = (char *)0x75b379;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b380;
        uVar4 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + 0x20) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b3ab;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c8._4_4_ = (char *)0x75b3cb;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        uStack_c8._4_4_ = (char *)0x75b3eb;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b3f4;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + -0x4c) = &uStack_c8;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - *(int *)(unaff_EBP + 0x20)) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0x1c);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x1c);
        uStack_c8._4_4_ = (char *)0x75b474;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        uStack_c8._0_4_ = 0x75b498;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b4cc;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b4f4;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        uStack_c8._4_4_ = (char *)0x75b500;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b507;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c8._4_4_ = (char *)0x75b531;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b551;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        uStack_c8._4_4_ = (char *)0x75b571;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b57a;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        uStack_c8._0_4_ = extraout_ECX_03;
        FUN_00448a17(uVar4);
        iVar5 = *(int *)(unaff_EBP + 8);
        iVar7 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        iVar3 = iVar5;
        FUN_004115d9(iVar7,iVar5);
        FUN_00448e3a(iVar7,iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      }
      else {
        (**(code **)(iVar3 + 0x18))();
        uStack_c8._4_4_ = (char *)0x75b5e4;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        uStack_c8._0_4_ = 0x75b5f9;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b633;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b65b;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        uStack_c8._4_4_ = (char *)0x75b667;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b66e;
        uVar4 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + 0x20) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c8._4_4_ = (char *)0x75b699;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b6b9;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        uStack_c8._4_4_ = (char *)0x75b6d9;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b6e2;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + -0x4c) = &uStack_c8;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - *(int *)(unaff_EBP + 0x20)) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x1c);
        uStack_c8._4_4_ = (char *)0x75b75f;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        uStack_c8._4_4_ = (char *)(unaff_EBP + 0x20);
        uStack_c8._0_4_ = 0x75b779;
        FUN_00434e21();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b7ad;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b7d5;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        uStack_c8._4_4_ = (char *)0x75b7e1;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b7e8;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c8._4_4_ = (char *)0x75b812;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b832;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        uStack_c8._4_4_ = (char *)0x75b852;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75b85b;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        uStack_c8._0_4_ = extraout_ECX_04;
        FUN_00448a17(uVar4);
        iVar5 = *(int *)(unaff_EBP + 8);
        iVar7 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        iVar3 = iVar5;
        FUN_004115d9(iVar7,iVar5);
        FUN_00448e3a(iVar7,iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      }
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = iVar5 + *(int *)(unaff_EBP + -0x10);
      puVar6 = (undefined4 *)FUN_0052b5f0();
      *(undefined4 *)(unaff_EBP + -0x90) = *puVar6;
      *(undefined4 *)(unaff_EBP + -0x8c) = puVar6[1];
      *(undefined4 *)(unaff_EBP + -0x88) = puVar6[2];
      *(undefined4 *)(unaff_EBP + -0x84) = puVar6[3];
      uStack_c8._4_4_ = (char *)0x75b8f0;
      SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x90),(LPFILETIME)(unaff_EBP + -0x60));
      uStack_c8._4_4_ = (char *)0x75b900;
      (*DAT_0097b4b0)();
      uStack_c8._4_4_ = (char *)0x75b90d;
      SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0xa0),(LPFILETIME)(unaff_EBP + -0x68));
      uVar1 = *(uint *)(unaff_EBP + -100);
      uVar2 = *(uint *)(unaff_EBP + -0x68);
      if ((*(uint *)(unaff_EBP + -0x5c) <= uVar1) &&
         ((uVar1 != *(uint *)(unaff_EBP + -0x5c) || (*(uint *)(unaff_EBP + -0x60) < uVar2)))) {
        iVar3 = uVar2 - *(uint *)(unaff_EBP + -0x60);
        uStack_c8._4_4_ =
             (char *)((uVar1 - *(int *)(unaff_EBP + -0x5c)) -
                     (uint)(uVar2 < *(uint *)(unaff_EBP + -0x60)));
        *(char **)(unaff_EBP + -0x4c) = uStack_c8._4_4_;
        uStack_c8._0_4_ = iVar3;
        uVar4 = __aulldiv();
        uStack_c8._4_4_ = *(char **)(unaff_EBP + -0x4c);
        *(undefined4 *)(unaff_EBP + 0x20) = uVar4;
        uStack_c8._0_4_ = iVar3;
        uStack_c8 = __aullrem();
        __aulldiv();
        uStack_c8._0_4_ = unaff_EBP + 0x14;
        uStack_c8._4_4_ = s__d__d_0096b784;
        FUN_00434e21();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75b989;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        uStack_c8._4_4_ = (char *)FUN_00449713();
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff40;
        uStack_c8._0_4_ = 0x75b9b1;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        uStack_c8._4_4_ = (char *)0x75b9bd;
        FUN_0044974c();
        uStack_c8._4_4_ = (char *)0x75b9c4;
        iVar3 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c8._4_4_ = (char *)0x75b9ee;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
        uStack_c8._4_4_ = (char *)0x75ba0e;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x52;
        uStack_c8._4_4_ = (char *)0x75ba2e;
        uStack_c8._4_4_ = (char *)FUN_00449749();
        uStack_c8._0_4_ = 0x75ba37;
        uVar4 = FUN_00449713();
        *(undefined8 **)(unaff_EBP + 0x20) = &uStack_c8;
        uStack_c8._0_4_ = extraout_ECX_05;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = (*(int *)(*(int *)(unaff_EBP + -0x28) + 0xc) - iVar3) / 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x52;
        FUN_004115d9(iVar3,uVar4);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0x1c) != 0) {
      FUN_0048ba7b();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


