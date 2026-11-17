/* FUN_0053a0e9 - 0x0053a0e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053a0e9(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  bool bVar5;
  undefined1 *puStack_148;
  int iStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int *piStack_134;
  undefined *puStack_130;
  int *piStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x3b8) = *(undefined4 *)(unaff_EBP + 8);
  iStack_120 = 0x53a11b;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_120 = 0x53a129;
  FUN_00403191();
  iStack_120 = 0;
  iStack_124 = unaff_EBP + -0x88;
  iStack_128 = unaff_EBP + -0x68;
  piStack_134 = (int *)&piStack_12c;
  *(int ***)(unaff_EBP + -0x14) = &piStack_12c;
  puStack_130 = (undefined *)0x1158;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_138 = (int *)0x53a150;
  FUN_00679e4e();
  puStack_130 = (undefined *)(unaff_EBP + -0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_134 = (int *)0x53a160;
  FUN_00405a1d();
  piStack_134 = (int *)0x53a167;
  FUN_00402660();
  piStack_134 = (int *)0x53a16e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_124 = 0x53a179;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    iStack_120 = 0x53a18f;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_120 = 0x53a1a0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_120 = 0x53a1b0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_120 = 0x53a1bb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_120 = 0x53a1c8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_120 = 0x53a1d3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_120 = 0x53a1e3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_120 = 0x53a1ee;
    FUN_00878dfb();
  }
  iStack_120 = 0x53a1f7;
  FUN_00403191();
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_124 = 0x53a204;
  FUN_0040ee87();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar5) {
    iStack_120 = 0x53a21a;
    FUN_00878dfb();
  }
  iStack_120 = unaff_EBP + -0x50;
  iStack_124 = 0xc0000000;
  iStack_128 = 0x6d;
  piStack_12c = (int *)0xd5;
  puStack_130 = (undefined *)0x22;
  piStack_134 = (int *)0x17;
  piStack_138 = (int *)(unaff_EBP + -0x10);
  piStack_13c = (int *)0x53a241;
  puVar2 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3b4);
  iStack_120 = 0x53a250;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_120 = 0x53a265;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_120 = 0x53a270;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_120 = 0x53a27d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_120 = 0x53a288;
    FUN_00878dfb();
  }
  iStack_120 = 0x53a293;
  puVar2 = (undefined4 *)FUN_004489f5();
  iStack_120 = *puVar2;
  iStack_124 = 0x53a2a0;
  FUN_0040ee87();
  iVar1 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    iStack_120 = 0x53a2b3;
    FUN_00878dfb();
  }
  piStack_12c = *(int **)this;
  iVar1 = *piStack_12c;
  iStack_128 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_124 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x10) = piStack_12c;
  puStack_130 = (undefined *)0x53a2ca;
  piVar3 = (int *)(**(code **)(iVar1 + 100))();
  if ((int)piVar3 < 0) {
    puStack_130 = &DAT_00963de8;
    piStack_134 = *(int **)(unaff_EBP + -0x10);
    piStack_13c = (int *)0x53a2de;
    piStack_138 = piVar3;
    FUN_00878e09();
  }
  puStack_130 = (undefined *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_134 = (int *)0x53a2eb;
  puStack_130 = (undefined *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    piStack_134 = (int *)0x53a2f6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_130 = (undefined *)0x53a302;
  FUN_00412600();
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (*(int *)(iVar1 + 0x3b4) == 0) {
    puStack_130 = (undefined *)0x80004003;
    piStack_134 = (int *)0x53a31d;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(iVar1 + 0x3b4);
  puStack_130 = (undefined *)0xffffffff;
  piStack_138 = (int *)0x53a32a;
  piStack_134 = piVar3;
  piVar4 = (int *)(**(code **)(*piVar3 + 0xe0))();
  if ((int)piVar4 < 0) {
    piStack_138 = (int *)&DAT_00963df8;
    iStack_144 = 0x53a33a;
    piStack_140 = piVar4;
    piStack_13c = piVar3;
    FUN_00878e09();
  }
  piStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x53a346;
  FUN_00403191();
  piStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_13c = (int *)0x53a353;
  FUN_00403191();
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  piStack_140 = (int *)(unaff_EBP + -200);
  iStack_144 = unaff_EBP + -0x3c;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_148;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&puStack_148,0x1156);
  iVar1 = unaff_EBP + -0x108;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_140 = (int *)0x53a3a5;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar1 != 0) {
    piStack_138 = (int *)(unaff_EBP + -0x24);
    piStack_13c = (int *)0x53a3bb;
    piStack_138 = (int *)FUN_00404b30();
    if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
      piStack_13c = (int *)0x53a3cc;
      FUN_00878dfb();
    }
  }
  piStack_138 = (int *)(unaff_EBP + -0x108);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_13c = (int *)0x53a3dc;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a3e7;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_13c = (int *)0x53a3f4;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a3ff;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -200);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_13c = (int *)0x53a40f;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a41a;
    FUN_00878dfb();
  }
  piStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x53a426;
  FUN_00403191();
  piStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_13c = (int *)0x53a436;
  FUN_00403191();
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  piStack_140 = (int *)(unaff_EBP + -0x98);
  iStack_144 = unaff_EBP + -0xb8;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_148;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e(&puStack_148,0x1157);
  iVar1 = unaff_EBP + -0xe8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_140 = (int *)0x53a486;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar1 != 0) {
    piStack_138 = (int *)(unaff_EBP + -0x10);
    piStack_13c = (int *)0x53a49c;
    piStack_138 = (int *)FUN_00404b30();
    if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
      piStack_13c = (int *)0x53a4ad;
      FUN_00878dfb();
    }
  }
  piStack_138 = (int *)(unaff_EBP + -0xe8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_13c = (int *)0x53a4bd;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a4c8;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_13c = (int *)0x53a4d8;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a4e3;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_13c = (int *)0x53a4f3;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a4fe;
    FUN_00878dfb();
  }
  piStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x53a507;
  FUN_00403191();
  piStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_13c = (int *)0x53a517;
  FUN_00403191();
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  piStack_140 = (int *)(unaff_EBP + -0x78);
  iStack_144 = unaff_EBP + -0xa8;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_148;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00679e4e(&puStack_148,0x1166);
  iVar1 = unaff_EBP + -0xf8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_140 = (int *)0x53a564;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    piStack_138 = (int *)(unaff_EBP + -0x58);
    piStack_13c = (int *)0x53a57a;
    piStack_138 = (int *)FUN_00404b30();
    if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
      piStack_13c = (int *)0x53a58b;
      FUN_00878dfb();
    }
  }
  piStack_138 = (int *)(unaff_EBP + -0xf8);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  piStack_13c = (int *)0x53a59b;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a5a6;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  piStack_13c = (int *)0x53a5b6;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a5c1;
    FUN_00878dfb();
  }
  piStack_138 = (int *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_13c = (int *)0x53a5ce;
  piVar4 = (int *)FUN_00402bc3();
  piVar3 = piStack_138;
  if ((int)piVar4 < 0) {
    piStack_13c = (int *)0x53a5d9;
    piStack_138 = piVar4;
    FUN_00878dfb();
    piVar3 = extraout_ECX_00;
  }
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  puStack_148 = (undefined1 *)&piStack_140;
  *(int ***)(unaff_EBP + -0x40) = &piStack_140;
  iStack_144 = 0x5cf;
  piStack_140 = piVar3;
  FUN_00679e4e();
  iStack_144 = unaff_EBP + -0x118;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_148 = (undefined1 *)0x53a601;
  FUN_0040263d();
  puStack_148 = (undefined1 *)0x53a608;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  piStack_140 = (int *)0x53a613;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar1 != 0) {
    piStack_138 = (int *)(unaff_EBP + -0x14);
    piStack_13c = (int *)0x53a629;
    piStack_138 = (int *)FUN_00404b30();
    if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
      piStack_13c = (int *)0x53a63a;
      FUN_00878dfb();
    }
  }
  piStack_138 = (int *)(unaff_EBP + -0x118);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  piStack_13c = (int *)0x53a64a;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x53a655;
    FUN_00878dfb();
  }
  piStack_138 = (int *)0x53a665;
  FUN_0048ba33();
  *(int ***)(unaff_EBP + -0x40) = &piStack_138;
  piStack_138 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_13c;
  piStack_140 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_144 = 0x53a67d;
  FUN_0053d14e();
  iStack_144 = unaff_EBP + 8;
  *(int ***)(unaff_EBP + -0x44) = &piStack_140;
  puStack_148 = (undefined1 *)0x53a68c;
  FUN_00424dbc();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_144 = 0x53a697;
  FUN_0048b994();
  iStack_144 = 0x53a69e;
  FUN_0085fe71();
  piStack_138 = (int *)0x53a6a9;
  FUN_0086192b();
  piStack_138 = (int *)(unaff_EBP + -0x48);
  piStack_13c = (int *)0x53a6b8;
  iVar1 = FUN_00455c59();
  piStack_140 = *(int **)(iVar1 + 4);
  piStack_138 = (int *)((int)piStack_140 + 0x25b);
  piStack_13c = (int *)((int)piStack_140 + 0xd3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_144 = 0x53a6d6;
  FUN_004b857d();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    piStack_138 = (int *)0x0;
    piStack_13c = (int *)0x53a6e8;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  piStack_138 = (int *)0x53a6f6;
  FUN_0048ba66();
  piStack_138 = (int *)0x53a701;
  FUN_007c50b6();
  piStack_138 = (int *)0x53a708;
  FUN_0053accd();
  piStack_138 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (piStack_138 != (int *)0x0) {
    piStack_13c = (int *)0x53a719;
    (**(code **)(*piStack_138 + 8))();
  }
  piStack_138 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (piStack_138 != (int *)0x0) {
    piStack_13c = (int *)0x53a72a;
    (**(code **)(*piStack_138 + 8))();
  }
  piStack_138 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piStack_138 != (int *)0x0) {
    piStack_13c = (int *)0x53a73b;
    (**(code **)(*piStack_138 + 8))();
  }
  piStack_138 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_138 != (int *)0x0) {
    piStack_13c = (int *)0x53a74c;
    (**(code **)(*piStack_138 + 8))();
  }
  piStack_138 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_138 != (int *)0x0) {
    piStack_13c = (int *)0x53a75d;
    (**(code **)(*piStack_138 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


