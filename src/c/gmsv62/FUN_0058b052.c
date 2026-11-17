/* FUN_0058b052 - 0x0058b052 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058b052(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *_Dst;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  bool bVar5;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  
  FUN_00879bb8();
  iStack_b8 = 0;
  iStack_bc = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_c0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00679e4e();
  FUN_008163ca();
  iStack_b8 = 0x58b094;
  FUN_0058b662();
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  iStack_b8 = 0xb6d;
  iStack_bc = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_c0 = 0x58b0b7;
  iStack_b8 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_bc = 0x58b0c4;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_b8 = *(int *)(unaff_EBP + -0x14) + -0xc;
    iStack_bc = 0x58b0d7;
    FUN_00403384();
  }
  iStack_b8 = 0x578;
  iStack_bc = 0x58b0e7;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    iStack_b8 = 0;
  }
  else {
    iStack_b8 = 0x58b0f9;
    iStack_b8 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_bc = 0x58b109;
  FUN_00450382();
  iStack_b8 = unaff_EBP + -0x40;
  iStack_bc = 0;
  uStack_c0 = 0x176;
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))();
  _Dst = (undefined4 *)FUN_004029b9();
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    *_Dst = &PTR_LAB_008e84a0;
    iStack_f8 = 0x58b1d7;
    _memset(_Dst,0,0xc);
    *_Dst = &PTR_FUN_008e8ea8;
    _Dst[4] = 0x15e;
    _Dst[3] = 7;
  }
  *(undefined4 **)(unaff_EBP + -0x2c) = _Dst;
  if (_Dst != (undefined4 *)0x0) {
    InterlockedIncrement(_Dst + 1);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar2 = DAT_00978368;
  bVar5 = DAT_00978368 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if ((bVar5) || (*(int *)(iVar2 + 0x2084) == 0)) {
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x10) = 0x18;
    iStack_f8 = unaff_EBP + -0x74;
    *(int **)(unaff_EBP + -0x1c) = &iStack_fc;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    iStack_fc = extraout_ECX_01;
    FUN_00679e4e(&iStack_fc,0xbab);
    iVar2 = unaff_EBP + -0x94;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x38;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
  }
  else {
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x10) = 3;
    iStack_f8 = unaff_EBP + -0x54;
    *(int **)(unaff_EBP + -0x1c) = &iStack_fc;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    iStack_fc = extraout_ECX_00;
    FUN_004033a1(u_String_GuestEULA_img_EULA_00965908);
    iVar2 = unaff_EBP + -0xa4;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined4 *)(unaff_EBP + -0x10) = 7;
    *(undefined4 *)(unaff_EBP + -4) = 10;
  }
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (iVar2 = FUN_00402bc3(), iVar2 < 0)) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb();
    }
    uVar3 = FUN_0040cf4d();
    if (uVar3 <= *(uint *)(unaff_EBP + -0x10)) break;
    iStack_f8 = 0x58b467;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00449713();
    iStack_f8 = *(int *)(unaff_EBP + -0x20);
    iStack_fc = 0x58b48f;
    FUN_00434e21();
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff10;
    iStack_f8 = 0x58b4a5;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_f8 = 0x58b4b8;
    FUN_0040263d();
    iStack_f8 = 0x58b4bf;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00414ebb();
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  iStack_fc = unaff_EBP + -0x24;
  *(int **)(unaff_EBP + -0x20) = &iStack_f8;
  FUN_00450368();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_fc = 0x58b562;
  FUN_004503f5();
  iStack_fc = 0x58b569;
  iVar2 = FUN_007e3c88();
  iStack_fc = 0x74;
  *(int *)(extraout_ECX + 0xa0) = (iVar2 + -0x136) / 7 + -0xf;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar2 == 0) {
    iStack_fc = 0;
  }
  else {
    iStack_fc = 0x58b59b;
    iStack_fc = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0048b9e9();
  iStack_fc = 0;
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))(extraout_ECX,1000,1,5,0x186,0x28,0x13d);
  FUN_004ad003((*(int *)(extraout_ECX + 0xa0) < 1) + 1 + *(int *)(extraout_ECX + 0xa0));
  *(undefined4 *)(*(int *)(extraout_ECX + 0x90) + 0x34) = 0x163;
  *(undefined4 *)(extraout_ECX + 0x78) = *(undefined4 *)(unaff_EBP + 8);
  if (DAT_00979430 != 0) {
    (**(code **)(*(int *)(DAT_00979430 + 4) + 0x34))();
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_004504e6(0);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


