/* FUN_0073955f - 0x0073955f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073955f(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uStack_424;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  undefined4 *puStack_414;
  int aiStack_410 [7];
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
  int iStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  int iStack_3cc;
  int iStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  int iStack_370;
  int iStack_36c;
  int iStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int iStack_340;
  char *pcStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_2d0;
  int *piStack_2cc;
  undefined *puStack_2c8;
  int *piStack_2c4;
  int iStack_dc;
  int *piStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  
  FUN_00879bb8();
  piStack_d0 = (int *)0x1;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  puStack_d4 = (undefined *)0x739580;
  uVar1 = FUN_004ac0be();
  *(undefined4 *)(extraout_ECX + 3000) = uVar1;
  piStack_d8 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x1;
  iStack_dc = 0x739591;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  piStack_d0 = (int *)0x7395a1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb50),
             (IBinding *)*puVar2);
  FUN_004497b5();
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x7395b5;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  piStack_d0 = (int *)0x7395c4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb5c),
             (IBinding *)*puVar2);
  FUN_004497b5();
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x7395e1;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb58);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_d8 = (int *)0x7395f4;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73960b;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73961a;
  FUN_00403191();
  piStack_d0 = (int *)0xff99cc33;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x73964b;
  FUN_0044974c();
  iStack_dc = 0x739652;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73965f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73966a;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x73967a;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb54);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_d8 = (int *)0x739692;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x7396a9;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x7396b3;
  FUN_00403191();
  piStack_d0 = (int *)0xff000000;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_dc = 0x7396e4;
  FUN_0044974c();
  iStack_dc = 0x7396eb;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x7396f8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739703;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739713;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb60);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  piStack_d8 = (int *)0x73972b;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739742;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73974c;
  FUN_00403191();
  piStack_d0 = (int *)0xffffffff;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_dc = 0x73977a;
  FUN_0044974c();
  iStack_dc = 0x739781;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73978e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739799;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x7397a9;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb64);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  piStack_d8 = (int *)0x7397c1;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x7397d8;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x7397e2;
  FUN_00403191();
  piStack_d8 = (int *)(unaff_EBP + -0x2c);
  piStack_d0 = (int *)0xff00ff00;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_dc = 0x739811;
  FUN_0044974c();
  iStack_dc = 0x739818;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739825;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739830;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739840;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb7c);
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  piStack_d8 = (int *)0x739858;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73986f;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739879;
  FUN_00403191();
  piStack_d0 = (int *)0xffbbbbbb;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_dc = 0x7398aa;
  FUN_0044974c();
  iStack_dc = 0x7398b1;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x7398be;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x7398c9;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x7398d9;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb80);
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  piStack_d8 = (int *)0x7398f1;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739908;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739912;
  FUN_00403191();
  piStack_d0 = (int *)0xffffff00;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_dc = 0x739943;
  FUN_0044974c();
  iStack_dc = 0x73994a;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739957;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739962;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739972;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb84);
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  piStack_d8 = (int *)0x73998a;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x7399a1;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x7399ab;
  FUN_00403191();
  piStack_d0 = (int *)0xfffff080;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_dc = 0x7399dc;
  FUN_0044974c();
  iStack_dc = 0x7399e3;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x7399f0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x7399fb;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739a0b;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb88);
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  piStack_d8 = (int *)0x739a23;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739a3a;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739a44;
  FUN_00403191();
  piStack_d0 = (int *)0xff60ceff;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_dc = 0x739a75;
  FUN_0044974c();
  iStack_dc = 0x739a7c;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739a89;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739a94;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739aa4;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb8c);
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  piStack_d8 = (int *)0x739abc;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739ad3;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739add;
  FUN_00403191();
  piStack_d0 = (int *)0xff000000;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x19;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_dc = 0x739b0e;
  FUN_0044974c();
  iStack_dc = 0x739b15;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739b22;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739b2d;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739b3d;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb90);
  *(undefined4 *)(unaff_EBP + -4) = 0x1b;
  piStack_d8 = (int *)0x739b55;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739b6c;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739b76;
  FUN_00403191();
  piStack_d0 = (int *)0xffffafaf;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_dc = 0x739ba7;
  FUN_0044974c();
  iStack_dc = 0x739bae;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739bbb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739bc6;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739bd6;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb94);
  *(undefined4 *)(unaff_EBP + -4) = 0x1e;
  piStack_d8 = (int *)0x739bee;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739c05;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739c0f;
  FUN_00403191();
  piStack_d0 = (int *)0xff003f7f;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x1f;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_dc = 0x739c40;
  FUN_0044974c();
  iStack_dc = 0x739c47;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739c54;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739c5f;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739c6f;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb98);
  *(undefined4 *)(unaff_EBP + -4) = 0x21;
  piStack_d8 = (int *)0x739c87;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739c9e;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739ca8;
  FUN_00403191();
  piStack_d0 = (int *)0xff770042;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x22;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_dc = 0x739cd9;
  FUN_0044974c();
  iStack_dc = 0x739ce0;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739ced;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739cf8;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739d08;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb9c);
  *(undefined4 *)(unaff_EBP + -4) = 0x24;
  piStack_d8 = (int *)0x739d20;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739d37;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739d41;
  FUN_00403191();
  piStack_d0 = (int *)0xff462706;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x25;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_dc = 0x739d72;
  FUN_0044974c();
  iStack_dc = 0x739d79;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739d86;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739d91;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739da1;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xba0);
  *(undefined4 *)(unaff_EBP + -4) = 0x27;
  piStack_d8 = (int *)0x739db9;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739dd0;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739dda;
  FUN_00403191();
  piStack_d0 = (int *)0xff6c4ce3;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x28;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_dc = 0x739e0b;
  FUN_0044974c();
  iStack_dc = 0x739e12;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739e1f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739e2a;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739e3a;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb6c);
  *(undefined4 *)(unaff_EBP + -4) = 0x2a;
  piStack_d8 = (int *)0x739e52;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739e69;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739e73;
  FUN_00403191();
  piStack_d0 = (int *)0xffff9900;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x2b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_dc = 0x739ea4;
  FUN_0044974c();
  iStack_dc = 0x739eab;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739eb8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739ec3;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739ed3;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb68);
  *(undefined4 *)(unaff_EBP + -4) = 0x2d;
  piStack_d8 = (int *)0x739eeb;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739f02;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739f0c;
  FUN_00403191();
  piStack_d0 = (int *)0xffff99cc;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x2e;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_dc = 0x739f3d;
  FUN_0044974c();
  iStack_dc = 0x739f44;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739f51;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739f5c;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x739f6c;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xba4);
  *(undefined4 *)(unaff_EBP + -4) = 0x30;
  piStack_d8 = (int *)0x739f84;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x739f9b;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x739fa5;
  FUN_00403191();
  piStack_d0 = (int *)0xfffc8be5;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x31;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_dc = 0x739fd6;
  FUN_0044974c();
  iStack_dc = 0x739fdd;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x739fea;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x739ff5;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x73a005;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xba8);
  *(undefined4 *)(unaff_EBP + -4) = 0x33;
  piStack_d8 = (int *)0x73a01d;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73a034;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73a03e;
  FUN_00403191();
  piStack_d0 = (int *)0xffffffff;
  puStack_d4 = (undefined *)0xa;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 0xc;
  *(undefined4 *)(unaff_EBP + -4) = 0x34;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_dc = 0x73a06c;
  FUN_0044974c();
  iStack_dc = 0x73a073;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a080;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a08b;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x73a09b;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb70);
  *(undefined4 *)(unaff_EBP + -4) = 0x36;
  piStack_d8 = (int *)0x73a0b3;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73a0ca;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73a0d4;
  FUN_00403191();
  piStack_d0 = (int *)0xffe1acfe;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x37;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_dc = 0x73a105;
  FUN_0044974c();
  iStack_dc = 0x73a10c;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a119;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a124;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x73a134;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb74);
  *(undefined4 *)(unaff_EBP + -4) = 0x39;
  piStack_d8 = (int *)0x73a14c;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73a163;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73a16d;
  FUN_00403191();
  piStack_d0 = (int *)0xffa6ff7f;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x3a;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iStack_dc = 0x73a19e;
  FUN_0044974c();
  iStack_dc = 0x73a1a5;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a1b2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a1bd;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x14);
  puStack_d4 = (undefined *)0x73a1cd;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_d4 = (undefined *)*puVar2;
  piStack_d0 = (int *)(extraout_ECX + 0xb78);
  *(undefined4 *)(unaff_EBP + -4) = 0x3c;
  piStack_d8 = (int *)0x73a1e5;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_d0 = (int *)0x73a1fc;
    FUN_00403384();
  }
  piStack_d0 = (int *)0x73a206;
  FUN_00403191();
  piStack_d0 = (int *)0xffff28a7;
  puStack_d4 = (undefined *)0xc;
  *(int ***)(unaff_EBP + -0x10) = &piStack_d8;
  iStack_dc = 10;
  *(undefined4 *)(unaff_EBP + -4) = 0x3d;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_dc = 0x73a237;
  FUN_0044974c();
  iStack_dc = 0x73a23e;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a24b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a256;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)0x73a25f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x3f;
  piStack_d0 = (int *)0x73a26f;
  FUN_00403191();
  piStack_d0 = (int *)0x0;
  puStack_d4 = (undefined *)(unaff_EBP + -0x4c);
  piStack_d8 = (int *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x50) = &iStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  puStack_d4 = (undefined *)0x73a2bb;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  piStack_d0 = (int *)0x73a2cd;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    piStack_d0 = (int *)0x73a2de;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  piStack_d0 = (int *)0x73a2ee;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a2f9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  piStack_d0 = (int *)0x73a306;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a311;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a31e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a329;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)0x73a332;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x43;
  piStack_d0 = (int *)0x73a342;
  FUN_00403191();
  piStack_d0 = (int *)0x0;
  puStack_d4 = (undefined *)(unaff_EBP + -0x2c);
  piStack_d8 = (int *)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + -0x50) = &iStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  puStack_d4 = (undefined *)0x73a38e;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  piStack_d0 = (int *)0x73a3a0;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    piStack_d0 = (int *)0x73a3b1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  piStack_d0 = (int *)0x73a3c1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a3cc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  piStack_d0 = (int *)0x73a3d9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a3e4;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a3f1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a3fc;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)0x73a405;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x47;
  piStack_d0 = (int *)0x73a415;
  FUN_00403191();
  piStack_d0 = (int *)0x0;
  puStack_d4 = (undefined *)(unaff_EBP + -0x2c);
  piStack_d8 = (int *)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + -0x50) = &iStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  puStack_d4 = (undefined *)0x73a461;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  piStack_d0 = (int *)0x73a473;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    piStack_d0 = (int *)0x73a484;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  piStack_d0 = (int *)0x73a494;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a49f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  piStack_d0 = (int *)0x73a4ac;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a4b7;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a4c4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a4cf;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 0xc78) = *(undefined4 *)(DAT_00978134 + 0x50);
  piStack_d0 = (int *)0x73a4e6;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x4b;
  piStack_d0 = (int *)0x73a4f6;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  if (bVar7) {
    piStack_d0 = (int *)0x73a50d;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x4c);
  puStack_d4 = (undefined *)0x0;
  piStack_d8 = (int *)0x50;
  iStack_dc = 0x97;
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc2c);
  piStack_d0 = (int *)0x73a53f;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  piStack_d0 = (int *)0x73a554;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a55f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_d0 = (int *)0x73a56c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_d0 = (int *)0x73a577;
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    piStack_d0 = (int *)0x73a586;
    FUN_00878dfb();
  }
  piVar5 = *(int **)p_Var6;
  puStack_d4 = (undefined *)0x73a593;
  piStack_d0 = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xe0))();
  if (iVar3 < 0) {
    puStack_d4 = &DAT_00963df8;
    iStack_dc = iVar3;
    piStack_d8 = piVar5;
    FUN_00878e09();
  }
  puStack_d4 = (undefined *)(unaff_EBP + -0x1c);
  piStack_d8 = (int *)0x73a5b2;
  puVar2 = (undefined4 *)FUN_00485656();
  piStack_d8 = (int *)*puVar2;
  puStack_d4 = (undefined *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 0x4d;
  iStack_dc = 0x73a5c6;
  FUN_0040ee87();
  iVar3 = *(int *)p_Var6;
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (iVar3 == 0) {
    puStack_d4 = (undefined *)0x80004003;
    piStack_d8 = (int *)0x73a5d9;
    FUN_00878dfb();
  }
  iStack_dc = *(int *)(unaff_EBP + -0x48);
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc2c);
  iVar3 = *piVar5;
  piStack_d8 = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x14) = piVar5;
  puStack_d4 = *(undefined **)(unaff_EBP + -0x40);
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004125d9();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 0x4f;
  FUN_0040ee87();
  iVar3 = *(int *)(iVar3 + 0xc2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc2c);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc2c);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x51;
  FUN_00403191();
  iVar3 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc2c);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x53;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0xc30);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(**(int **)p_Var6 + 0xe0))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_0040ee87();
  iVar3 = *(int *)p_Var6;
  *(undefined4 *)(unaff_EBP + -4) = 0x55;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc30);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0040ee87();
  iVar3 = *(int *)(iVar3 + 0xc30);
  *(undefined4 *)(unaff_EBP + -4) = 0x56;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc30);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc30);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x57;
  FUN_00403191();
  iVar3 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc30);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x59;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0xce8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(**(int **)p_Var6 + 0xe0))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_0040ee87();
  *(undefined4 *)(unaff_EBP + -4) = 0x5b;
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xce8);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0040ee87();
  *(undefined4 *)(unaff_EBP + -4) = 0x5c;
  if (*(int *)(iVar3 + 0xce8) == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xce8);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xce8);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x5d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xce8);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x90))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x5f;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x60;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0xc34);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(**(int **)p_Var6 + 0xe0))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00485656();
  *(undefined4 *)(unaff_EBP + -4) = 0x61;
  FUN_0040ee87();
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc34);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004125d9();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0040ee87();
  *(undefined4 *)(unaff_EBP + -4) = 99;
  if (*(int *)(iVar3 + 0xc34) == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc34);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc34);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 100;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc34);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x90))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 100;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x66;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0xc38);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x66;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(**(int **)p_Var6 + 0xe0))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00485656();
  *(undefined4 *)(unaff_EBP + -4) = 0x68;
  FUN_0040ee87();
  *(undefined1 *)(unaff_EBP + -4) = 0x69;
  if (*(int *)p_Var6 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc38);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004125d9();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0040ee87();
  *(undefined4 *)(unaff_EBP + -4) = 0x6a;
  if (*(int *)(iVar3 + 0xc38) == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc38);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc38);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x6b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x6c;
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc38);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x90))();
  if (iVar3 < 0) {
    piStack_2c4 = *(int **)(unaff_EBP + -0x1c);
    piStack_2cc = (int *)0x73b1eb;
    puStack_2c8 = (undefined *)iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  piStack_2c4 = (int *)0x73b1f8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b205;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_2c4 = (int *)0x73b212;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b21d;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0073cbf2();
  piStack_2c4 = (int *)0x73b230;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x6d;
  piStack_2c4 = (int *)0x73b240;
  FUN_00403191();
  piStack_2c4 = (int *)0x0;
  puStack_2c8 = (undefined *)(unaff_EBP + -0x2c);
  piStack_2cc = (int *)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + -0x50) = &iStack_2d0;
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x70;
  puStack_2c8 = (undefined *)0x73b28d;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  if (iVar4 != 0) {
    piStack_2c4 = (int *)0x73b2a3;
    iVar4 = FUN_0041a581();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      piStack_2c4 = (int *)0x73b2b4;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  piStack_2c4 = (int *)0x73b2c4;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_2c4 = (int *)0x73b2cf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x73;
  piStack_2c4 = (int *)0x73b2dc;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_2c4 = (int *)0x73b2e7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  piStack_2c4 = (int *)0x73b2f4;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_2c4 = (int *)0x73b2ff;
    FUN_00878dfb();
  }
  piStack_2c4 = (int *)0x73b30b;
  FUN_00403191();
  piStack_2c4 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x75;
  puStack_2c8 = (undefined *)0x73b31d;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x76;
  if (bVar7) {
    piStack_2c4 = (int *)0x73b333;
    FUN_00878dfb();
  }
  piStack_2c4 = (int *)(unaff_EBP + -0x98);
  puStack_2c8 = (undefined *)0x0;
  piStack_2cc = (int *)0x0;
  iStack_2d0 = 0;
  puVar2 = (undefined4 *)FUN_0042a39f();
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0xc3c);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x68) = p_Var6;
  piStack_2c4 = (int *)0x73b367;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x75;
  piStack_2c4 = (int *)0x73b37f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b38a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  piStack_2c4 = (int *)0x73b39a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b3a5;
    FUN_00878dfb();
  }
  piStack_2c4 = (int *)0x73b3ae;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  piStack_2c4 = (int *)0x73b3bb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  piStack_2c4 = (int *)0x73b3cb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  piStack_2c4 = (int *)0x73b3db;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x7a;
  piStack_2c4 = (int *)0x73b3eb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x7b;
  if (*(int *)p_Var6 == 0) {
    piStack_2c4 = (int *)0x73b3fd;
    FUN_00878dfb();
  }
  piStack_2c4 = (int *)(unaff_EBP + -0x60);
  puStack_2c8 = (undefined *)(unaff_EBP + -0x88);
  piStack_2cc = (int *)(unaff_EBP + -0x98);
  iStack_2d0 = unaff_EBP + -0xa8;
  FUN_004250ac();
  piStack_2c4 = (int *)0x73b437;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b442;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x7a;
  piStack_2c4 = (int *)0x73b452;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b45d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  piStack_2c4 = (int *)0x73b46d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b478;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  piStack_2c4 = (int *)0x73b488;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b493;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  piStack_2c4 = (int *)0x73b4a0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b4ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  piStack_2c4 = (int *)0x73b4b8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_2c4 = (int *)0x73b4c3;
    FUN_00878dfb();
  }
  if (*(int *)p_Var6 == 0) {
    piStack_2c4 = (int *)0x73b4d1;
    FUN_00878dfb();
  }
  piVar5 = *(int **)p_Var6;
  puStack_2c8 = (undefined *)0x73b4de;
  piStack_2c4 = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xe0))();
  if (iVar3 < 0) {
    puStack_2c8 = &DAT_00963df8;
    iStack_2d0 = iVar3;
    piStack_2cc = piVar5;
    FUN_00878e09();
  }
  puStack_2c8 = (undefined *)(unaff_EBP + -0x10);
  piStack_2cc = (int *)0x73b4fd;
  puVar2 = (undefined4 *)FUN_00485656();
  piStack_2cc = (int *)*puVar2;
  puStack_2c8 = (undefined *)0x1;
  iStack_2d0 = 0x73b50a;
  FUN_0040ee87();
  *(undefined1 *)(unaff_EBP + -4) = 0x7d;
  if (**(int **)(unaff_EBP + -0x68) == 0) {
    puStack_2c8 = (undefined *)0x80004003;
    piStack_2cc = (int *)0x73b51f;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc3c);
  *(int **)(unaff_EBP + -0x14) = piVar5;
  iStack_2d0 = *(int *)(unaff_EBP + -0x38);
  piStack_2cc = *(int **)(unaff_EBP + -0x34);
  puStack_2c8 = *(undefined **)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(*piVar5 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x7c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004125d9();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  FUN_0040ee87();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  if (*(int *)(iVar3 + 0xc3c) == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc3c);
  *(int **)(unaff_EBP + -0x10) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc3c);
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar5 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  if (*piVar5 == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc3c);
  *(int **)(unaff_EBP + -0x10) = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x90))();
  if (iVar3 < 0) {
    iStack_328 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_330 = 0x73b693;
    iStack_32c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  iStack_328 = 0x73b6a0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_328 = 0x73b6ad;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iStack_328 = 0x73b6ba;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_328 = 0x73b6c5;
    FUN_00878dfb();
  }
  iStack_328 = 0x73b6ce;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  iStack_328 = 0x73b6db;
  FUN_00403191();
  iStack_328 = 0;
  iStack_32c = unaff_EBP + -0x60;
  iStack_330 = unaff_EBP + -0x3c;
  pcStack_33c = (char *)&iStack_334;
  *(int **)(unaff_EBP + -0x50) = &iStack_334;
  iStack_338 = 0x791;
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  iStack_340 = 0x73b6ff;
  FUN_00679e4e();
  iStack_338 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  pcStack_33c = (char *)0x73b70f;
  FUN_00405a1d();
  pcStack_33c = (char *)0x73b716;
  FUN_00402660();
  pcStack_33c = (char *)0x73b71d;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  iStack_32c = 0x73b728;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_328 = 0x73b737;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_328 = 0x73b748;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  iStack_328 = 0x73b758;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_328 = 0x73b763;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  iStack_328 = 0x73b770;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_328 = 0x73b77b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iStack_328 = 0x73b788;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_328 = 0x73b793;
    FUN_00878dfb();
  }
  iStack_328 = 0x73b79c;
  FUN_00403191();
  iStack_328 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x85;
  iStack_32c = 0x73b7ab;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  if (bVar7) {
    iStack_328 = 0x73b7c1;
    FUN_00878dfb();
  }
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0;
  iStack_330 = 0;
  iStack_334 = 0;
  iStack_338 = 0;
  pcStack_33c = (char *)0x0;
  iStack_340 = unaff_EBP + -0x10;
  uStack_344 = 0x73b7df;
  puVar2 = (undefined4 *)FUN_0042a39f();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  iStack_328 = 0x73b7f1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0xb38),(IBinding *)*puVar2)
  ;
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0x85;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73b81d;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iStack_328 = 0x73b82d;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  iStack_328 = 0x73b83d;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  iStack_328 = 0x73b84a;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  iStack_328 = 0x73b857;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0xa8;
  iStack_32c = unaff_EBP + -0x88;
  iStack_330 = unaff_EBP + -0x60;
  iStack_334 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  iStack_338 = 0x73b880;
  iStack_338 = FUN_004458be();
  pcStack_33c = (char *)(unaff_EBP + -0xb8);
  iStack_340 = 0x73b88f;
  FUN_00424e27();
  iStack_340 = 0x73b896;
  FUN_004250ac();
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73b8ef;
  FUN_00424e27();
  iStack_328 = 0x73b8f6;
  FUN_00444e05();
  iStack_328 = 0x73b8ff;
  FUN_004f14fa();
  iStack_328 = 0x73b906;
  FUN_00485656();
  iStack_328 = 0x73b90f;
  iStack_328 = FUN_005ee6c0();
  iStack_32c = 0x73b918;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0x8d;
  iStack_328 = 0x73b927;
  FUN_00424e27();
  iStack_328 = 0x73b92e;
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  FUN_00404892();
  FUN_004115a0();
  iStack_328 = 0x73b94f;
  iStack_328 = FUN_007487ff();
  iStack_32c = 0x73b958;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0x8e;
  iStack_328 = 0x73b967;
  FUN_00424e27();
  iStack_328 = 0x73b96e;
  FUN_00444e29();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73b983;
  FUN_00424e27();
  iStack_328 = 0x73b98a;
  FUN_006e612a();
  iStack_328 = 0x73b993;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x8f;
  iStack_328 = 0x73b9a0;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0x245;
  iStack_330 = 0x145;
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  iStack_334 = 0x73b9c2;
  FUN_00424e27();
  iStack_334 = 0x73b9c9;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0x8f;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73b9ea;
  FUN_00424aee();
  iStack_328 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  iStack_32c = 0x73b9fa;
  FUN_004295f1();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0;
  iStack_330 = 0;
  iStack_334 = 0;
  iStack_338 = 0;
  pcStack_33c = (char *)0x0;
  iStack_340 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x92;
  uStack_344 = 0x73ba16;
  FUN_0056a764();
  uStack_344 = 0x73ba1d;
  FUN_004458c1();
  uStack_344 = 0x73ba24;
  FUN_0042a39f();
  iStack_328 = 0x73ba30;
  FUN_007487f1();
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73ba5c;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x93;
  iStack_328 = 0x73ba6c;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x94;
  iStack_328 = 0x73ba7c;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x95;
  iStack_328 = 0x73ba89;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x96;
  iStack_328 = 0x73ba96;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0xa8;
  iStack_32c = unaff_EBP + -0x88;
  iStack_330 = unaff_EBP + -0x60;
  iStack_334 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  iStack_338 = 0x73babf;
  iStack_338 = FUN_004458be();
  pcStack_33c = (char *)(unaff_EBP + -0xb8);
  iStack_340 = 0x73bad2;
  FUN_00424e27();
  iStack_340 = 0x73bad9;
  FUN_004250ac();
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x96;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x95;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x94;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x93;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bb36;
  FUN_00424e27();
  iStack_328 = 0x73bb3d;
  FUN_00444e05();
  iStack_328 = 0x73bb46;
  FUN_004f14fa();
  iStack_328 = 0x73bb4d;
  FUN_00485656();
  iStack_328 = 0x73bb56;
  iStack_328 = FUN_005ee6c0();
  iStack_32c = 0x73bb5f;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  iStack_328 = 0x73bb72;
  FUN_00424e27();
  iStack_328 = 0x73bb79;
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0x98;
  FUN_00404892();
  FUN_004115a0();
  iStack_328 = 0x73bb9a;
  iStack_328 = FUN_007487ff();
  iStack_32c = 0x73bba3;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0x9a;
  iStack_328 = 0x73bbb6;
  FUN_00424e27();
  iStack_328 = 0x73bbbd;
  FUN_00444e29();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bbd6;
  FUN_00424e27();
  iStack_328 = 0x73bbdd;
  FUN_006e612a();
  iStack_328 = 0x73bbe6;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  iStack_328 = 0x73bbf3;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0x245;
  iStack_330 = 0x1b1;
  *(undefined1 *)(unaff_EBP + -4) = 0x9c;
  iStack_334 = 0x73bc10;
  FUN_00424e27();
  iStack_334 = 0x73bc17;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bc38;
  FUN_00424aee();
  iStack_328 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  iStack_32c = 0x73bc48;
  FUN_004295f1();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0;
  iStack_330 = 0;
  iStack_334 = 0;
  iStack_338 = 0;
  pcStack_33c = (char *)0x0;
  iStack_340 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x9e;
  uStack_344 = 0x73bc64;
  FUN_0056a764();
  uStack_344 = 0x73bc6b;
  FUN_004458c1();
  uStack_344 = 0x73bc72;
  FUN_0042a39f();
  iStack_328 = 0x73bc7e;
  FUN_007487f1();
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bcaa;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  iStack_328 = 0x73bcba;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa0;
  iStack_328 = 0x73bcca;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa1;
  iStack_328 = 0x73bcd7;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa2;
  iStack_328 = 0x73bce4;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0xa8;
  iStack_32c = unaff_EBP + -0x88;
  iStack_330 = unaff_EBP + -0x60;
  iStack_334 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0xa3;
  iStack_338 = 0x73bd0d;
  iStack_338 = FUN_004458be();
  pcStack_33c = (char *)(unaff_EBP + -0xb8);
  iStack_340 = 0x73bd20;
  FUN_00424e27();
  iStack_340 = 0x73bd27;
  FUN_004250ac();
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa2;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa1;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa0;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bd84;
  FUN_00424e27();
  iStack_328 = 0x73bd8b;
  FUN_00444e05();
  iStack_328 = 0x73bd94;
  FUN_004f14fa();
  iStack_328 = 0x73bd9b;
  FUN_00485656();
  iStack_328 = 0x73bda4;
  iStack_328 = FUN_005ee6c0();
  iStack_32c = 0x73bdad;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0xa5;
  iStack_328 = 0x73bdc0;
  FUN_00424e27();
  iStack_328 = 0x73bdc7;
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0xa4;
  FUN_00404892();
  FUN_004115a0();
  iStack_328 = 0x73bde8;
  iStack_328 = FUN_007487ff();
  iStack_32c = 0x73bdf1;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0xa6;
  iStack_328 = 0x73be04;
  FUN_00424e27();
  iStack_328 = 0x73be0b;
  FUN_00444e29();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73be24;
  FUN_00424e27();
  iStack_328 = 0x73be2b;
  FUN_006e612a();
  iStack_328 = 0x73be34;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  iStack_328 = 0x73be41;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0x245;
  iStack_330 = 0x22c;
  *(undefined1 *)(unaff_EBP + -4) = 0xa8;
  iStack_334 = 0x73be5e;
  FUN_00424e27();
  iStack_334 = 0x73be65;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73be86;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  iStack_328 = 0x73be93;
  FUN_00424aee();
  iStack_328 = 0;
  iStack_32c = unaff_EBP + -0x60;
  iStack_330 = unaff_EBP + -0x3c;
  pcStack_33c = (char *)&iStack_334;
  *(int **)(unaff_EBP + -0x50) = &iStack_334;
  iStack_338 = 0x792;
  *(undefined1 *)(unaff_EBP + -4) = 0xaa;
  iStack_340 = 0x73beb9;
  FUN_00679e4e();
  iStack_338 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0xaa;
  pcStack_33c = (char *)0x73bec9;
  FUN_00405a1d();
  pcStack_33c = (char *)0x73bed0;
  FUN_00402660();
  pcStack_33c = (char *)0x73bed7;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xac;
  iStack_32c = 0x73bee2;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_328 = 0x73bef1;
  FUN_00503a3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xaa;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bf21;
  FUN_00424aee();
  iStack_328 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xad;
  iStack_32c = 0x73bf31;
  FUN_004295f1();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0;
  iStack_330 = 0;
  iStack_334 = 0;
  iStack_338 = 0;
  pcStack_33c = (char *)0x0;
  iStack_340 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xae;
  uStack_344 = 0x73bf4d;
  FUN_0056a764();
  uStack_344 = 0x73bf54;
  FUN_004458c1();
  uStack_344 = 0x73bf5b;
  FUN_0042a39f();
  iStack_328 = 0x73bf67;
  FUN_007487f1();
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0xad;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73bf93;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xaf;
  iStack_328 = 0x73bfa3;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xb0;
  iStack_328 = 0x73bfb3;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xb1;
  iStack_328 = 0x73bfc0;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xb2;
  iStack_328 = 0x73bfcd;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0xa8;
  iStack_32c = unaff_EBP + -0x88;
  iStack_330 = unaff_EBP + -0x60;
  iStack_334 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb3;
  iStack_338 = 0x73bff6;
  iStack_338 = FUN_004458be();
  pcStack_33c = (char *)(unaff_EBP + -0xb8);
  iStack_340 = 0x73c009;
  FUN_00424e27();
  iStack_340 = 0x73c010;
  FUN_004250ac();
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xb2;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xb1;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xb0;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xaf;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73c06d;
  FUN_00424e27();
  iStack_328 = 0x73c074;
  FUN_00444e05();
  iStack_328 = 0x73c07d;
  FUN_004f14fa();
  iStack_328 = 0x73c084;
  FUN_00485656();
  iStack_328 = 0x73c08d;
  iStack_328 = FUN_005ee6c0();
  iStack_32c = 0x73c096;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0xb5;
  iStack_328 = 0x73c0a9;
  FUN_00424e27();
  iStack_328 = 0x73c0b0;
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0xb4;
  FUN_00404892();
  FUN_004115a0();
  iStack_328 = 0x73c0d1;
  iStack_328 = FUN_007487ff();
  iStack_32c = 0x73c0da;
  FUN_0043f060();
  *(undefined1 *)(unaff_EBP + -4) = 0xb6;
  iStack_328 = 0x73c0ed;
  FUN_00424e27();
  iStack_328 = 0x73c0f4;
  FUN_00444e29();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  iStack_328 = 0x73c10d;
  FUN_00424e27();
  iStack_328 = 0x73c114;
  FUN_006e612a();
  iStack_328 = 0x73c11d;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xb7;
  iStack_328 = 0x73c12a;
  FUN_00424aee();
  iStack_328 = unaff_EBP + -0x3c;
  iStack_32c = 0x245;
  iStack_330 = 0x22c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb8;
  iStack_334 = 0x73c147;
  FUN_00424e27();
  iStack_334 = 0x73c14e;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0xb7;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  FUN_00404892();
  *(undefined8 *)(iVar3 + 0xb48) = 0;
  FUN_00534e6a();
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  iStack_328 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_32c = 0x73c191;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xba;
  iStack_328 = 0x73c19e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  FUN_00402676();
  iStack_328 = 0x73c1b5;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xbb;
  if (iVar4 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_328 = 0x73c1dc;
  FUN_00450382();
  piVar5 = (int *)FUN_00705ae5();
  iStack_328 = 6;
  iStack_32c = 0x21f;
  iStack_330 = 0x23d;
  iStack_334 = 1000;
  pcStack_33c = (char *)0x73c204;
  iStack_338 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  pcStack_33c = (char *)0x7b2;
  iStack_340 = unaff_EBP + -0x10;
  uStack_344 = 0x73c217;
  FUN_00679d86();
  pcStack_33c = (char *)0x0;
  iStack_340 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xbc;
  uStack_344 = 0x73c226;
  uStack_344 = FUN_00411641();
  uStack_348 = 0x73c232;
  FUN_00705ae5();
  uStack_348 = 0x73c239;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  pcStack_33c = (char *)0x73c245;
  FUN_00402676();
  pcStack_33c = s_UI_StatusBar_img_BtNPT_0096b688;
  iStack_340 = 0x73c252;
  FUN_00748c9c();
  pcStack_33c = (char *)0x578;
  iStack_340 = 0x73c258;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xbd;
  if (iVar4 == 0) {
    pcStack_33c = (char *)0x0;
  }
  else {
    pcStack_33c = (char *)0x73c26b;
    pcStack_33c = (char *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_340 = 0x73c27f;
  FUN_00450382();
  pcStack_33c = (char *)0x73c28a;
  piVar5 = (int *)FUN_00705ae5();
  pcStack_33c = (char *)(unaff_EBP + -0x78);
  iStack_340 = 6;
  uStack_344 = 0x21f;
  uStack_348 = 0x275;
  uStack_34c = 0x3e9;
  iStack_354 = 0x73c2a7;
  iStack_350 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_354 = 0x7b2;
  iStack_358 = unaff_EBP + -0x10;
  uStack_35c = 0x73c2ba;
  FUN_00679d86();
  iStack_354 = 0;
  iStack_358 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xbe;
  uStack_35c = 0x73c2c9;
  uStack_35c = FUN_00411641();
  uStack_360 = 0x73c2d5;
  FUN_00705ae5();
  uStack_360 = 0x73c2dc;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_354 = 0x73c2e8;
  FUN_00402676();
  iStack_354 = 0x7a3;
  iStack_358 = unaff_EBP + -0x10;
  uStack_35c = 0x73c2fb;
  iStack_354 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xbf;
  iStack_358 = 0x73c308;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_354 = 0x73c314;
  FUN_00402676();
  iStack_354 = 0x578;
  iStack_358 = 0x73c31a;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc0;
  if (iVar4 == 0) {
    iStack_354 = 0;
  }
  else {
    iStack_354 = 0x73c32d;
    iStack_354 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_358 = 0x73c341;
  FUN_00450382();
  iStack_354 = 0x73c34c;
  piVar5 = (int *)FUN_00705ae5();
  iStack_354 = unaff_EBP + -0x78;
  iStack_358 = 2;
  uStack_35c = 0x21f;
  uStack_360 = 0x2ad;
  uStack_364 = 0x3ea;
  iStack_36c = 0x73c369;
  iStack_368 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_36c = 0x7b9;
  iStack_370 = unaff_EBP + -0x10;
  uStack_374 = 0x73c37c;
  FUN_00679d86();
  iStack_36c = 0;
  iStack_370 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc1;
  uStack_374 = 0x73c38b;
  uStack_374 = FUN_00411641();
  uStack_378 = 0x73c397;
  FUN_00705ae5();
  uStack_378 = 0x73c39e;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_36c = 0x73c3aa;
  FUN_00402676();
  iStack_36c = 0x7a2;
  iStack_370 = unaff_EBP + -0x10;
  uStack_374 = 0x73c3bd;
  iStack_36c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xc2;
  iStack_370 = 0x73c3ca;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_36c = 0x73c3d6;
  FUN_00402676();
  iStack_36c = 0x578;
  iStack_370 = 0x73c3dc;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc3;
  if (iVar4 == 0) {
    iStack_36c = 0;
  }
  else {
    iStack_36c = 0x73c3ef;
    iStack_36c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_370 = 0x73c403;
  FUN_00450382();
  iStack_36c = 0x73c40e;
  piVar5 = (int *)FUN_00705ae5();
  iStack_36c = unaff_EBP + -0x78;
  iStack_370 = 2;
  uStack_374 = 0x21f;
  uStack_378 = 0x2e5;
  uStack_37c = 0x3ef;
  iStack_384 = 0x73c42b;
  iStack_380 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_384 = 0x7a7;
  iStack_388 = unaff_EBP + -0x10;
  uStack_38c = 0x73c43e;
  iStack_384 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xc4;
  iStack_388 = 0x73c44b;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_384 = 0x73c457;
  FUN_00402676();
  iStack_384 = 0x578;
  iStack_388 = 0x73c45d;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc5;
  if (iVar4 == 0) {
    iStack_384 = 0;
  }
  else {
    iStack_384 = 0x73c470;
    iStack_384 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_388 = 0x73c484;
  FUN_00450382();
  iStack_384 = 0x73c48f;
  piVar5 = (int *)FUN_00705ae5();
  iStack_384 = unaff_EBP + -0x78;
  iStack_388 = 2;
  uStack_38c = 0x203;
  uStack_390 = 0x26a;
  uStack_394 = 2000;
  iStack_39c = 0x73c4ac;
  iStack_398 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_39c = 0x7a8;
  iStack_3a0 = unaff_EBP + -0x10;
  uStack_3a4 = 0x73c4bf;
  iStack_39c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xc6;
  iStack_3a0 = 0x73c4cc;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_39c = 0x73c4d8;
  FUN_00402676();
  iStack_39c = 0x578;
  iStack_3a0 = 0x73c4de;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 199;
  if (iVar4 == 0) {
    iStack_39c = 0;
  }
  else {
    iStack_39c = 0x73c4f1;
    iStack_39c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3a0 = 0x73c505;
  FUN_00450382();
  iStack_39c = 0x73c510;
  piVar5 = (int *)FUN_00705ae5();
  iStack_39c = unaff_EBP + -0x78;
  iStack_3a0 = 2;
  uStack_3a4 = 0x203;
  uStack_3a8 = 0x288;
  uStack_3ac = 0x7d1;
  iStack_3b4 = 0x73c52d;
  iStack_3b0 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_3b4 = 0x7a9;
  iStack_3b8 = unaff_EBP + -0x10;
  uStack_3bc = 0x73c540;
  iStack_3b4 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 200;
  iStack_3b8 = 0x73c54d;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3b4 = 0x73c559;
  FUN_00402676();
  iStack_3b4 = 0x578;
  iStack_3b8 = 0x73c55f;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc9;
  if (iVar4 == 0) {
    iStack_3b4 = 0;
  }
  else {
    iStack_3b4 = 0x73c572;
    iStack_3b4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3b8 = 0x73c586;
  FUN_00450382();
  iStack_3b4 = 0x73c591;
  piVar5 = (int *)FUN_00705ae5();
  iStack_3b4 = unaff_EBP + -0x78;
  iStack_3b8 = 2;
  uStack_3bc = 0x203;
  uStack_3c0 = 0x2a6;
  uStack_3c4 = 0x7d2;
  iStack_3cc = 0x73c5ae;
  iStack_3c8 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_3cc = 0x7aa;
  iStack_3d0 = unaff_EBP + -0x10;
  uStack_3d4 = 0x73c5c1;
  iStack_3cc = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xca;
  iStack_3d0 = 0x73c5ce;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3cc = 0x73c5da;
  FUN_00402676();
  iStack_3cc = 0x578;
  iStack_3d0 = 0x73c5e0;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xcb;
  if (iVar4 == 0) {
    iStack_3cc = 0;
  }
  else {
    iStack_3cc = 0x73c5f3;
    iStack_3cc = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3d0 = 0x73c607;
  FUN_00450382();
  iStack_3cc = 0x73c612;
  piVar5 = (int *)FUN_00705ae5();
  iStack_3cc = unaff_EBP + -0x78;
  iStack_3d0 = 2;
  uStack_3d4 = 0x203;
  uStack_3d8 = 0x2c4;
  uStack_3dc = 0x7d3;
  iStack_3e4 = 0x73c62f;
  iStack_3e0 = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  iStack_3e4 = 0x7ab;
  iStack_3e8 = unaff_EBP + -0x10;
  uStack_3ec = 0x73c642;
  iStack_3e4 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xcc;
  iStack_3e8 = 0x73c64f;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3e4 = 0x73c65b;
  FUN_00402676();
  iStack_3e4 = 0x578;
  iStack_3e8 = 0x73c661;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xcd;
  if (iVar4 == 0) {
    iStack_3e4 = 0;
  }
  else {
    iStack_3e4 = 0x73c674;
    iStack_3e4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  iStack_3e8 = 0x73c688;
  FUN_00450382();
  iStack_3e4 = 0x73c693;
  piVar5 = (int *)FUN_00705ae5();
  iStack_3e4 = unaff_EBP + -0x78;
  iStack_3e8 = 2;
  uStack_3ec = 0x203;
  uStack_3f0 = 0x2e2;
  uStack_3f4 = 0x3ed;
  aiStack_410[5] = 0x73c6b0;
  aiStack_410[6] = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  aiStack_410[5] = 0x7ba;
  aiStack_410[4] = unaff_EBP + -0x10;
  aiStack_410[3] = 0x73c6c3;
  FUN_00679d86();
  aiStack_410[5] = 0;
  aiStack_410[4] = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xce;
  aiStack_410[3] = 0x73c6d2;
  aiStack_410[3] = FUN_00411641();
  aiStack_410[2] = 0x73c6de;
  FUN_00705ae5();
  aiStack_410[2] = 0x73c6e5;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  aiStack_410[5] = 0x73c6f1;
  FUN_00402676();
  if (*(int *)(iVar3 + 0xc78) == 0) {
    aiStack_410[5] = 0x7ac;
    aiStack_410[4] = unaff_EBP + -0x10;
    aiStack_410[3] = 0x73c736;
    aiStack_410[5] = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xd0;
    aiStack_410[4] = 0x73c743;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  }
  else {
    aiStack_410[5] = 0x7ad;
    aiStack_410[4] = unaff_EBP + -0x10;
    aiStack_410[3] = 0x73c70d;
    aiStack_410[5] = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xcf;
    aiStack_410[4] = 0x73c71a;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  }
  aiStack_410[5] = 0x73c74f;
  FUN_00402676();
  aiStack_410[5] = 0x578;
  aiStack_410[4] = 0x73c755;
  iVar4 = FUN_00402605();
  *(int *)(unaff_EBP + -0x50) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd1;
  if (iVar4 == 0) {
    aiStack_410[5] = 0;
  }
  else {
    aiStack_410[5] = 0x73c768;
    aiStack_410[5] = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  aiStack_410[4] = 0x73c77e;
  FUN_00450382();
  aiStack_410[5] = 0x73c785;
  piVar5 = (int *)FUN_00705ae5();
  aiStack_410[5] = unaff_EBP + -0x78;
  aiStack_410[4] = 2;
  aiStack_410[3] = 0x203;
  aiStack_410[2] = 0x300;
  aiStack_410[1] = 0x3ee;
  puStack_414 = (undefined4 *)0x73c7a2;
  aiStack_410[0] = iVar3;
  (**(code **)(*piVar5 + 0x20))();
  if (*(int *)(iVar3 + 0xc78) == 0) {
    puStack_414 = (undefined4 *)0x7bb;
    iStack_418 = unaff_EBP + -0x10;
    iStack_41c = 0x73c7f8;
    FUN_00679d86();
    puStack_414 = (undefined4 *)0x0;
    iStack_418 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xd3;
    iStack_41c = 0x73c807;
    iStack_41c = FUN_00411641();
    iStack_420 = 0x73c80f;
    FUN_00705ae5();
    iStack_420 = 0x73c816;
    FUN_00499493();
    *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  }
  else {
    puStack_414 = (undefined4 *)0x7bc;
    iStack_418 = unaff_EBP + -0x10;
    iStack_41c = 0x73c7be;
    FUN_00679d86();
    puStack_414 = (undefined4 *)0x0;
    iStack_418 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xd2;
    iStack_41c = 0x73c7cd;
    iStack_41c = FUN_00411641();
    iStack_420 = 0x73c7d5;
    FUN_00705ae5();
    iStack_420 = 0x73c7dc;
    FUN_00499493();
    *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  }
  puStack_414 = (undefined4 *)0x73c822;
  FUN_00402676();
  puStack_414 = (undefined4 *)0x73c827;
  FUN_004f14ee();
  puStack_414 = (undefined4 *)0x73c82e;
  FUN_0047b671();
  puStack_414 = (undefined4 *)0x73c833;
  FUN_006b414b();
  puStack_414 = (undefined4 *)0x73c83a;
  FUN_0051c0f2();
  *(undefined4 *)(iVar3 + 0xb18) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xab4) = 0xff315573;
  *(undefined4 *)(iVar3 + 0xab8) = 0xff559ab9;
  *(undefined4 *)(iVar3 + 0xabc) = 0xff404040;
  *(undefined4 *)(iVar3 + 0xac0) = 1;
  *(undefined4 *)(iVar3 + 0xac4) = 0xffffff94;
  *(undefined4 *)(iVar3 + 0xac8) = 0x5a;
  *(undefined4 *)(iVar3 + 0xad0) = 0x1c;
  *(undefined4 *)(iVar3 + 0xad4) = 0x1c;
  *(undefined4 *)(iVar3 + 0xad8) = 0x1c;
  *(undefined4 *)(iVar3 + 0xadc) = 0x1c;
  *(undefined4 *)(iVar3 + 0xacc) = 0;
  *(undefined4 *)(iVar3 + 0xae0) = 1;
  *(undefined4 *)(iVar3 + 0xb0c) = 0xc;
  *(undefined4 *)(iVar3 + 0xb10) = 0xff000000;
  puStack_414 = (undefined4 *)0x73c8be;
  FUN_004e21db();
  puStack_414 = (undefined4 *)0x73c8c5;
  iVar4 = FUN_0073cbe3();
  *(uint *)(iVar3 + 0xb24) = (-(uint)(iVar4 != 0) & 0xba) + 0x46;
  puStack_414 = (undefined4 *)0x73c8dd;
  uVar1 = (*DAT_0097b704)();
  puStack_414 = &DAT_00980690;
  *(undefined4 *)(iVar3 + 0xbbc) = uVar1;
  *(undefined4 *)(iVar3 + 0xc1c) = 0;
  iStack_418 = 0x73c8f2;
  FUN_00424aee();
  puStack_414 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd4;
  iStack_418 = 0x73c8ff;
  FUN_00424aee();
  puStack_414 = (undefined4 *)(unaff_EBP + -0x60);
  iStack_418 = unaff_EBP + -0x3c;
  iStack_41c = 0;
  iStack_420 = 0xe;
  uStack_424 = 0x1b2;
  uVar8 = 0;
  iVar3 = unaff_EBP + -0x10;
  uVar1 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd5;
  FUN_0056a764(iVar3,0,0);
  FUN_004458c1();
  puStack_414 = (undefined4 *)FUN_0042a39f(iVar3,uVar1,uVar8);
  iStack_418 = 0x73c93a;
  FUN_007487f1();
  puStack_414 = (undefined4 *)0x73c942;
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0xd4;
  puStack_414 = (undefined4 *)0x73c94e;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  puStack_414 = (undefined4 *)0x73c95a;
  FUN_00404892();
  puStack_414 = (undefined4 *)0xffffffff;
  iStack_418 = 0x73c963;
  FUN_00424e27();
  iStack_418 = 0x73c96a;
  FUN_00444e05();
  puStack_414 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_418 = 0x73c973;
  FUN_004f14fa();
  iStack_418 = 0x73c97a;
  FUN_00485656();
  puStack_414 = (undefined4 *)0x1;
  iStack_418 = 0x73c983;
  iStack_418 = FUN_005ee6c0();
  iStack_41c = 0x73c98c;
  FUN_0043f060();
  puStack_414 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd7;
  iStack_418 = 0x73c99b;
  FUN_00424e27();
  iStack_418 = 0x73c9a2;
  FUN_00429607();
  *(undefined1 *)(unaff_EBP + -4) = 0xd6;
  puStack_414 = (undefined4 *)0x73c9ae;
  FUN_00404892();
  puStack_414 = (undefined4 *)0x73c9b6;
  FUN_004115a0();
  puStack_414 = (undefined4 *)0x1;
  iStack_418 = 0x73c9c0;
  iStack_418 = FUN_007487ff();
  iStack_41c = 0x73c9c9;
  FUN_0043f060();
  puStack_414 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd8;
  iStack_418 = 0x73c9d8;
  FUN_00424e27();
  iStack_418 = 0x73c9df;
  FUN_00444e29();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  puStack_414 = (undefined4 *)0x73c9eb;
  FUN_00404892();
  puStack_414 = (undefined4 *)0x1;
  iStack_418 = 0x73c9f4;
  FUN_00424e27();
  iStack_418 = 0x73c9fb;
  FUN_006e612a();
  puStack_414 = &DAT_00980690;
  iStack_418 = 0x73ca04;
  FUN_00424aee();
  puStack_414 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd9;
  iStack_418 = 0x73ca11;
  FUN_00424aee();
  puStack_414 = (undefined4 *)(unaff_EBP + -0x60);
  iStack_418 = unaff_EBP + -0x3c;
  iStack_41c = 0x1db;
  iStack_420 = 0xf2;
  *(undefined1 *)(unaff_EBP + -4) = 0xda;
  uStack_424 = 0x73ca2e;
  FUN_00424e27();
  uStack_424 = 0x73ca35;
  FUN_00424f2f();
  *(undefined1 *)(unaff_EBP + -4) = 0xd9;
  puStack_414 = (undefined4 *)0x73ca41;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xb9;
  puStack_414 = (undefined4 *)0x73ca4d;
  FUN_00404892();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    puStack_414 = (undefined4 *)0x73ca5f;
    FUN_00483ba7();
    puStack_414 = (undefined4 *)0xdc3;
    iStack_418 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0xdb;
    iStack_41c = 0x73ca76;
    FUN_00679d22();
    puStack_414 = *(undefined4 **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xdc;
    iStack_418 = 0x73ca84;
    iStack_418 = FUN_00449713();
    iStack_41c = unaff_EBP + -0x68;
    iStack_420 = 0x73ca8e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xdb;
    puStack_414 = (undefined4 *)0x73ca9d;
    FUN_00414ebb();
    puStack_414 = &DAT_00980690;
    iStack_418 = 0x73caa6;
    FUN_00424aee();
    puStack_414 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xdd;
    iStack_418 = 0x73cab3;
    FUN_00424aee();
    puStack_414 = (undefined4 *)0xffffffff;
    iStack_418 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xde;
    iStack_41c = 0x73cac3;
    iStack_41c = FUN_00449713();
    iStack_420 = 0x73cac9;
    FUN_0073cbcc();
    puStack_414 = (undefined4 *)0x73cad7;
    FUN_0087a1b0();
    puStack_414 = (undefined4 *)0x0;
    iStack_418 = 0;
    iStack_41c = unaff_EBP + -0x60;
    iStack_420 = unaff_EBP + -0x3c;
    uStack_424 = 0xffffffff;
    uVar1 = FUN_00449713(aiStack_410);
    uVar1 = FUN_00456ad5(uVar1);
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_424;
    FUN_004033a1(uVar1);
    iVar3 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0xde;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xe0;
    iStack_41c = 0x73cb2c;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x50) = uVar1;
    puStack_414 = (undefined4 *)(unaff_EBP + -0x50);
    iStack_418 = 0x73cb3a;
    FUN_00503a3a();
    *(undefined1 *)(unaff_EBP + -4) = 0xde;
    puStack_414 = (undefined4 *)0x73cb49;
    FUN_00404892();
    *(undefined1 *)(unaff_EBP + -4) = 0xdd;
    puStack_414 = (undefined4 *)0x73cb55;
    FUN_00404892();
    *(undefined1 *)(unaff_EBP + -4) = 0xdb;
    puStack_414 = (undefined4 *)0x73cb61;
    FUN_00404892();
    *(undefined1 *)(unaff_EBP + -4) = 0xb9;
    puStack_414 = (undefined4 *)0x73cb6d;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 0x10);
  puStack_414 = (undefined4 *)0x73cb82;
  iVar3 = FUN_004f14ee();
  puStack_414 = *(undefined4 **)(iVar3 + 0x4c);
  if (((int)puStack_414 < 1) || (3 < (int)puStack_414)) {
    puStack_414 = (undefined4 *)0x1;
  }
  iStack_418 = 0x73cb9a;
  FUN_0073da1a();
  puStack_414 = (undefined4 *)0x73cba1;
  FUN_00745acd();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  puStack_414 = (undefined4 *)0x73cbad;
  FUN_0044f639();
  puStack_414 = (undefined4 *)0x73cbb5;
  FUN_004115cc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


