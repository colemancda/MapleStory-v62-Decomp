/* FUN_005a55ec - 0x005a55ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a55ec(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined1 *puVar12;
  bool bVar13;
  undefined4 uStack_340;
  int iStack_33c;
  undefined4 uStack_338;
  int iStack_334;
  undefined4 uStack_330;
  undefined1 *puStack_32c;
  undefined1 *puStack_328;
  int *local_324;
  int *piVar14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x84) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _local_324 = (double)CONCAT44(0x5a560f,local_324);
  FUN_005a728b();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  _local_324 = 8.553409903653477e-306;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  _local_324 = 8.553409903653498e-306;
  FUN_00403191();
  _local_324 = 0.0;
  puStack_328 = (undefined1 *)(unaff_EBP + -0x10c);
  puStack_32c = (undefined1 *)(unaff_EBP + -0xec);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_330 = 0x5a5656;
  iStack_334 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x38) = &uStack_330;
  uStack_338 = 0x5a5662;
  FUN_004033a1();
  iStack_334 = unaff_EBP + -0x2ec;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_338 = 0x5a5672;
  FUN_00405a1d();
  uStack_338 = 0x5a5679;
  FUN_00402660();
  uStack_338 = 0x5a5680;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_328 = (undefined1 *)0x5a568b;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xd4) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    _local_324 = (double)CONCAT44(unaff_EBP + -0xd4,0x5a56a7);
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      _local_324 = (double)CONCAT44(iVar2,0x5a56b8);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  _local_324 = (double)CONCAT44(unaff_EBP + -0x2ec,0x5a56c8);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a56d3);
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  _local_324 = (double)CONCAT44(unaff_EBP + -0xec,0x5a56e3);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a56ee);
    FUN_00878dfb();
  }
  piVar14 = (int *)(unaff_EBP + -0x10c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  local_324 = (int *)0x5a56fe;
  iVar2 = FUN_00402bc3();
  local_324 = piVar14;
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a5709);
    FUN_00878dfb();
    local_324 = extraout_ECX_00;
  }
  puStack_32c = (undefined1 *)&local_324;
  piVar14 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x38) = &local_324;
  puStack_328 = (undefined1 *)0x5eb;
  uStack_330 = 0x5a5722;
  FUN_00679e4e();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a5732;
  FUN_0040263d();
  puStack_32c = (undefined1 *)0x5a5739;
  uVar3 = FUN_004048a4();
  _local_324 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_328 = (undefined1 *)0x5a5743;
  iVar2 = FUN_00412550();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(uint *)(unaff_EBP + -0x88) = (uint)(iVar2 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a575e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    _local_324 = (double)CONCAT44(iVar4,0x5a576b);
    FUN_00878dfb();
  }
  if ((iVar2 != 0) == 0) {
    puVar12 = (undefined1 *)0x0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        _local_324 = -3.47731479517347e-310;
        FUN_00878dfb();
      }
      _local_324 = (double)CONCAT44(0x5a578c,local_324);
      puVar5 = (undefined1 *)FUN_0040cf4d();
      if (puVar5 <= puVar12) break;
      _local_324 = (double)CONCAT44(0x5a579c,SUB84(_local_324,0));
      FUN_0087a1b0();
      _local_324 = 0.0;
      uStack_330 = 0x5a57a7;
      puStack_32c = puVar12;
      puStack_328 = &stack0xfffffce4;
      puStack_32c = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_328;
      uStack_330 = 0x5a57b3;
      FUN_004033a1();
      puStack_32c = (undefined1 *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_330 = 0x5a57c3;
      FUN_0040263d();
      uStack_330 = 0x5a57ca;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_328 = (undefined1 *)0x5a57d5;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
      _local_324 = (double)CONCAT44(unaff_EBP + -0x60,0x5a57e4);
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        _local_324 = (double)CONCAT44(iVar2,0x5a57f5);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      _local_324 = (double)CONCAT44(unaff_EBP + -0x78,0x5a5802);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_324 = (double)CONCAT44(iVar2,0x5a580d);
        FUN_00878dfb();
      }
      _local_324 = 2.92525893524039e-317;
      cVar1 = FUN_004115ef();
      if (cVar1 == '\0') {
        _local_324 = -NAN;
        p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bcfb();
        _local_324 = (double)CONCAT44(*(IBinding **)(unaff_EBP + -0x5c),0x5a582e);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (p_Var6,*(IBinding **)(unaff_EBP + -0x5c));
      }
      puVar12 = puVar12 + 1;
    }
  }
  puStack_32c = (undefined1 *)&local_324;
  piVar14 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x38) = &local_324;
  puStack_328 = (undefined1 *)0x5fb;
  uStack_330 = 0x5a5848;
  FUN_00679e4e();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a5858;
  FUN_0040263d();
  puStack_32c = (undefined1 *)0x5a585f;
  uVar3 = FUN_004048a4();
  _local_324 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_328 = (undefined1 *)0x5a5869;
  iVar2 = FUN_00412550();
  *(uint *)(unaff_EBP + -0xc4) = (uint)(iVar2 != 0);
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a5882;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a588f);
    FUN_00878dfb();
  }
  puStack_32c = (undefined1 *)&local_324;
  piVar14 = (int *)0x64;
  *(int ***)(unaff_EBP + -0x38) = &local_324;
  puStack_328 = (undefined1 *)0x3ca;
  uStack_330 = 0x5a58a4;
  FUN_00679e4e();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a58b4;
  FUN_0040263d();
  puStack_32c = (undefined1 *)0x5a58bb;
  uVar3 = FUN_004048a4();
  _local_324 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_328 = (undefined1 *)0x5a58c5;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x90) = uVar3;
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a58d8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a58e5);
    FUN_00878dfb();
  }
  puStack_32c = (undefined1 *)&local_324;
  piVar14 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x38) = &local_324;
  puStack_328 = (undefined1 *)0xe90;
  uStack_330 = 0x5a58f9;
  FUN_00679e4e();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a5909;
  FUN_0040263d();
  puStack_32c = (undefined1 *)0x5a5910;
  uVar3 = FUN_004048a4();
  _local_324 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_328 = (undefined1 *)0x5a591a;
  iVar2 = FUN_00412550();
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_32c = (undefined1 *)0x5a592f;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    _local_324 = (double)CONCAT44(iVar4,0x5a593c);
    FUN_00878dfb();
  }
  if (iVar2 == 0) {
    puStack_32c = (undefined1 *)&local_324;
    piVar14 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x38) = &local_324;
    puStack_328 = (undefined1 *)0x3cf;
    uStack_330 = 0x5a59b1;
    FUN_00679e4e();
    puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_32c = (undefined1 *)0x5a59c1;
    FUN_0040263d();
    puStack_32c = (undefined1 *)0x5a59c8;
    uVar3 = FUN_004048a4();
    _local_324 = (double)CONCAT44(piVar14,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_328 = (undefined1 *)0x5a59d2;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
  }
  else {
    puStack_32c = (undefined1 *)&local_324;
    piVar14 = (int *)0x64;
    *(int ***)(unaff_EBP + -0x38) = &local_324;
    puStack_328 = (undefined1 *)0x3cf;
    uStack_330 = 0x5a5955;
    FUN_00679e4e();
    puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_32c = (undefined1 *)0x5a5965;
    FUN_0040263d();
    puStack_32c = (undefined1 *)0x5a596c;
    uVar3 = FUN_004048a4();
    _local_324 = (double)CONCAT44(piVar14,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_328 = (undefined1 *)0x5a5976;
    iVar2 = FUN_00412550();
    puStack_328 = (undefined1 *)0x5a597d;
    iVar4 = _rand();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    *(int *)(unaff_EBP + -0x68) = (iVar2 * (iVar4 % 0x19 + 0x1e)) / 100;
  }
  puStack_328 = (undefined1 *)(unaff_EBP + -0x78);
  puStack_32c = (undefined1 *)0x5a59e2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_324 = (double)CONCAT44(iVar2,0x5a59ef);
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x68) == 0) {
    _local_324 = 8.553409903654731e-306;
    FUN_00403191();
    _local_324 = 6.36598737289582e-314;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_328 = (undefined1 *)0x5a5a18;
    FUN_004031b7();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (bVar13) {
      _local_324 = -3.47731479520722e-310;
      FUN_00878dfb();
    }
    _local_324 = (double)CONCAT44(unaff_EBP + -0xfc,unaff_EBP + -0x54);
    puStack_328 = (undefined1 *)0x0;
    puStack_32c = (undefined1 *)0x0;
    uStack_330 = 0;
    iStack_334 = 0;
    uStack_338 = 0;
    iStack_33c = unaff_EBP + 0x10;
    uStack_340 = 0x5a5a4e;
    FUN_0042a39f();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    _local_324 = (double)CONCAT44(unaff_EBP + -0x54,0x5a5a5b);
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      _local_324 = (double)CONCAT44(iVar2,0x5a5a66);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    _local_324 = (double)CONCAT44(unaff_EBP + -0xfc,0x5a5a76);
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      _local_324 = (double)CONCAT44(iVar2,0x5a5a81);
      FUN_00878dfb();
    }
    _local_324 = 8.553409903654898e-306;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    _local_324 = 8.553409903654918e-306;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      _local_324 = -3.47731479521339e-310;
      FUN_00878dfb();
    }
    _local_324 = (double)CONCAT44(unaff_EBP + 0xc,0x5a5ab8);
    piVar7 = (int *)FUN_004113e5();
    iVar2 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (iVar2 == 0) {
      _local_324 = -3.47731479521478e-310;
      FUN_00878dfb();
    }
    piVar7 = (int *)*piVar7;
    puStack_32c = *(undefined1 **)(unaff_EBP + -0xec);
    puStack_328 = *(undefined1 **)(unaff_EBP + -0xe8);
    iVar2 = *piVar7;
    _local_324 = *(double *)(unaff_EBP + -0xe4);
    iStack_33c = *(undefined4 *)(unaff_EBP + -0x10c);
    uStack_338 = *(undefined4 *)(unaff_EBP + -0x108);
    uStack_340 = 0xff;
    iStack_334 = *(undefined4 *)(unaff_EBP + -0x104);
    *(int **)(unaff_EBP + 0x14) = piVar7;
    uStack_330 = *(undefined4 *)(unaff_EBP + -0x100);
    iVar2 = (**(code **)(iVar2 + 0x90))(piVar7,0xff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0x14),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x10c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iVar2 = FUN_00402bc3(unaff_EBP + -0xec);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (p_Var6,*(IBinding **)(unaff_EBP + 0x10));
    FUN_00412600();
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0041a545();
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + 8) + -0xc);
    }
  }
  else {
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) * -8000 + 50000;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    if (0 < *(int *)(unaff_EBP + -0x68)) {
      do {
        iVar2 = *(int *)(unaff_EBP + -0x30);
        _local_324 = (double)CONCAT44(0x5a5bd6,local_324);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x28) = iVar4 % 4;
        _local_324 = (double)CONCAT44(0x5a5be4,local_324);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x28) * (iVar4 % 4) + 0xf;
        _local_324 = (double)CONCAT44(0x5a5bfb,local_324);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x28) = iVar4 % 0x168;
        _local_324 = (double)CONCAT44(0x5a5c0b,local_324);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0xc0) = iVar4 % 3000 + 3000;
        if (*(int *)(unaff_EBP + -0x88) == 0) {
          if (*(int *)(unaff_EBP + -0x58) == 0) {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x58) + -4);
          }
          _local_324 = (double)CONCAT44(0x5a5c3b,local_324);
          uVar8 = _rand();
          *(uint *)(unaff_EBP + -0x14) = uVar8 % *(uint *)(unaff_EBP + -0x14);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        iVar4 = *(int *)(unaff_EBP + 0x10);
        if (iVar4 == 0) {
          _local_324 = (double)CONCAT44(0x5a5e4b,local_324);
          iVar2 = _rand();
          *(int *)(unaff_EBP + -0x20) = iVar2 % 800 + -400;
          _local_324 = (double)CONCAT44(0x5a5e5d,local_324);
          iVar4 = _rand();
          iVar4 = iVar4 % 600;
          iVar2 = iVar4 + -300;
          *(int *)(unaff_EBP + -0x30) = iVar2;
          _local_324 = (double)CONCAT44(0x5a5e71,local_324);
          iVar10 = _rand();
          *(int *)(unaff_EBP + -0x2c) = iVar10 % 200 + -100 + *(int *)(unaff_EBP + -0x20);
LAB_005a5e89:
          *(int *)(unaff_EBP + -0x34) = iVar4;
        }
        else {
          if (iVar4 == 1) {
            _local_324 = (double)CONCAT44(0x5a5e06,local_324);
            iVar2 = _rand();
            *(int *)(unaff_EBP + -0x20) = iVar2 % 800 + -400;
            _local_324 = (double)CONCAT44(0x5a5e18,local_324);
            iVar2 = _rand();
            iVar4 = -(iVar2 % 600);
            iVar2 = iVar4 + 300;
            *(int *)(unaff_EBP + -0x30) = iVar2;
            _local_324 = (double)CONCAT44(0x5a5e2c,local_324);
            iVar10 = _rand();
            *(int *)(unaff_EBP + -0x2c) = iVar10 % 200 + -100 + *(int *)(unaff_EBP + -0x20);
            goto LAB_005a5e89;
          }
          if (iVar4 == 2) {
            _local_324 = (double)CONCAT44(0x5a5dc1,local_324);
            iVar4 = _rand();
            *(int *)(unaff_EBP + -0x20) = -(iVar4 % 800) + 400;
            _local_324 = (double)CONCAT44(0x5a5dd3,local_324);
            iVar2 = _rand();
            iVar2 = iVar2 % 600 + -300;
            *(int *)(unaff_EBP + -0x30) = iVar2;
            *(int *)(unaff_EBP + -0x2c) = -(iVar4 % 800);
LAB_005a5deb:
            _local_324 = (double)CONCAT44(0x5a5df0,local_324);
            iVar4 = _rand();
            iVar4 = iVar4 % 200 + -100 + iVar2;
            goto LAB_005a5e89;
          }
          if (iVar4 == 3) {
            _local_324 = (double)CONCAT44(0x5a5d8e,local_324);
            iVar2 = _rand();
            *(int *)(unaff_EBP + -0x20) = iVar2 % 800 + -400;
            _local_324 = (double)CONCAT44(0x5a5da0,local_324);
            iVar2 = _rand();
            iVar2 = iVar2 % 600 + -300;
            *(int *)(unaff_EBP + -0x30) = iVar2;
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x20) + 400;
            goto LAB_005a5deb;
          }
          if (iVar4 == 4) {
            _local_324 = (double)CONCAT44(0x5a5d1c,local_324);
            iVar2 = _rand();
            *(int *)(unaff_EBP + -0x20) = iVar2 % 0x14 + 0x186;
            _local_324 = (double)CONCAT44(0x5a5d30,local_324);
            iVar2 = _rand();
            _local_324 = (double)*(int *)(unaff_EBP + -0x28);
            *(double *)(unaff_EBP + -0x4c) = _local_324;
            iVar2 = iVar2 % 0x14 + 0x24e;
            *(int *)(unaff_EBP + -0x30) = iVar2;
            puStack_328 = (undefined1 *)0x5a5d51;
            FUN_0087ae74();
            puStack_328 = (undefined1 *)0x5a5d62;
            uVar3 = __ftol();
            _local_324 = *(double *)(unaff_EBP + -0x4c);
            *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
            puStack_328 = (undefined1 *)0x5a5d70;
            FUN_0087adc4();
            puStack_328 = (undefined1 *)0x5a5d75;
            puStack_328 = (undefined1 *)__ftol();
            puStack_32c = (undefined1 *)0x5a5d7b;
            iVar4 = FUN_0087a90a();
            iVar4 = iVar4 * 0x2d1;
            goto LAB_005a5e89;
          }
          if (iVar4 == 5) {
            _local_324 = (double)CONCAT44(0x5a5cab,local_324);
            iVar2 = _rand();
            *(int *)(unaff_EBP + -0x20) = iVar2 % 0x14 + 0x186;
            _local_324 = (double)CONCAT44(0x5a5cbf,local_324);
            iVar2 = _rand();
            _local_324 = (double)*(int *)(unaff_EBP + -0x28);
            *(double *)(unaff_EBP + -0x4c) = _local_324;
            iVar2 = iVar2 % 0x14 + 0x122;
            *(int *)(unaff_EBP + -0x30) = iVar2;
            puStack_328 = (undefined1 *)0x5a5ce0;
            FUN_0087ae74();
            puStack_328 = (undefined1 *)0x5a5cf1;
            uVar3 = __ftol();
            _local_324 = *(double *)(unaff_EBP + -0x4c);
            *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
            puStack_328 = (undefined1 *)0x5a5cff;
            FUN_0087adc4();
            _local_324 = (double)CONCAT44(0x5a5d12,local_324);
            iVar4 = __ftol();
            goto LAB_005a5e89;
          }
          if (iVar4 == 6) {
            _local_324 = (double)CONCAT44(0x5a5c80,local_324);
            iVar2 = _rand();
            *(int *)(unaff_EBP + -0x20) = iVar2 % 800 + -400;
            _local_324 = (double)CONCAT44(0x5a5c92,local_324);
            iVar2 = _rand();
            iVar2 = iVar2 % 600 + -300;
            *(int *)(unaff_EBP + -0x30) = iVar2;
          }
        }
        puVar12 = (undefined1 *)0x0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (*(int *)(unaff_EBP + -0x88) == 0) {
          _local_324 = 8.55340990365624e-306;
          FUN_00403191();
          _local_324 = (double)CONCAT44(1,*(undefined4 *)
                                           (*(int *)(unaff_EBP + -0x58) +
                                           *(int *)(unaff_EBP + -0x14) * 4));
          puStack_328 = (undefined1 *)0x5a5ec9;
          FUN_0040ee87();
          bVar13 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (bVar13) {
            _local_324 = -3.4773147952665e-310;
            FUN_00878dfb();
          }
          _local_324 = (double)CONCAT44(unaff_EBP + -0x16c,unaff_EBP + -0xfc);
          puStack_328 = (undefined1 *)0xc0061508;
          puStack_32c = (undefined1 *)0x0;
          uStack_330 = 0;
          iStack_334 = 0;
          uStack_338 = 0;
          iStack_33c = unaff_EBP + -0xa8;
          uStack_340 = 0x5a5f08;
          puVar9 = (undefined4 *)FUN_0042a39f();
          _local_324 = (double)CONCAT44((IBinding *)*puVar9,0x5a5f12);
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar9);
          _local_324 = (double)CONCAT44(0x5a5f1d,local_324);
          FUN_00412600();
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          _local_324 = (double)CONCAT44(unaff_EBP + -0xfc,0x5a5f2d);
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _local_324 = (double)CONCAT44(iVar4,0x5a5f38);
            FUN_00878dfb();
          }
          piVar14 = (int *)(unaff_EBP + -0x16c);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          local_324 = (int *)0x5a5f48;
          iVar4 = FUN_00402bc3();
          local_324 = piVar14;
          if (iVar4 < 0) {
            _local_324 = (double)CONCAT44(iVar4,0x5a5f53);
            FUN_00878dfb();
            local_324 = extraout_ECX_01;
          }
          puStack_32c = (undefined1 *)&local_324;
          piVar14 = (int *)0xff;
          *(int ***)(unaff_EBP + -0x48) = &local_324;
          puStack_328 = (undefined1 *)0x3b6;
          uStack_330 = 0x5a5f6e;
          FUN_00679e4e();
          puStack_328 = (undefined1 *)(unaff_EBP + -200);
          puStack_32c = *(undefined1 **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_330 = 0x5a5f84;
          FUN_0048bd86();
          puStack_32c = (undefined1 *)0x5a5f8b;
          FUN_004115d9();
          puStack_32c = (undefined1 *)0x5a5f92;
          FUN_00404e7f();
          puStack_328 = (undefined1 *)(unaff_EBP + -0x30c);
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          puStack_32c = (undefined1 *)0x5a5fa4;
          FUN_0040263d();
          puStack_32c = (undefined1 *)0x5a5fab;
          uVar3 = FUN_004048a4();
          _local_324 = (double)CONCAT44(piVar14,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          puStack_328 = (undefined1 *)0x5a5fb5;
          uVar3 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
          puStack_328 = (undefined1 *)(unaff_EBP + -0x30c);
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          puStack_32c = (undefined1 *)0x5a5fc8;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _local_324 = (double)CONCAT44(iVar4,0x5a5fd5);
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          _local_324 = (double)CONCAT44(0x5a5fe4,local_324);
          FUN_004027eb();
          _local_324 = 8.553409903656642e-306;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          _local_324 = 8.553409903656662e-306;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            _local_324 = -3.47731479528172e-310;
            FUN_00878dfb();
          }
          _local_324 = (double)CONCAT44(unaff_EBP + -0x94,0x5a6022);
          piVar7 = (int *)FUN_004113e5();
          iVar4 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          if (iVar4 == 0) {
            _local_324 = -3.47731479528345e-310;
            FUN_00878dfb();
          }
          piVar7 = (int *)*piVar7;
          puStack_32c = *(undefined1 **)(unaff_EBP + -0x22c);
          puStack_328 = *(undefined1 **)(unaff_EBP + -0x228);
          iVar4 = *piVar7;
          _local_324 = *(double *)(unaff_EBP + -0x224);
          iStack_33c = *(undefined4 *)(unaff_EBP + -0x29c);
          uStack_338 = *(undefined4 *)(unaff_EBP + -0x298);
          uStack_340 = 0;
          iStack_334 = *(int *)(unaff_EBP + -0x294);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          uStack_330 = *(undefined4 *)(unaff_EBP + -0x290);
          iVar4 = (**(code **)(iVar4 + 0x90))(piVar7,*(undefined4 *)(unaff_EBP + -0x60));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x29c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x22c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
        }
        else {
          while( true ) {
            _local_324 = (double)CONCAT44(0x5a60cd,SUB84(_local_324,0));
            FUN_0087a1b0();
            _local_324 = 0.0;
            uStack_330 = 0x5a60d8;
            puStack_32c = puVar12;
            puStack_328 = &stack0xfffffce4;
            puStack_32c = (undefined1 *)FUN_00412335();
            *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_328;
            uStack_330 = 0x5a60e4;
            FUN_004033a1();
            puStack_32c = (undefined1 *)(unaff_EBP + -0x2fc);
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            uStack_330 = 0x5a60f7;
            FUN_0040263d();
            uStack_330 = 0x5a60fe;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            puStack_328 = (undefined1 *)0x5a6109;
            iVar4 = FUN_004032b4();
            *(int *)(unaff_EBP + -0xd8) = iVar4;
            *(undefined4 *)(unaff_EBP + -100) = 0;
            if (iVar4 != 0) {
              _local_324 = (double)CONCAT44(unaff_EBP + -0xd8,0x5a6125);
              iVar4 = FUN_00404b30();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                _local_324 = (double)CONCAT44(iVar4,0x5a6136);
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            _local_324 = (double)CONCAT44(unaff_EBP + -0x2fc,0x5a6146);
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              _local_324 = (double)CONCAT44(iVar4,0x5a6151);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            if (*(int *)(unaff_EBP + -100) == 0) break;
            _local_324 = (double)CONCAT44(0x5a6162,local_324);
            FUN_004027eb();
            puVar12 = puVar12 + 1;
          }
          _local_324 = (double)CONCAT44(0x5a616d,local_324);
          FUN_004027eb();
          _local_324 = (double)CONCAT44(0x5a6172,local_324);
          iVar4 = _rand();
          _local_324 = (double)CONCAT44(0x5a617f,SUB84(_local_324,0));
          FUN_0087a1b0();
          _local_324 = 0.0;
          uStack_330 = 0x5a618a;
          puStack_32c = (undefined1 *)(iVar4 % (int)puVar12);
          puStack_328 = &stack0xfffffce4;
          puStack_32c = (undefined1 *)FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_328;
          uStack_330 = 0x5a6196;
          FUN_004033a1();
          puStack_32c = (undefined1 *)(unaff_EBP + -0x31c);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          uStack_330 = 0x5a61a9;
          FUN_0040263d();
          uStack_330 = 0x5a61b0;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          puStack_328 = (undefined1 *)0x5a61bb;
          iVar4 = FUN_004032b4();
          *(int *)(unaff_EBP + -0xdc) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x80) = 0;
          if (iVar4 != 0) {
            _local_324 = (double)CONCAT44(unaff_EBP + -0xdc,0x5a61d7);
            iVar4 = FUN_00404b30();
            if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
              _local_324 = (double)CONCAT44(iVar4,0x5a61e8);
              FUN_00878dfb();
            }
          }
          piVar14 = (int *)(unaff_EBP + -0x31c);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          local_324 = (int *)0x5a61f8;
          iVar4 = FUN_00402bc3();
          puVar12 = (undefined1 *)piVar14;
          if (iVar4 < 0) {
            _local_324 = (double)CONCAT44(iVar4,0x5a6203);
            FUN_00878dfb();
            puVar12 = extraout_ECX_02;
          }
          _local_324 = 1.25986739689518e-321;
          puStack_328 = (undefined1 *)0xc0061508;
          *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_32c;
          uStack_330 = 0;
          iStack_334 = 0x5a621a;
          puStack_32c = puVar12;
          FUN_00424e0a();
          uStack_330 = 0;
          iStack_334 = 0;
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_338;
          iStack_33c = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          uStack_340 = 0x5a622c;
          FUN_00424dd7();
          iStack_33c = 0;
          *(undefined4 **)(unaff_EBP + -0x48) = &uStack_340;
          FUN_00424dbc(unaff_EBP + -0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          puVar9 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x9c);
          _local_324 = (double)CONCAT44((IBinding *)*puVar9,0x5a6259);
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar9);
          _local_324 = (double)CONCAT44(0x5a6264,local_324);
          FUN_00412600();
          _local_324 = 8.553409903657458e-306;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          _local_324 = 8.553409903657478e-306;
          FUN_00403191();
          piVar7 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          if (piVar7 == (int *)0x0) {
            _local_324 = -3.47731479531369e-310;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + -0x10);
          }
          puStack_32c = *(undefined1 **)(unaff_EBP + -0x2ac);
          puStack_328 = *(undefined1 **)(unaff_EBP + -0x2a8);
          iVar4 = *piVar7;
          _local_324 = *(double *)(unaff_EBP + -0x2a4);
          iStack_33c = *(undefined4 *)(unaff_EBP + -0x14c);
          uStack_338 = *(undefined4 *)(unaff_EBP + -0x148);
          iStack_334 = *(int *)(unaff_EBP + -0x144);
          uStack_340 = 0x20;
          *(int **)(unaff_EBP + -0x14) = piVar7;
          uStack_330 = *(undefined4 *)(unaff_EBP + -0x140);
          iVar4 = (**(code **)(iVar4 + 0x110))(piVar7);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x14c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x2ac);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          FUN_004027eb();
        }
        if (*(int *)(unaff_EBP + -0xc4) == 0) {
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)FUN_0042bc90(unaff_EBP + -0xa4);
          iVar4 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)*piVar7;
          iVar4 = *piVar7;
          *(int **)(unaff_EBP + -0x14) = piVar7;
          iVar4 = (**(code **)(iVar4 + 0x90))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x3c),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x11c),
                             *(undefined4 *)(unaff_EBP + -0x118),*(undefined4 *)(unaff_EBP + -0x114)
                             ,*(undefined4 *)(unaff_EBP + -0x110),
                             *(undefined4 *)(unaff_EBP + -0x24c),*(undefined4 *)(unaff_EBP + -0x248)
                             ,*(undefined4 *)(unaff_EBP + -0x244),
                             *(undefined4 *)(unaff_EBP + -0x240));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x11c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x24c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
        }
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        puVar9 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xd0,0x3b1);
        uVar3 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_00437222(uVar3,unaff_EBP + -0x24,0);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int *)(unaff_EBP + -0xd0) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0xd0) + -0xc);
        }
        puVar9 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xac,0x3b1);
        uVar3 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        FUN_00437222(uVar3,unaff_EBP + -0x44,0);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int *)(unaff_EBP + -0xac) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0xac) + -0xc);
        }
        puVar9 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xcc,0x3b1);
        uVar3 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        FUN_00437222(uVar3,unaff_EBP + -0x40,0);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int *)(unaff_EBP + -0xcc) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0xcc) + -0xc);
        }
        puVar9 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xb4,0x3b1);
        uVar3 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        FUN_00437222(uVar3,unaff_EBP + -0x18,0);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int *)(unaff_EBP + -0xb4) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0xb4) + -0xc);
        }
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x44),1);
        piVar7 = *(int **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        if (piVar7 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar7 = *(int **)(unaff_EBP + -0x40);
        }
        iVar4 = *piVar7;
        *(int **)(unaff_EBP + -0x14) = piVar7;
        iVar4 = (**(code **)(iVar4 + 100))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x18c),
                           *(undefined4 *)(unaff_EBP + -0x188),*(undefined4 *)(unaff_EBP + -0x184),
                           *(undefined4 *)(unaff_EBP + -0x180));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x18c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        FUN_00403191(&DAT_00980690);
        puVar9 = *(undefined4 **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        if (puVar9 == (undefined4 *)0x0) {
          FUN_00878dfb(0x80004003);
          puVar9 = *(undefined4 **)(unaff_EBP + -0x40);
        }
        *(undefined4 *)(unaff_EBP + -0x14) = *puVar9;
        *(undefined4 **)(unaff_EBP + -0x48) = puVar9;
        iVar4 = (**(code **)(*(int *)(unaff_EBP + -0x14) + 0x90))
                          (puVar9,*(int *)(unaff_EBP + -0x3c) / 2,0,
                           *(undefined4 *)(unaff_EBP + -0x2dc),*(undefined4 *)(unaff_EBP + -0x2d8),
                           *(undefined4 *)(unaff_EBP + -0x2d4),*(undefined4 *)(unaff_EBP + -0x2d0),
                           *(undefined4 *)(unaff_EBP + -0x1ac),*(undefined4 *)(unaff_EBP + -0x1a8),
                           *(undefined4 *)(unaff_EBP + -0x1a4),*(undefined4 *)(unaff_EBP + -0x1a0));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x2dc);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x1ac);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        piVar7 = *(int **)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        if (piVar7 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar7 = *(int **)(unaff_EBP + -0x44);
        }
        iVar4 = *piVar7;
        *(int **)(unaff_EBP + -0x48) = piVar7;
        iVar4 = (**(code **)(iVar4 + 0xa0))
                          (piVar7,(double)*(int *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x26c),*(undefined4 *)(unaff_EBP + -0x268),
                           *(undefined4 *)(unaff_EBP + -0x264),*(undefined4 *)(unaff_EBP + -0x260));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x26c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_004031b7(2000,3);
        piVar7 = *(int **)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        if (piVar7 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar7 = *(int **)(unaff_EBP + -0x44);
        }
        iVar4 = *piVar7;
        *(int **)(unaff_EBP + -0x48) = piVar7;
        iVar4 = (**(code **)(iVar4 + 0xa0))
                          (piVar7,0,*(undefined4 *)(unaff_EBP + -0x1cc),
                           *(undefined4 *)(unaff_EBP + -0x1c8),*(undefined4 *)(unaff_EBP + -0x1c4),
                           *(undefined4 *)(unaff_EBP + -0x1c0));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x1cc);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        if ((*(int *)(unaff_EBP + 0x10) == 4) || (*(int *)(unaff_EBP + 0x10) == 5)) {
          puVar9 = (undefined4 *)FUN_00485656(unaff_EBP + -0x98);
          FUN_0040ee87(*puVar9,1);
          piVar7 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          if (piVar7 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar7 = *(int **)(unaff_EBP + -0x18);
          }
          iVar4 = *piVar7;
          *(int **)(unaff_EBP + -0x48) = piVar7;
          iVar4 = (**(code **)(iVar4 + 100))
                            (piVar7,*(undefined4 *)(unaff_EBP + -300),
                             *(undefined4 *)(unaff_EBP + -0x128),*(undefined4 *)(unaff_EBP + -0x124)
                             ,*(undefined4 *)(unaff_EBP + -0x120));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          iVar4 = FUN_00402bc3(unaff_EBP + -300);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          FUN_004125d9();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          FUN_00403191(&DAT_00980690);
          piVar7 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          if (piVar7 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar7 = *(int **)(unaff_EBP + -0x18);
          }
          iVar4 = *piVar7;
          *(int **)(unaff_EBP + -0x48) = piVar7;
          iVar4 = (**(code **)(iVar4 + 0x90))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x20),iVar2,
                             *(undefined4 *)(unaff_EBP + -0x13c),*(undefined4 *)(unaff_EBP + -0x138)
                             ,*(undefined4 *)(unaff_EBP + -0x134),
                             *(undefined4 *)(unaff_EBP + -0x130),*(undefined4 *)(unaff_EBP + -0x15c)
                             ,*(undefined4 *)(unaff_EBP + -0x158),
                             *(undefined4 *)(unaff_EBP + -0x154),*(undefined4 *)(unaff_EBP + -0x150)
                            );
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x13c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x15c);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_004031b7(0,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          puVar9 = (undefined4 *)FUN_00485656(unaff_EBP + -0xa0);
          FUN_0040ee87(*puVar9,1);
          *(undefined1 *)(unaff_EBP + -4) = 0x52;
          *(int *)(unaff_EBP + -0x28) = iVar2;
          if (*(int *)(unaff_EBP + -0x34) <= iVar2) {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x34);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x20);
          if (*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + -0x20)) {
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x2c);
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + -0x18);
          uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x34));
          *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
          uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + -0x2c));
          iVar2 = (**(code **)(*piVar7 + 0x9c))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x17c),
                             *(undefined4 *)(unaff_EBP + -0x178),*(undefined4 *)(unaff_EBP + -0x174)
                             ,*(undefined4 *)(unaff_EBP + -0x170),
                             (uint)(*(int *)(unaff_EBP + -0x2c) < *(int *)(unaff_EBP + -0x20)) +
                             *(int *)(unaff_EBP + -0x14),
                             (uint)(*(int *)(unaff_EBP + -0x34) < *(int *)(unaff_EBP + -0x30)) +
                             *(int *)(unaff_EBP + -0x28),uVar3,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x19c),*(undefined4 *)(unaff_EBP + -0x198)
                             ,*(undefined4 *)(unaff_EBP + -0x194),*(undefined4 *)(unaff_EBP + -400))
          ;
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x51;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x17c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x19c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
        else {
          FUN_004031b7(0,3);
          bVar13 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          if (bVar13) {
            FUN_00878dfb(0x80004003);
          }
          puVar9 = (undefined4 *)FUN_00429328(unaff_EBP + -0xbc);
          FUN_0040ee87(*puVar9,1);
          piVar7 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x48;
          if (piVar7 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar7 = *(int **)(unaff_EBP + -0x24);
          }
          iVar4 = *(int *)(unaff_EBP + -0x3c);
          iVar10 = *piVar7;
          *(int **)(unaff_EBP + -0x48) = piVar7;
          iVar4 = (**(code **)(iVar10 + 0x9c))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x2cc),
                             *(undefined4 *)(unaff_EBP + -0x2c8),*(undefined4 *)(unaff_EBP + -0x2c4)
                             ,*(undefined4 *)(unaff_EBP + -0x2c0),-400 - iVar4,-300 - iVar4,
                             iVar4 + 800,iVar4 + 600,*(undefined4 *)(unaff_EBP + -0x1ec),
                             *(undefined4 *)(unaff_EBP + -0x1e8),*(undefined4 *)(unaff_EBP + -0x1e4)
                             ,*(undefined4 *)(unaff_EBP + -0x1e0));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x2cc);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x1ec);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          FUN_00403191(&DAT_00980690);
          piVar7 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          if (piVar7 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar7 = *(int **)(unaff_EBP + -0x24);
          }
          iVar4 = *piVar7;
          *(int **)(unaff_EBP + -0x48) = piVar7;
          iVar2 = (**(code **)(iVar4 + 0x90))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x20),iVar2,
                             *(undefined4 *)(unaff_EBP + -0x28c),*(undefined4 *)(unaff_EBP + -0x288)
                             ,*(undefined4 *)(unaff_EBP + -0x284),
                             *(undefined4 *)(unaff_EBP + -0x280),*(undefined4 *)(unaff_EBP + -0x20c)
                             ,*(undefined4 *)(unaff_EBP + -0x208),
                             *(undefined4 *)(unaff_EBP + -0x204),*(undefined4 *)(unaff_EBP + -0x200)
                            );
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x28c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x20c);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x24),1);
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + -0x18);
          iVar2 = (**(code **)(*piVar7 + 100))
                            (piVar7,*(undefined4 *)(unaff_EBP + -700),
                             *(undefined4 *)(unaff_EBP + -0x2b8),*(undefined4 *)(unaff_EBP + -0x2b4)
                             ,*(undefined4 *)(unaff_EBP + -0x2b0));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar2 = FUN_00402bc3(unaff_EBP + -700);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + -0x18);
          iVar2 = (**(code **)(*piVar7 + 0x98))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x40),100,100,
                             *(undefined4 *)(unaff_EBP + -0x90),5);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
          }
        }
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x18),1);
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0x8c);
        iVar2 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        iVar2 = (**(code **)(*piVar7 + 100))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x1bc),
                           *(undefined4 *)(unaff_EBP + -0x1b8),*(undefined4 *)(unaff_EBP + -0x1b4),
                           *(undefined4 *)(unaff_EBP + -0x1b0));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x1bc);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        if ((*(int *)(unaff_EBP + -0x10) == 0) &&
           (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0xb0);
        iVar2 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        iVar2 = FUN_0042fb0a();
        iVar2 = (**(code **)(*piVar7 + 0x6c))(piVar7,iVar2 / -2);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        FUN_004125d9();
        if ((*(int *)(unaff_EBP + -0x10) == 0) &&
           (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_0042fb5e(unaff_EBP + -0xb8);
        iVar2 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        iVar2 = FUN_0042fb34();
        iVar2 = (**(code **)(*piVar7 + 0x74))(piVar7,iVar2 / -2);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        FUN_004125d9();
        if (*(int *)(unaff_EBP + 0xc) == 2) {
          iVar2 = _rand();
          FUN_004031b7(iVar2 % 3000 + 300,3);
          piVar7 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x57;
          if (piVar7 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar7 = *(int **)(unaff_EBP + -0x18);
          }
          iVar2 = *piVar7;
          *(int **)(unaff_EBP + -0x48) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0xa0))
                            (piVar7,0,*(undefined4 *)(unaff_EBP + -0x1dc),
                             *(undefined4 *)(unaff_EBP + -0x1d8),*(undefined4 *)(unaff_EBP + -0x1d4)
                             ,*(undefined4 *)(unaff_EBP + -0x1d0));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x48),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x1dc);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xe0))
                          (*(int **)(unaff_EBP + -0x10),0x1ffffff);
        if (iVar2 < 0) {
          FUN_00878e09();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar2 = FUN_0042a378();
        FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0xc0),3);
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        if (*(int *)(unaff_EBP + -0x3c) < 0x65) {
          *(int *)(unaff_EBP + -0x28) =
               *(int *)(unaff_EBP + -0x60) + *(int *)(unaff_EBP + -0x3c) * -2;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x28) = 0x32;
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x38);
        iVar2 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        puVar12 = (undefined1 *)
                  (**(code **)(*piVar7 + 0x90))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x28),0xff,
                             *(undefined4 *)(unaff_EBP + -0x1fc),*(undefined4 *)(unaff_EBP + -0x1f8)
                             ,*(undefined4 *)(unaff_EBP + -500),*(undefined4 *)(unaff_EBP + -0x1f0),
                             *(undefined4 *)(unaff_EBP + -0x21c),*(undefined4 *)(unaff_EBP + -0x218)
                             ,*(undefined4 *)(unaff_EBP + -0x214),
                             *(undefined4 *)(unaff_EBP + -0x210));
        if ((int)puVar12 < 0) {
          _local_324 = (double)CONCAT44(&DAT_00963de8,piVar7);
          puStack_32c = (undefined1 *)0x5a6ee3;
          puStack_328 = puVar12;
          FUN_00878e09();
        }
        _local_324 = (double)CONCAT44(0x5a6eeb,local_324);
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        _local_324 = (double)CONCAT44(unaff_EBP + -0x1fc,0x5a6efb);
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          _local_324 = (double)CONCAT44(iVar2,0x5a6f06);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        _local_324 = (double)CONCAT44(unaff_EBP + -0x21c,0x5a6f16);
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          _local_324 = (double)CONCAT44(iVar2,0x5a6f21);
          FUN_00878dfb();
        }
        if (-1 < *(int *)(unaff_EBP + 0x10)) {
          if (*(int *)(unaff_EBP + 0x10) < 4) {
            _local_324 = 6.49861210983115e-314;
            puStack_328 = (undefined1 *)0x5a7027;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x5b;
            if (*(int *)(unaff_EBP + -0x24) == 0) {
              _local_324 = -3.47731479548607e-310;
              FUN_00878dfb();
            }
            _local_324 = (double)CONCAT44(0x5a7043,local_324);
            iVar2 = FUN_0042a378();
            _local_324 = (double)CONCAT44(3,iVar2 + *(int *)(unaff_EBP + 0x14) /
                                                    *(int *)(unaff_EBP + -0x3c));
            puStack_328 = (undefined1 *)0x5a705c;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x5c;
            if (*(int *)(unaff_EBP + -0x24) == 0) {
              _local_324 = -3.47731479548869e-310;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + -0x24);
            puStack_32c = *(undefined1 **)(unaff_EBP + -0x78);
            puStack_328 = *(undefined1 **)(unaff_EBP + -0x74);
            _local_324 = *(double *)(unaff_EBP + -0x70);
            uStack_340 = *(undefined4 *)(unaff_EBP + -0x34);
            iStack_33c = *(undefined4 *)(unaff_EBP + -0x27c);
            uStack_338 = *(undefined4 *)(unaff_EBP + -0x278);
            iStack_334 = *(int *)(unaff_EBP + -0x274);
            uStack_330 = *(undefined4 *)(unaff_EBP + -0x270);
            puVar12 = (undefined1 *)
                      (**(code **)(*piVar7 + 0x90))(piVar7,*(undefined4 *)(unaff_EBP + -0x2c));
            if ((int)puVar12 < 0) {
              _local_324 = (double)CONCAT44(&DAT_00963de8,piVar7);
              puStack_32c = (undefined1 *)0x5a70ad;
              puStack_328 = puVar12;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x5b;
            _local_324 = (double)CONCAT44(unaff_EBP + -0x27c,0x5a70bd);
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              _local_324 = (double)CONCAT44(iVar2,0x5a70c8);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            iVar2 = unaff_EBP + -0x78;
          }
          else {
            if (5 < *(int *)(unaff_EBP + 0x10)) goto LAB_005a70e0;
            _local_324 = 6.49861210983115e-314;
            puStack_328 = (undefined1 *)0x5a6f51;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x5d;
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              _local_324 = -3.47731479547549e-310;
              FUN_00878dfb();
            }
            _local_324 = (double)CONCAT44(0x5a6f6a,local_324);
            iVar10 = _rand();
            iVar2 = *(int *)(unaff_EBP + 0x14);
            iVar4 = *(int *)(unaff_EBP + -0x3c);
            _local_324 = (double)CONCAT44(0x5a6f8a,local_324);
            iVar11 = FUN_0042a378();
            _local_324 = (double)CONCAT44(3,(iVar10 % 30000 + -15000 + iVar2) / iVar4 + iVar11);
            puStack_328 = (undefined1 *)0x5a6f9a;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x5e;
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              _local_324 = -3.4773147954791e-310;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + -0x18);
            puStack_32c = *(undefined1 **)(unaff_EBP + -0x25c);
            puStack_328 = *(undefined1 **)(unaff_EBP + -600);
            _local_324 = *(double *)(unaff_EBP + -0x254);
            uStack_340 = *(undefined4 *)(unaff_EBP + -0x34);
            iStack_33c = *(undefined4 *)(unaff_EBP + -0x23c);
            uStack_338 = *(undefined4 *)(unaff_EBP + -0x238);
            iStack_334 = *(int *)(unaff_EBP + -0x234);
            uStack_330 = *(undefined4 *)(unaff_EBP + -0x230);
            puVar12 = (undefined1 *)
                      (**(code **)(*piVar7 + 0x90))(piVar7,*(undefined4 *)(unaff_EBP + -0x2c));
            if ((int)puVar12 < 0) {
              _local_324 = (double)CONCAT44(&DAT_00963de8,piVar7);
              puStack_32c = (undefined1 *)0x5a6fee;
              puStack_328 = puVar12;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x5d;
            _local_324 = (double)CONCAT44(unaff_EBP + -0x23c,0x5a6ffe);
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              _local_324 = (double)CONCAT44(iVar2,0x5a7009);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            iVar2 = unaff_EBP + -0x25c;
          }
          _local_324 = (double)CONCAT44(iVar2,0x5a70d5);
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            _local_324 = (double)CONCAT44(iVar2,0x5a70e0);
            FUN_00878dfb();
          }
        }
LAB_005a70e0:
        _local_324 = (double)CONCAT44(0x5a70ee,local_324);
        p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
        _local_324 = (double)CONCAT44(*(IBinding **)(unaff_EBP + -0x10),0x5a70f8);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (p_Var6,*(IBinding **)(unaff_EBP + -0x10));
        _local_324 = (double)CONCAT44(0x5a7100,local_324);
        FUN_004125d9();
        _local_324 = (double)CONCAT44(0x5a7108,local_324);
        FUN_004125d9();
        _local_324 = (double)CONCAT44(0x5a7110,local_324);
        FUN_004125d9();
        _local_324 = (double)CONCAT44(0x5a7118,local_324);
        FUN_004125d9();
        piVar7 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar7 != (int *)0x0) {
          _local_324 = (double)CONCAT44(piVar7,0x5a7129);
          (**(code **)(*piVar7 + 8))();
        }
        *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0x7c) + 1;
      } while (*(int *)(unaff_EBP + -0x7c) < *(int *)(unaff_EBP + -0x68));
    }
    piVar7 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar7 != (int *)0x0) {
      _local_324 = (double)CONCAT44(piVar7,0x5a7149);
      (**(code **)(*piVar7 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    _local_324 = (double)CONCAT44(0x5a7155,local_324);
    FUN_0041a545();
    piVar7 = *(int **)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar7 != (int *)0x0) {
      _local_324 = (double)CONCAT44(piVar7,0x5a7166);
      (**(code **)(*piVar7 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    _local_324 = (double)CONCAT44(0x5a7172,local_324);
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


