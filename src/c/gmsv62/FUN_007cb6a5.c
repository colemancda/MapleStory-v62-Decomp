/* FUN_007cb6a5 - 0x007cb6a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cb6a5(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined1 *puStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined1 *puStack_230;
  int iStack_22c;
  uint uStack_228;
  uint uStack_224;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(extraout_ECX + 0x524) = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00434e38();
  }
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00434e38();
  }
  uVar4 = FUN_00424561();
  *(undefined2 *)(extraout_ECX + 0xd84) = uVar4;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(extraout_ECX + 0xd86) = uVar2;
  uVar4 = FUN_00424561();
  *(undefined2 *)(extraout_ECX + 0xd88) = uVar4;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(extraout_ECX + 0xd8a) = uVar2;
  FUN_0066996b();
  uVar6 = FUN_00424561();
  *(uint *)(extraout_ECX + 0x27e8) = uVar6 & 0xffff;
  *(undefined ***)(unaff_EBP + -0x200) = &PTR_LAB_008e84a0;
  _memset((void *)(unaff_EBP + -0x200),0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined ***)(unaff_EBP + -0x200) = &PTR_FUN_008e8cd8;
  FUN_004b876a();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar7 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
  uVar7 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar7;
  uVar7 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x27c8) = uVar7;
  sVar5 = FUN_00424561();
  *(int *)(unaff_EBP + -0x18) = (int)sVar5;
  sVar5 = FUN_00424561();
  *(int *)(unaff_EBP + -0x20) = (int)sVar5;
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x52c) = uVar6 & 0xff;
  *(undefined4 *)(unaff_EBP + 0x10) = DAT_00978138;
  FUN_00424561();
  uVar7 = FUN_004d19c1();
  *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
  uVar7 = FUN_00803f45();
  *(undefined4 *)(unaff_EBP + 8) = uVar7;
  iVar8 = FUN_007b664e();
  if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  FUN_007f113f();
  (**(code **)(**(int **)(unaff_EBP + 8) + 4))();
  *(undefined4 *)(extraout_ECX + 0x52c) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x140);
  FUN_0042452b();
  uStack_224 = unaff_EBP - 0x200;
  uStack_228 = 0x7cb8af;
  FUN_0078b670();
  uStack_224 = extraout_ECX + 0x2380;
  uStack_228 = 0x7cb8c1;
  uStack_224 = FUN_00413367();
  uStack_228 = 0x7cb8cd;
  FUN_0079c757();
  uStack_224 = extraout_ECX + 0x23a4;
  uStack_228 = 0x7cb8df;
  iVar8 = FUN_00413367();
  uStack_224 = (uint)(iVar8 != 0);
  uStack_228 = 0x7cb8f2;
  FUN_0079c68e();
  if (*(int *)(extraout_ECX + 0x17b8) != *(int *)(unaff_EBP + -0x14)) {
    *(int *)(extraout_ECX + 0x17b8) = *(int *)(unaff_EBP + -0x14);
    uStack_224 = 0x7cb90d;
    FUN_0079601e();
  }
  uStack_224 = 0x7cb917;
  FUN_0079757b();
  uStack_224 = 0x7cb924;
  FUN_0079864f();
  uVar6 = 0;
  while (cVar3 = FUN_0042452b(), cVar3 != '\0') {
    uStack_224 = 0x7cb940;
    iVar8 = FUN_004029b9();
    *(int *)(unaff_EBP + 0x10) = iVar8;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar8 != 0) {
      FUN_0079518d();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_228 = 0x7cb963;
    uStack_224 = uVar6;
    FUN_0078bf44();
    uVar6 = uVar6 + 1;
    uStack_228 = 0x7cb97c;
    uStack_224 = extraout_ECX;
    FUN_00613989();
  }
  FUN_007953b8();
  FUN_004c2648();
  uStack_224 = 0x7cb99c;
  FUN_00445548();
  uVar7 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1e3c) = uVar7;
  uVar7 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1e40) = uVar7;
  uVar7 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x1e44) = uVar7;
  FUN_0079c8f3();
  uStack_224 = 0x7cb9d2;
  FUN_007cbeaf();
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x1700) = uVar6 & 0xff;
  if ((uVar6 & 0xff) != 0) {
    uVar7 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x1704) = uVar7;
    uStack_224 = 0x7cba02;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_224 = 0x7cba14;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      uStack_224 = 0x7cba28;
      FUN_00434e38();
    }
    uVar6 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x170c) = uVar6 & 0xff;
    uVar6 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1710) = uVar6 & 0xff;
    uVar6 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1718) = uVar6 & 0xff;
    uVar6 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x1714) = uVar6 & 0xff;
    uVar6 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x171c) = uVar6 & 0xff;
    if (*(int *)(extraout_ECX + 0x524) == 0) {
      uStack_224 = 0;
      uStack_228 = 0x7cba92;
      FUN_004031b7();
      iStack_238 = extraout_ECX + 0xd74;
      uStack_224 = *(uint *)(extraout_ECX + 0x1718);
      uStack_228 = *(uint *)(extraout_ECX + 0x1714);
      iStack_22c = *(int *)(extraout_ECX + 0x1710);
      puStack_230 = *(undefined1 **)(extraout_ECX + 0x170c);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_234;
      puStack_23c = (undefined1 *)0x7cbac2;
      uStack_234 = extraout_ECX_00;
      FUN_00433bdf();
      iStack_238 = unaff_EBP + -0x30;
      puStack_23c = (undefined1 *)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00424e27();
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_238 = 0x7cbaeb;
      FUN_004115d9();
      iStack_238 = 0x7cbaf2;
      iStack_238 = FUN_0040eed0();
      puStack_23c = (undefined1 *)0x7cbafa;
      uVar7 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_23c;
      puStack_23c = extraout_ECX_01;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(extraout_ECX + 0x1700);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0046cd86(uVar7);
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_224 = 0x7cbb2d;
      iVar8 = FUN_00402bc3();
      if (iVar8 < 0) {
        uStack_224 = 0x7cbb38;
        FUN_00878dfb();
      }
    }
  }
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x27e0) = uVar6 & 0xff;
  if ((uVar6 & 0xff) != 0) {
    uStack_224 = 0x7cbb5b;
    FUN_0045cdbc();
    uStack_224 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_228 = 0x7cbb6b;
    FUN_0045ed72();
    uStack_224 = 0x7cbb72;
    FUN_0045ee27();
    uStack_224 = 0;
    uStack_228 = 1;
    iStack_22c = 0x400;
    puStack_230 = (undefined1 *)0x7cbb86;
    uStack_228 = FUN_00415015();
    iStack_22c = 0x7cbb8c;
    FUN_00471777();
    uStack_224 = 0x7cbb99;
    FUN_004150c0();
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_EBP + 0x10) + -4);
    }
    if (0x28 < iVar8) {
      uStack_224 = unaff_EBP - 0x10;
      uStack_228 = 0x7cbbba;
      FUN_0045e070();
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
    }
    uStack_224 = 0x7cbbcf;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 10;
    if (((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) && (*(int *)(unaff_EBP + -0x10) != 0)) {
      uStack_224 = 0x7cbbec;
      FUN_00434e38();
    }
    uStack_224 = 0x7cbbfe;
    FUN_00414f8b();
    if (*(int *)(extraout_ECX + 0x524) == 0) {
      uStack_228 = extraout_ECX + 0xd2c;
      *(uint **)(unaff_EBP + -0x10) = &uStack_224;
      iStack_22c = 0x7cbc1b;
      uStack_224 = extraout_ECX_02;
      FUN_00433bdf();
      iStack_22c = extraout_ECX + 0xd3c;
      *(uint **)(unaff_EBP + -0x14) = &uStack_228;
      puStack_230 = (undefined1 *)0x7cbc2d;
      uStack_228 = extraout_ECX_03;
      FUN_0041160e();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_22c = 0x7cbc38;
      puStack_230 = (undefined1 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_22c;
      uStack_234 = 0x7cbc44;
      iStack_22c = extraout_ECX_04;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_230 = (undefined1 *)0x7cbc50;
      FUN_0046f440();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      uStack_224 = 0x7cbc64;
      FUN_00434e38();
    }
  }
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    uStack_228 = 0x7cbc80;
    uStack_224 = extraout_ECX + 0x1778;
    FUN_004245d2();
    uStack_224 = extraout_ECX + 0x1780;
    uStack_228 = 0x7cbc90;
    FUN_004245d2();
    *(undefined4 *)(unaff_EBP + 0x10) = DAT_00978140;
    FUN_0042459a();
    iStack_22c = 0x7cbcaa;
    uStack_228 = extraout_ECX + 0x1778;
    uStack_224 = extraout_ECX;
    FUN_007c0f80();
  }
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    uStack_228 = 0x7cbcc5;
    uStack_224 = extraout_ECX + 0x17e0;
    FUN_004245d2();
    uStack_224 = extraout_ECX + 0x17e8;
    uStack_228 = 0x7cbcd5;
    FUN_004245d2();
    *(undefined4 *)(unaff_EBP + 0x10) = DAT_00978140;
    FUN_0042459a();
    iStack_22c = 0x7cbcef;
    uStack_228 = extraout_ECX + 0x17e0;
    uStack_224 = extraout_ECX;
    FUN_007c10fb();
  }
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    uVar7 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x1790) = uVar7;
    uVar7 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x1794) = uVar7;
    uVar7 = FUN_0042459a();
    uStack_228 = *(uint *)(extraout_ECX + 0x1790);
    *(undefined4 *)(extraout_ECX + 0x1798) = uVar7;
    iStack_22c = 0x7cbd34;
    uStack_224 = extraout_ECX;
    FUN_007c1276();
  }
  cVar3 = FUN_0042452b();
  if ((cVar3 != '\0') && (*(int *)(extraout_ECX + 0x524) == 0)) {
    uStack_224 = 0x7cbd60;
    FUN_0064d61f();
    uStack_224 = 0x7cbd6b;
    iVar8 = FUN_0079b949();
    uStack_224 = 0xff;
    uStack_228 = 3;
    puStack_230 = (undefined1 *)&iStack_22c;
    *(int **)(unaff_EBP + -0x14) = &iStack_22c;
    uStack_234 = 0x7cbd85;
    FUN_0043f93c();
    puStack_230 = (undefined1 *)0x0;
    uStack_234 = 0;
    puStack_23c = (undefined1 *)&iStack_238;
    *(int **)(unaff_EBP + -0x18) = &iStack_238;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00486ada();
    puStack_23c = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00790038();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_23c = (undefined1 *)0x7cbdbb;
    FUN_00424e27();
    puStack_23c = (undefined1 *)0x7cbdc2;
    puStack_23c = (undefined1 *)FUN_0043210d();
    uVar7 = FUN_004091f9();
    puVar9 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 0x10,uVar7);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar8 + 0x14);
    uStack_224 = 0x7cbde3;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar9);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402fa6();
    uStack_224 = 0x7cbe05;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_224 = 0x7cbe12;
    FUN_00403191();
    iVar8 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar8 == 0) {
      uStack_224 = 0x7cbe25;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    iStack_22c = *(int *)(unaff_EBP + -0x40);
    uStack_228 = *(uint *)(unaff_EBP + -0x3c);
    iVar8 = *piVar1;
    uStack_224 = *(uint *)(unaff_EBP + -0x38);
    puStack_23c = *(undefined1 **)(unaff_EBP + -0x30);
    iStack_238 = *(int *)(unaff_EBP + -0x2c);
    uStack_234 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + 0x10) = piVar1;
    puStack_230 = *(undefined1 **)(unaff_EBP + -0x24);
    uVar6 = (**(code **)(iVar8 + 0x110))(piVar1,0x20);
    if ((int)uVar6 < 0) {
      uStack_224 = *(uint *)(unaff_EBP + 0x10);
      iStack_22c = 0x7cbe5f;
      uStack_228 = uVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_224 = 0x7cbe6c;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      uStack_224 = 0x7cbe77;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_224 = 0x7cbe84;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      uStack_224 = 0x7cbe8f;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    uStack_224 = 0x7cbe9e;
    FUN_0079cab8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


