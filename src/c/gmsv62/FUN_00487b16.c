/* FUN_00487b16 - 0x00487b16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00487b16(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined1 *puVar12;
  bool bVar13;
  undefined4 uStack_310;
  int iStack_30c;
  undefined4 uStack_308;
  int iStack_304;
  undefined4 uStack_300;
  undefined1 *puStack_2fc;
  undefined1 *puStack_2f8;
  int *local_2f4;
  int *piVar14;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x40c) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0xc4) = extraout_ECX + 0x3f0;
  _local_2f4 = (double)CONCAT44(0x487b49,local_2f4);
  FUN_0045f4fc();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  _local_2f4 = (double)CONCAT44(0x487b5b,local_2f4);
  FUN_0041a545();
  _local_2f4 = 8.553409902173513e-306;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  _local_2f4 = 8.553409902173533e-306;
  FUN_00403191();
  _local_2f4 = 0.0;
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x26c);
  puStack_2fc = (undefined1 *)(unaff_EBP + -0x15c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_300 = 0x487b98;
  iStack_304 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x48) = &uStack_300;
  uStack_308 = 0x487ba4;
  FUN_004033a1();
  iStack_304 = unaff_EBP + -700;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_308 = 0x487bb4;
  FUN_00405a1d();
  uStack_308 = 0x487bbb;
  FUN_00402660();
  uStack_308 = 0x487bc2;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_2f8 = (undefined1 *)0x487bcd;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xb8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar2 != 0) {
    _local_2f4 = (double)CONCAT44(unaff_EBP + -0xb8,0x487be9);
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      _local_2f4 = (double)CONCAT44(iVar2,0x487bfa);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  _local_2f4 = (double)CONCAT44(unaff_EBP + -700,0x487c0a);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487c15);
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  _local_2f4 = (double)CONCAT44(unaff_EBP + -0x15c,0x487c25);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487c30);
    FUN_00878dfb();
  }
  piVar14 = (int *)(unaff_EBP + -0x26c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  local_2f4 = (int *)0x487c40;
  iVar2 = FUN_00402bc3();
  local_2f4 = piVar14;
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487c4b);
    FUN_00878dfb();
    local_2f4 = extraout_ECX_00;
  }
  puStack_2fc = (undefined1 *)&local_2f4;
  piVar14 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x48) = &local_2f4;
  puStack_2f8 = (undefined1 *)0x5eb;
  uStack_300 = 0x487c64;
  FUN_00679e4e();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487c74;
  FUN_0040263d();
  puStack_2fc = (undefined1 *)0x487c7b;
  uVar3 = FUN_004048a4();
  _local_2f4 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_2f8 = (undefined1 *)0x487c85;
  iVar2 = FUN_00412550();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(uint *)(unaff_EBP + -0x7c) = (uint)(iVar2 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487c9d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    _local_2f4 = (double)CONCAT44(iVar4,0x487caa);
    FUN_00878dfb();
  }
  if ((iVar2 != 0) == 0) {
    puVar12 = (undefined1 *)0x0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        _local_2f4 = -3.47731473736221e-310;
        FUN_00878dfb();
      }
      _local_2f4 = (double)CONCAT44(0x487ccb,local_2f4);
      puVar5 = (undefined1 *)FUN_0040cf4d();
      if (puVar5 <= puVar12) break;
      _local_2f4 = (double)CONCAT44(0x487cdb,SUB84(_local_2f4,0));
      FUN_0087a1b0();
      _local_2f4 = 0.0;
      uStack_300 = 0x487ce6;
      puStack_2fc = puVar12;
      puStack_2f8 = &stack0xfffffd14;
      puStack_2fc = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_2f8;
      uStack_300 = 0x487cf2;
      FUN_004033a1();
      puStack_2fc = (undefined1 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_300 = 0x487d02;
      FUN_0040263d();
      uStack_300 = 0x487d09;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_2f8 = (undefined1 *)0x487d14;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
      _local_2f4 = (double)CONCAT44(unaff_EBP + -0x58,0x487d23);
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        _local_2f4 = (double)CONCAT44(iVar2,0x487d34);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      _local_2f4 = (double)CONCAT44(unaff_EBP + -0x74,0x487d41);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_2f4 = (double)CONCAT44(iVar2,0x487d4c);
        FUN_00878dfb();
      }
      _local_2f4 = 2.34714630018816e-317;
      cVar1 = FUN_004115ef();
      if (cVar1 == '\0') {
        _local_2f4 = -NAN;
        p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bcfb();
        _local_2f4 = (double)CONCAT44(*(IBinding **)(unaff_EBP + -0x5c),0x487d6d);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (p_Var6,*(IBinding **)(unaff_EBP + -0x5c));
      }
      puVar12 = puVar12 + 1;
    }
  }
  puStack_2fc = (undefined1 *)&local_2f4;
  piVar14 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x48) = &local_2f4;
  puStack_2f8 = (undefined1 *)0x5fb;
  uStack_300 = 0x487d87;
  FUN_00679e4e();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487d97;
  FUN_0040263d();
  puStack_2fc = (undefined1 *)0x487d9e;
  uVar3 = FUN_004048a4();
  _local_2f4 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_2f8 = (undefined1 *)0x487da8;
  FUN_00412550();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487db5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487dc2);
    FUN_00878dfb();
  }
  puStack_2fc = (undefined1 *)&local_2f4;
  piVar14 = (int *)0x64;
  *(int ***)(unaff_EBP + -0x48) = &local_2f4;
  puStack_2f8 = (undefined1 *)0x3ca;
  uStack_300 = 0x487dd7;
  FUN_00679e4e();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487de7;
  FUN_0040263d();
  puStack_2fc = (undefined1 *)0x487dee;
  uVar3 = FUN_004048a4();
  _local_2f4 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_2f8 = (undefined1 *)0x487df8;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x84) = uVar3;
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487e0b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487e18);
    FUN_00878dfb();
  }
  puStack_2fc = (undefined1 *)&local_2f4;
  piVar14 = (int *)0x64;
  *(int ***)(unaff_EBP + -0x48) = &local_2f4;
  puStack_2f8 = (undefined1 *)0x3cf;
  uStack_300 = 0x487e2d;
  FUN_00679e4e();
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2fc = (undefined1 *)0x487e3d;
  FUN_0040263d();
  puStack_2fc = (undefined1 *)0x487e44;
  uVar3 = FUN_004048a4();
  _local_2f4 = (double)CONCAT44(piVar14,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_2f8 = (undefined1 *)0x487e4e;
  iVar2 = FUN_00412550();
  puStack_2f8 = (undefined1 *)0x487e55;
  iVar4 = _rand();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(int *)(unaff_EBP + -0x58) = (iVar2 * (iVar4 % 0x19 + 0x1e)) / 0xfa;
  puStack_2f8 = (undefined1 *)(unaff_EBP + -0x74);
  puStack_2fc = (undefined1 *)0x487e7b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_2f4 = (double)CONCAT44(iVar2,0x487e88);
    FUN_00878dfb();
  }
  _local_2f4 = (double)CONCAT44(6,local_2f4);
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(int *)(unaff_EBP + 0x14) = (6 - *(int *)(unaff_EBP + 0x14)) * 5000;
  if (*(int *)(unaff_EBP + -0x58) < 1) {
LAB_004892e5:
    piVar9 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar9 != (int *)0x0) {
      _local_2f4 = (double)CONCAT44(piVar9,0x4892f6);
      (**(code **)(*piVar9 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    _local_2f4 = (double)CONCAT44(0x489302,local_2f4);
    FUN_0041a545();
    piVar9 = *(int **)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar9 != (int *)0x0) {
      _local_2f4 = (double)CONCAT44(piVar9,0x489313);
      (**(code **)(*piVar9 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    _local_2f4 = (double)CONCAT44(0x48931f,local_2f4);
    FUN_00402676();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iVar2 = *(int *)(unaff_EBP + -0x38);
  do {
    _local_2f4 = (double)CONCAT44(0x487ec4,local_2f4);
    iVar4 = _rand();
    *(int *)(unaff_EBP + -0x28) = iVar4 % 3;
    _local_2f4 = (double)CONCAT44(0x487ed2,local_2f4);
    iVar4 = _rand();
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x28) * (iVar4 % 3) + 0xf;
    _local_2f4 = (double)CONCAT44(0x487ee9,local_2f4);
    iVar4 = _rand();
    *(int *)(unaff_EBP + -0x28) = iVar4 % 0x168;
    _local_2f4 = (double)CONCAT44(0x487ef9,local_2f4);
    iVar4 = _rand();
    *(int *)(unaff_EBP + -0xb4) = iVar4 % 3000 + 3000;
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      if (*(int *)(unaff_EBP + -0x4c) == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x4c) + -4);
      }
      _local_2f4 = (double)CONCAT44(0x487f26,local_2f4);
      uVar7 = _rand();
      *(uint *)(unaff_EBP + -0x18) = uVar7 % *(uint *)(unaff_EBP + -0x18);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    iVar4 = *(int *)(unaff_EBP + 0x10);
    if (iVar4 == 0) {
      _local_2f4 = (double)CONCAT44(0x488102,local_2f4);
      iVar2 = _rand();
      iVar11 = iVar2 % 0xd4 + 0x18;
      *(int *)(unaff_EBP + -0x2c) = iVar11;
      _local_2f4 = (double)CONCAT44(0x488112,local_2f4);
      iVar4 = _rand();
      iVar2 = iVar4 % 0xa5 + 0x28;
      *(int *)(unaff_EBP + -0x38) = iVar2;
      _local_2f4 = (double)CONCAT44(0x488122,local_2f4);
      iVar10 = _rand();
      *(int *)(unaff_EBP + -0x34) = iVar10 % 200 + -100 + iVar11;
      iVar4 = iVar4 % 0xa5 + 0x7a;
LAB_00488134:
      *(int *)(unaff_EBP + -0x3c) = iVar4;
    }
    else {
      if (iVar4 == 1) {
        _local_2f4 = (double)CONCAT44(0x4880c9,local_2f4);
        iVar2 = _rand();
        iVar11 = iVar2 % 0xd4 + 0x18;
        *(int *)(unaff_EBP + -0x2c) = iVar11;
        _local_2f4 = (double)CONCAT44(0x4880d9,local_2f4);
        iVar4 = _rand();
        iVar2 = iVar4 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar2;
        _local_2f4 = (double)CONCAT44(0x4880e9,local_2f4);
        iVar10 = _rand();
        *(int *)(unaff_EBP + -0x34) = iVar10 % 200 + -100 + iVar11;
        iVar4 = iVar4 % 0xa5 + -0x2a;
        goto LAB_00488134;
      }
      if (iVar4 == 2) {
        _local_2f4 = (double)CONCAT44(0x488090,local_2f4);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar4 % 0xd4 + 0x18;
        _local_2f4 = (double)CONCAT44(0x4880a0,local_2f4);
        iVar2 = _rand();
        iVar2 = iVar2 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar2;
        iVar4 = iVar4 % 0xd4 + -0x52;
LAB_004880ae:
        *(int *)(unaff_EBP + -0x34) = iVar4;
        _local_2f4 = (double)CONCAT44(0x4880b6,local_2f4);
        iVar4 = _rand();
        iVar4 = iVar4 % 200 + -100 + iVar2;
        goto LAB_00488134;
      }
      if (iVar4 == 3) {
        _local_2f4 = (double)CONCAT44(0x48806b,local_2f4);
        iVar4 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar4 % 0xd4 + 0x18;
        _local_2f4 = (double)CONCAT44(0x48807b,local_2f4);
        iVar2 = _rand();
        iVar2 = iVar2 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar2;
        iVar4 = iVar4 % 0xd4 + 0x82;
        goto LAB_004880ae;
      }
      if (iVar4 == 4) {
        _local_2f4 = (double)CONCAT44(0x487ff9,local_2f4);
        iVar2 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar2 % 0x14 + 0x78;
        _local_2f4 = (double)CONCAT44(0x48800a,local_2f4);
        iVar2 = _rand();
        _local_2f4 = (double)*(int *)(unaff_EBP + -0x28);
        *(double *)(unaff_EBP + -0x20) = _local_2f4;
        iVar2 = iVar2 % 0x14 + 0xc3;
        *(int *)(unaff_EBP + -0x38) = iVar2;
        puStack_2f8 = (undefined1 *)0x48802b;
        FUN_0087ae74();
        puStack_2f8 = (undefined1 *)0x48803c;
        uVar3 = __ftol();
        _local_2f4 = *(double *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
        puStack_2f8 = (undefined1 *)0x48804a;
        FUN_0087adc4();
        puStack_2f8 = (undefined1 *)0x48804f;
        puStack_2f8 = (undefined1 *)__ftol();
        puStack_2fc = (undefined1 *)0x488055;
        iVar4 = FUN_0087a90a();
        iVar4 = iVar4 * 0xc4 + 0x28;
        goto LAB_00488134;
      }
      if (iVar4 == 5) {
        _local_2f4 = (double)CONCAT44(0x487f8e,local_2f4);
        iVar2 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar2 % 0x14 + 0x78;
        _local_2f4 = (double)CONCAT44(0x487f9f,local_2f4);
        iVar2 = _rand();
        _local_2f4 = (double)*(int *)(unaff_EBP + -0x28);
        *(double *)(unaff_EBP + -0x20) = _local_2f4;
        iVar2 = iVar2 % 0x14 + 0x70;
        *(int *)(unaff_EBP + -0x38) = iVar2;
        puStack_2f8 = (undefined1 *)0x487fbd;
        FUN_0087ae74();
        puStack_2f8 = (undefined1 *)0x487fce;
        uVar3 = __ftol();
        _local_2f4 = *(double *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
        puStack_2f8 = (undefined1 *)0x487fdc;
        FUN_0087adc4();
        _local_2f4 = (double)CONCAT44(0x487fef,local_2f4);
        iVar4 = __ftol();
        goto LAB_00488134;
      }
      if (iVar4 == 6) {
        _local_2f4 = (double)CONCAT44(0x487f6b,local_2f4);
        iVar2 = _rand();
        *(int *)(unaff_EBP + -0x2c) = iVar2 % 0xd4 + 0x18;
        _local_2f4 = (double)CONCAT44(0x487f79,local_2f4);
        iVar2 = _rand();
        iVar2 = iVar2 % 0xa5 + 0x28;
        *(int *)(unaff_EBP + -0x38) = iVar2;
      }
    }
    puVar12 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      _local_2f4 = 8.553409902175433e-306;
      FUN_00403191();
      _local_2f4 = (double)CONCAT44(1,*(undefined4 *)
                                       (*(int *)(unaff_EBP + -0x4c) +
                                       *(int *)(unaff_EBP + -0x18) * 4));
      puStack_2f8 = (undefined1 *)0x488171;
      FUN_0040ee87();
      bVar13 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (bVar13) {
        _local_2f4 = -3.47731473742248e-310;
        FUN_00878dfb();
      }
      _local_2f4 = (double)CONCAT44(unaff_EBP + -0x1fc,unaff_EBP + -0xfc);
      puStack_2f8 = (undefined1 *)0xc0061508;
      puStack_2fc = (undefined1 *)0x0;
      uStack_300 = 0;
      iStack_304 = 0;
      uStack_308 = 0;
      iStack_30c = unaff_EBP + -0xa4;
      uStack_310 = 0x4881b0;
      puVar8 = (undefined4 *)FUN_0042a39f();
      _local_2f4 = (double)CONCAT44((IBinding *)*puVar8,0x4881ba);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar8);
      _local_2f4 = (double)CONCAT44(0x4881c5,local_2f4);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      _local_2f4 = (double)CONCAT44(unaff_EBP + -0xfc,0x4881d5);
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _local_2f4 = (double)CONCAT44(iVar4,0x4881e0);
        FUN_00878dfb();
      }
      piVar14 = (int *)(unaff_EBP + -0x1fc);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      local_2f4 = (int *)0x4881f0;
      iVar4 = FUN_00402bc3();
      local_2f4 = piVar14;
      if (iVar4 < 0) {
        _local_2f4 = (double)CONCAT44(iVar4,0x4881fb);
        FUN_00878dfb();
        local_2f4 = extraout_ECX_01;
      }
      puStack_2fc = (undefined1 *)&local_2f4;
      piVar14 = (int *)0xff;
      *(int ***)(unaff_EBP + -0x1c) = &local_2f4;
      puStack_2f8 = (undefined1 *)0x3b6;
      uStack_300 = 0x488216;
      FUN_00679e4e();
      puStack_2f8 = (undefined1 *)(unaff_EBP + -0xbc);
      puStack_2fc = *(undefined1 **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      uStack_300 = 0x48822c;
      FUN_0048bd86();
      puStack_2fc = (undefined1 *)0x488233;
      FUN_004115d9();
      puStack_2fc = (undefined1 *)0x48823a;
      FUN_00404e7f();
      puStack_2f8 = (undefined1 *)(unaff_EBP + -0x2dc);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_2fc = (undefined1 *)0x48824c;
      FUN_0040263d();
      puStack_2fc = (undefined1 *)0x488253;
      uVar3 = FUN_004048a4();
      _local_2f4 = (double)CONCAT44(piVar14,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_2f8 = (undefined1 *)0x48825d;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x78) = uVar3;
      puStack_2f8 = (undefined1 *)(unaff_EBP + -0x2dc);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_2fc = (undefined1 *)0x488270;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _local_2f4 = (double)CONCAT44(iVar4,0x48827d);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      _local_2f4 = (double)CONCAT44(0x48828c,local_2f4);
      FUN_004027eb();
      _local_2f4 = 8.553409902175835e-306;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      _local_2f4 = 8.553409902175855e-306;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        _local_2f4 = -3.4773147374377e-310;
        FUN_00878dfb();
      }
      _local_2f4 = (double)CONCAT44(unaff_EBP + -0x88,0x4882ca);
      piVar9 = (int *)FUN_004113e5();
      iVar4 = *piVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (iVar4 == 0) {
        _local_2f4 = -3.47731473743943e-310;
        FUN_00878dfb();
      }
      piVar9 = (int *)*piVar9;
      puStack_2fc = *(undefined1 **)(unaff_EBP + -0x27c);
      puStack_2f8 = *(undefined1 **)(unaff_EBP + -0x278);
      iVar4 = *piVar9;
      _local_2f4 = *(double *)(unaff_EBP + -0x274);
      iStack_30c = *(undefined4 *)(unaff_EBP + -0x11c);
      uStack_308 = *(undefined4 *)(unaff_EBP + -0x118);
      uStack_310 = 0;
      iStack_304 = *(int *)(unaff_EBP + -0x114);
      *(int **)(unaff_EBP + -0x18) = piVar9;
      uStack_300 = *(undefined4 *)(unaff_EBP + -0x110);
      iVar4 = (**(code **)(iVar4 + 0x90))(piVar9,*(undefined4 *)(unaff_EBP + -0x78));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x11c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x27c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
    else {
      while( true ) {
        _local_2f4 = (double)CONCAT44(0x488375,SUB84(_local_2f4,0));
        FUN_0087a1b0();
        _local_2f4 = 0.0;
        uStack_300 = 0x488380;
        puStack_2fc = puVar12;
        puStack_2f8 = &stack0xfffffd14;
        puStack_2fc = (undefined1 *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_2f8;
        uStack_300 = 0x48838c;
        FUN_004033a1();
        puStack_2fc = (undefined1 *)(unaff_EBP + -0x2cc);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_300 = 0x48839f;
        FUN_0040263d();
        uStack_300 = 0x4883a6;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        puStack_2f8 = (undefined1 *)0x4883b1;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xcc) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        if (iVar4 != 0) {
          _local_2f4 = (double)CONCAT44(unaff_EBP + -0xcc,0x4883cd);
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            _local_2f4 = (double)CONCAT44(iVar4,0x4883de);
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        _local_2f4 = (double)CONCAT44(unaff_EBP + -0x2cc,0x4883ee);
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          _local_2f4 = (double)CONCAT44(iVar4,0x4883f9);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x54) == 0) break;
        _local_2f4 = (double)CONCAT44(0x48840a,local_2f4);
        FUN_004027eb();
        puVar12 = puVar12 + 1;
      }
      _local_2f4 = (double)CONCAT44(0x488415,local_2f4);
      FUN_004027eb();
      _local_2f4 = (double)CONCAT44(0x48841a,local_2f4);
      iVar4 = _rand();
      _local_2f4 = (double)CONCAT44(0x488427,SUB84(_local_2f4,0));
      FUN_0087a1b0();
      _local_2f4 = 0.0;
      uStack_300 = 0x488432;
      puStack_2fc = (undefined1 *)(iVar4 % (int)puVar12);
      puStack_2f8 = &stack0xfffffd14;
      puStack_2fc = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_2f8;
      uStack_300 = 0x48843e;
      FUN_004033a1();
      puStack_2fc = (undefined1 *)(unaff_EBP + -0x2ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uStack_300 = 0x488451;
      FUN_0040263d();
      uStack_300 = 0x488458;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      puStack_2f8 = (undefined1 *)0x488463;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -200) = iVar4;
      *(undefined4 *)(unaff_EBP + -100) = 0;
      if (iVar4 != 0) {
        _local_2f4 = (double)CONCAT44(unaff_EBP + -200,0x48847f);
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          _local_2f4 = (double)CONCAT44(iVar4,0x488490);
          FUN_00878dfb();
        }
      }
      piVar14 = (int *)(unaff_EBP + -0x2ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      local_2f4 = (int *)0x4884a0;
      iVar4 = FUN_00402bc3();
      puVar12 = (undefined1 *)piVar14;
      if (iVar4 < 0) {
        _local_2f4 = (double)CONCAT44(iVar4,0x4884ab);
        FUN_00878dfb();
        puVar12 = extraout_ECX_02;
      }
      _local_2f4 = 1.25986739689518e-321;
      puStack_2f8 = (undefined1 *)0xc0061508;
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_2fc;
      uStack_300 = 0;
      iStack_304 = 0x4884c2;
      puStack_2fc = puVar12;
      FUN_00424e0a();
      uStack_300 = 0;
      iStack_304 = 0;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_308;
      iStack_30c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      uStack_310 = 0x4884d4;
      FUN_00424dd7();
      iStack_30c = 0;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_310;
      FUN_00424dbc(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puVar8 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x90);
      _local_2f4 = (double)CONCAT44((IBinding *)*puVar8,0x488501);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar8);
      _local_2f4 = (double)CONCAT44(0x48850c,local_2f4);
      FUN_00412600();
      _local_2f4 = 8.553409902176651e-306;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      _local_2f4 = 8.553409902176671e-306;
      FUN_00403191();
      piVar9 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (piVar9 == (int *)0x0) {
        _local_2f4 = -3.47731473746967e-310;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + -0x10);
      }
      puStack_2fc = *(undefined1 **)(unaff_EBP + -0x21c);
      puStack_2f8 = *(undefined1 **)(unaff_EBP + -0x218);
      iVar4 = *piVar9;
      _local_2f4 = *(double *)(unaff_EBP + -0x214);
      iStack_30c = *(undefined4 *)(unaff_EBP + -0x13c);
      uStack_308 = *(undefined4 *)(unaff_EBP + -0x138);
      iStack_304 = *(int *)(unaff_EBP + -0x134);
      uStack_310 = 0x20;
      *(int **)(unaff_EBP + -0x18) = piVar9;
      uStack_300 = *(undefined4 *)(unaff_EBP + -0x130);
      iVar4 = (**(code **)(iVar4 + 0x110))(piVar9);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x13c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x21c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_004027eb();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xb0,0x3b1);
    uVar3 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_00437222(uVar3,unaff_EBP + -0x24,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xb0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xb0) + -0xc);
    }
    puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x98,0x3b1);
    uVar3 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00437222(uVar3,unaff_EBP + -0x40,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0x98) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x98) + -0xc);
    }
    puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xc0,0x3b1);
    uVar3 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    FUN_00437222(uVar3,unaff_EBP + -0x44,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xc0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xc0) + -0xc);
    }
    puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0xa0,0x3b1);
    uVar3 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_00437222(uVar3,unaff_EBP + -0x14,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0xa0) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0xa0) + -0xc);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x40),1);
    piVar9 = *(int **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar9 = *(int **)(unaff_EBP + -0x44);
    }
    iVar4 = *piVar9;
    *(int **)(unaff_EBP + -0x18) = piVar9;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar9,*(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                       *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar4 = FUN_00402bc3(unaff_EBP + -0xdc);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    FUN_00403191(&DAT_00980690);
    puVar8 = *(undefined4 **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (puVar8 == (undefined4 *)0x0) {
      FUN_00878dfb(0x80004003);
      puVar8 = *(undefined4 **)(unaff_EBP + -0x44);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar8;
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar8;
    iVar4 = (**(code **)(*(int *)(unaff_EBP + -0x18) + 0x90))
                      (puVar8,*(int *)(unaff_EBP + -0x50) / 2,0,*(undefined4 *)(unaff_EBP + -0x2ac),
                       *(undefined4 *)(unaff_EBP + -0x2a8),*(undefined4 *)(unaff_EBP + -0x2a4),
                       *(undefined4 *)(unaff_EBP + -0x2a0),*(undefined4 *)(unaff_EBP + -0x17c),
                       *(undefined4 *)(unaff_EBP + -0x178),*(undefined4 *)(unaff_EBP + -0x174),
                       *(undefined4 *)(unaff_EBP + -0x170));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x2ac);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x17c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    piVar9 = *(int **)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar9 = *(int **)(unaff_EBP + -0x40);
    }
    iVar4 = *piVar9;
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    iVar4 = (**(code **)(iVar4 + 0xa0))
                      (piVar9,(double)*(int *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x23c),*(undefined4 *)(unaff_EBP + -0x238),
                       *(undefined4 *)(unaff_EBP + -0x234),*(undefined4 *)(unaff_EBP + -0x230));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x23c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(2000,3);
    piVar9 = *(int **)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar9 = *(int **)(unaff_EBP + -0x40);
    }
    iVar4 = *piVar9;
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    iVar4 = (**(code **)(iVar4 + 0xa0))
                      (piVar9,0,*(undefined4 *)(unaff_EBP + -0x19c),
                       *(undefined4 *)(unaff_EBP + -0x198),*(undefined4 *)(unaff_EBP + -0x194),
                       *(undefined4 *)(unaff_EBP + -400));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x19c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    if ((*(int *)(unaff_EBP + 0x10) == 4) || (*(int *)(unaff_EBP + 0x10) == 5)) {
      puVar8 = (undefined4 *)FUN_00485656(unaff_EBP + -0x8c);
      FUN_0040ee87(*puVar8,1);
      piVar9 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar9 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar9;
      *(int **)(unaff_EBP + -0x1c) = piVar9;
      iVar4 = (**(code **)(iVar4 + 100))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0xec),
                         *(undefined4 *)(unaff_EBP + -0xe8),*(undefined4 *)(unaff_EBP + -0xe4),
                         *(undefined4 *)(unaff_EBP + -0xe0));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iVar4 = FUN_00402bc3(unaff_EBP + -0xec);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_004125d9();
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      FUN_00403191(&DAT_00980690);
      piVar9 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar9 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar9;
      *(int **)(unaff_EBP + -0x1c) = piVar9;
      iVar4 = (**(code **)(iVar4 + 0x90))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x2c),iVar2,
                         *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108),
                         *(undefined4 *)(unaff_EBP + -0x104),*(undefined4 *)(unaff_EBP + -0x100),
                         *(undefined4 *)(unaff_EBP + -300),*(undefined4 *)(unaff_EBP + -0x128),
                         *(undefined4 *)(unaff_EBP + -0x124),*(undefined4 *)(unaff_EBP + -0x120));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x10c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar4 = FUN_00402bc3(unaff_EBP + -300);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      puVar8 = (undefined4 *)FUN_00485656(unaff_EBP + -0x94);
      FUN_0040ee87(*puVar8,1);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (*(int *)(unaff_EBP + -0x3c) <= iVar2) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x3c);
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x2c);
      if (*(int *)(unaff_EBP + -0x34) <= *(int *)(unaff_EBP + -0x2c)) {
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x34);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar9 = *(int **)(unaff_EBP + -0x14);
      uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x3c));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
      uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34));
      iVar2 = (**(code **)(*piVar9 + 0x9c))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x14c),
                         *(undefined4 *)(unaff_EBP + -0x148),*(undefined4 *)(unaff_EBP + -0x144),
                         *(undefined4 *)(unaff_EBP + -0x140),
                         (uint)(*(int *)(unaff_EBP + -0x34) < *(int *)(unaff_EBP + -0x2c)) +
                         *(int *)(unaff_EBP + -0x18),
                         (uint)(*(int *)(unaff_EBP + -0x3c) < *(int *)(unaff_EBP + -0x38)) +
                         *(int *)(unaff_EBP + -0x28),uVar3,*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x16c),*(undefined4 *)(unaff_EBP + -0x168),
                         *(undefined4 *)(unaff_EBP + -0x164),*(undefined4 *)(unaff_EBP + -0x160));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x14c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x16c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    else {
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puVar8 = (undefined4 *)FUN_00485656(unaff_EBP + -0xa8);
      FUN_0040ee87(*puVar8,1);
      piVar9 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar9 = *(int **)(unaff_EBP + -0x24);
      }
      iVar4 = *(int *)(unaff_EBP + -0x50);
      iVar10 = *piVar9;
      *(int **)(unaff_EBP + -0x1c) = piVar9;
      iVar4 = (**(code **)(iVar10 + 0x9c))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x29c),
                         *(undefined4 *)(unaff_EBP + -0x298),*(undefined4 *)(unaff_EBP + -0x294),
                         *(undefined4 *)(unaff_EBP + -0x290),0x18 - iVar4,0x28 - iVar4,
                         iVar4 * 2 + 0xd4,iVar4 * 2 + 0xa5,*(undefined4 *)(unaff_EBP + -0x1bc),
                         *(undefined4 *)(unaff_EBP + -0x1b8),*(undefined4 *)(unaff_EBP + -0x1b4),
                         *(undefined4 *)(unaff_EBP + -0x1b0));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x29c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x1bc);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      FUN_00403191(&DAT_00980690);
      piVar9 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar9 = *(int **)(unaff_EBP + -0x24);
      }
      iVar4 = *piVar9;
      *(int **)(unaff_EBP + -0x1c) = piVar9;
      iVar2 = (**(code **)(iVar4 + 0x90))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x2c),iVar2,
                         *(undefined4 *)(unaff_EBP + -0x25c),*(undefined4 *)(unaff_EBP + -600),
                         *(undefined4 *)(unaff_EBP + -0x254),*(undefined4 *)(unaff_EBP + -0x250),
                         *(undefined4 *)(unaff_EBP + -0x1dc),*(undefined4 *)(unaff_EBP + -0x1d8),
                         *(undefined4 *)(unaff_EBP + -0x1d4),*(undefined4 *)(unaff_EBP + -0x1d0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x25c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x1dc);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x24),1);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar9 = *(int **)(unaff_EBP + -0x14);
      iVar2 = (**(code **)(*piVar9 + 100))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x28c),
                         *(undefined4 *)(unaff_EBP + -0x288),*(undefined4 *)(unaff_EBP + -0x284),
                         *(undefined4 *)(unaff_EBP + -0x280));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x28c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar9 = *(int **)(unaff_EBP + -0x14);
      iVar2 = (**(code **)(*piVar9 + 0x98))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x44),100,100,
                         *(undefined4 *)(unaff_EBP + -0x84),5);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
      }
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)FUN_0042fb5e(unaff_EBP + -0x9c);
    iVar2 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)*piVar9;
    iVar2 = (**(code **)(*piVar9 + 100))
                      (piVar9,*(undefined4 *)(unaff_EBP + -0x18c),
                       *(undefined4 *)(unaff_EBP + -0x188),*(undefined4 *)(unaff_EBP + -0x184),
                       *(undefined4 *)(unaff_EBP + -0x180));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x18c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if ((*(int *)(unaff_EBP + -0x10) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)FUN_0042fb5e(unaff_EBP + -0x80);
    iVar2 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)*piVar9;
    iVar2 = FUN_0042fb0a();
    iVar2 = (**(code **)(*piVar9 + 0x6c))(piVar9,iVar2 / -2);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_004125d9();
    if ((*(int *)(unaff_EBP + -0x10) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)FUN_0042fb5e(unaff_EBP + -0xac);
    iVar2 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)*piVar9;
    iVar2 = FUN_0042fb34();
    iVar2 = (**(code **)(*piVar9 + 0x74))(piVar9,iVar2 / -2);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar9,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 0xc) == 2) {
      iVar2 = _rand();
      FUN_004031b7(iVar2 % 3000 + 300,3);
      piVar9 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar9 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar9;
      *(int **)(unaff_EBP + -0x1c) = piVar9;
      iVar2 = (**(code **)(iVar2 + 0xa0))
                        (piVar9,0,*(undefined4 *)(unaff_EBP + -0x1ac),
                         *(undefined4 *)(unaff_EBP + -0x1a8),*(undefined4 *)(unaff_EBP + -0x1a4),
                         *(undefined4 *)(unaff_EBP + -0x1a0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x1ac);
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
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042a378();
    FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0xb4),3);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    if (*(int *)(unaff_EBP + -0x50) < 0x65) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x78) + *(int *)(unaff_EBP + -0x50) * -2;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x28) = 0x32;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)FUN_004113e5(unaff_EBP + -0x48);
    iVar2 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)*piVar9;
    puVar12 = (undefined1 *)
              (**(code **)(*piVar9 + 0x90))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x28),0xff,
                         *(undefined4 *)(unaff_EBP + -0x1cc),*(undefined4 *)(unaff_EBP + -0x1c8),
                         *(undefined4 *)(unaff_EBP + -0x1c4),*(undefined4 *)(unaff_EBP + -0x1c0),
                         *(undefined4 *)(unaff_EBP + -0x1ec),*(undefined4 *)(unaff_EBP + -0x1e8),
                         *(undefined4 *)(unaff_EBP + -0x1e4),*(undefined4 *)(unaff_EBP + -0x1e0));
    if ((int)puVar12 < 0) {
      _local_2f4 = (double)CONCAT44(&DAT_00963de8,piVar9);
      puStack_2fc = (undefined1 *)0x489081;
      puStack_2f8 = puVar12;
      FUN_00878e09();
    }
    _local_2f4 = (double)CONCAT44(0x489089,local_2f4);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    _local_2f4 = (double)CONCAT44(unaff_EBP + -0x1cc,0x489099);
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      _local_2f4 = (double)CONCAT44(iVar2,0x4890a4);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    _local_2f4 = (double)CONCAT44(unaff_EBP + -0x1ec,0x4890b4);
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      _local_2f4 = (double)CONCAT44(iVar2,0x4890bf);
      FUN_00878dfb();
    }
    if (-1 < *(int *)(unaff_EBP + 0x10)) {
      if (*(int *)(unaff_EBP + 0x10) < 4) {
        _local_2f4 = 6.49861210983115e-314;
        puStack_2f8 = (undefined1 *)0x4891c5;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          _local_2f4 = -3.47731473762891e-310;
          FUN_00878dfb();
        }
        _local_2f4 = (double)CONCAT44(0x4891e1,local_2f4);
        iVar2 = FUN_0042a378();
        _local_2f4 = (double)CONCAT44(3,iVar2 + *(int *)(unaff_EBP + 0x14) /
                                                *(int *)(unaff_EBP + -0x50));
        puStack_2f8 = (undefined1 *)0x4891fa;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          _local_2f4 = -3.47731473763152e-310;
          FUN_00878dfb();
        }
        piVar9 = *(int **)(unaff_EBP + -0x24);
        puStack_2fc = *(undefined1 **)(unaff_EBP + -0x74);
        puStack_2f8 = *(undefined1 **)(unaff_EBP + -0x70);
        _local_2f4 = *(double *)(unaff_EBP + -0x6c);
        uStack_310 = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_30c = *(undefined4 *)(unaff_EBP + -0x24c);
        uStack_308 = *(undefined4 *)(unaff_EBP + -0x248);
        iStack_304 = *(int *)(unaff_EBP + -0x244);
        uStack_300 = *(undefined4 *)(unaff_EBP + -0x240);
        puVar12 = (undefined1 *)
                  (**(code **)(*piVar9 + 0x90))(piVar9,*(undefined4 *)(unaff_EBP + -0x34));
        if ((int)puVar12 < 0) {
          _local_2f4 = (double)CONCAT44(&DAT_00963de8,piVar9);
          puStack_2fc = (undefined1 *)0x48924b;
          puStack_2f8 = puVar12;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        _local_2f4 = (double)CONCAT44(unaff_EBP + -0x24c,0x48925b);
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          _local_2f4 = (double)CONCAT44(iVar2,0x489266);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iVar2 = unaff_EBP + -0x74;
      }
      else {
        if (5 < *(int *)(unaff_EBP + 0x10)) goto LAB_0048927e;
        _local_2f4 = 6.49861210983115e-314;
        puStack_2f8 = (undefined1 *)0x4890ef;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          _local_2f4 = -3.47731473761833e-310;
          FUN_00878dfb();
        }
        _local_2f4 = (double)CONCAT44(0x489108,local_2f4);
        iVar10 = _rand();
        iVar2 = *(int *)(unaff_EBP + 0x14);
        iVar4 = *(int *)(unaff_EBP + -0x50);
        _local_2f4 = (double)CONCAT44(0x489128,local_2f4);
        iVar11 = FUN_0042a378();
        _local_2f4 = (double)CONCAT44(3,(iVar10 % 30000 + -15000 + iVar2) / iVar4 + iVar11);
        puStack_2f8 = (undefined1 *)0x489138;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          _local_2f4 = -3.47731473762194e-310;
          FUN_00878dfb();
        }
        piVar9 = *(int **)(unaff_EBP + -0x14);
        puStack_2fc = *(undefined1 **)(unaff_EBP + -0x22c);
        puStack_2f8 = *(undefined1 **)(unaff_EBP + -0x228);
        _local_2f4 = *(double *)(unaff_EBP + -0x224);
        uStack_310 = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_30c = *(undefined4 *)(unaff_EBP + -0x20c);
        uStack_308 = *(undefined4 *)(unaff_EBP + -0x208);
        iStack_304 = *(int *)(unaff_EBP + -0x204);
        uStack_300 = *(undefined4 *)(unaff_EBP + -0x200);
        puVar12 = (undefined1 *)
                  (**(code **)(*piVar9 + 0x90))(piVar9,*(undefined4 *)(unaff_EBP + -0x34));
        if ((int)puVar12 < 0) {
          _local_2f4 = (double)CONCAT44(&DAT_00963de8,piVar9);
          puStack_2fc = (undefined1 *)0x48918c;
          puStack_2f8 = puVar12;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        _local_2f4 = (double)CONCAT44(unaff_EBP + -0x20c,0x48919c);
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          _local_2f4 = (double)CONCAT44(iVar2,0x4891a7);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iVar2 = unaff_EBP + -0x22c;
      }
      _local_2f4 = (double)CONCAT44(iVar2,0x489273);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_2f4 = (double)CONCAT44(iVar2,0x48927e);
        FUN_00878dfb();
      }
    }
LAB_0048927e:
    _local_2f4 = (double)CONCAT44(0x489289,local_2f4);
    p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
    _local_2f4 = (double)CONCAT44(*(IBinding **)(unaff_EBP + -0x10),0x489293);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (p_Var6,*(IBinding **)(unaff_EBP + -0x10));
    _local_2f4 = (double)CONCAT44(0x48929b,local_2f4);
    FUN_004125d9();
    _local_2f4 = (double)CONCAT44(0x4892a3,local_2f4);
    FUN_004125d9();
    piVar9 = *(int **)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar9 != (int *)0x0) {
      _local_2f4 = (double)CONCAT44(piVar9,0x4892b4);
      (**(code **)(*piVar9 + 8))();
    }
    piVar9 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (piVar9 != (int *)0x0) {
      _local_2f4 = (double)CONCAT44(piVar9,0x4892c5);
      (**(code **)(*piVar9 + 8))();
    }
    piVar9 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar9 != (int *)0x0) {
      _local_2f4 = (double)CONCAT44(piVar9,0x4892d6);
      (**(code **)(*piVar9 + 8))();
    }
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) + 1;
    if (*(int *)(unaff_EBP + -0x58) <= *(int *)(unaff_EBP + -0x60)) goto LAB_004892e5;
    iVar2 = *(int *)(unaff_EBP + -0x38);
  } while( true );
}


