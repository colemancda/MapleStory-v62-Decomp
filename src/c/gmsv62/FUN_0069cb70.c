/* FUN_0069cb70 - 0x0069cb70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069cb70(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  int iStack_64;
  int local_60;
  
  FUN_00879bb8();
  local_60 = 0x69cb8a;
  FUN_0081622a();
  iVar2 = *(int *)(extraout_ECX + 0x8c);
  if (iVar2 != 0) {
    iStack_64 = 0x69cba2;
    local_60 = iVar2;
    iVar1 = FUN_0087b4c0();
    if (iVar1 != 0) {
      *(int *)(unaff_EBP + -0x14) = iVar1 - iVar2;
      goto LAB_0069cbb3;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
LAB_0069cbb3:
  local_60 = unaff_EBP + -0x1c;
  iStack_64 = 0x69cbc1;
  FUN_0045e070();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_60 = unaff_EBP + -0x18;
  iStack_64 = 0x69cbe2;
  FUN_0045e08c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_60 = 0x69cbf1;
  FUN_00448dc6();
  local_60 = 0;
  iStack_64 = 1;
  puStack_68 = (undefined1 *)0x0;
  uStack_6c = 1;
  puStack_70 = (undefined1 *)0x0;
  uStack_74 = 0x58;
  uStack_78 = 0x1a;
  iStack_7c = *(undefined4 *)(extraout_ECX + 0x84);
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_80;
  FUN_0046fc23(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0048b97b();
  FUN_005558b0();
  local_60 = unaff_EBP + -0x10;
  iStack_64 = 0x69cc37;
  FUN_0045a1d8();
  local_60 = *(int *)(extraout_ECX + 0x84);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (local_60 / 10000 == 0x38e) {
    local_60 = unaff_EBP + -0x14;
    iStack_64 = 0x69cc62;
    FUN_00556acf();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_60 = 0x69cc6f;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_60 = extraout_ECX_00;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      local_60 = 0x69cc83;
      iVar2 = *(int *)(unaff_EBP + -0x14) + -0xc;
      FUN_00434e38();
      local_60 = iVar2;
    }
  }
  puStack_68 = (undefined1 *)&local_60;
  *(int **)(unaff_EBP + -0x20) = &local_60;
  iStack_64 = 1;
  uStack_6c = 0x69cc98;
  FUN_007d4a9a();
  iStack_64 = unaff_EBP + -0x10;
  puStack_68 = (undefined1 *)0x69cca3;
  FUN_007d3a22();
  local_60 = 0x69ccb4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  local_60 = 0x69ccc1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  local_60 = 0x69ccce;
  FUN_00403191();
  local_60 = unaff_EBP + -0x38;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_64 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_6c = 0x69cce5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_64 = 0x69ccf2;
  iStack_64 = FUN_00449749();
  puStack_68 = (undefined1 *)0x69ccfb;
  uStack_6c = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_68;
  puStack_70 = (undefined1 *)0x69cd07;
  FUN_00448a17();
  uStack_6c = 0x1a;
  puStack_70 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_74 = 0x69cd19;
  uStack_78 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_74;
  iStack_7c = 0x69cd25;
  FUN_00448a17();
  iStack_7c = unaff_EBP + -0x14;
  uStack_78 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_80 = 0x69cd34;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_78 = 0x69cd41;
  FUN_0044974c();
  uStack_78 = 0x69cd48;
  iVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_70 = (undefined1 *)((0x86U - iVar2 >> 1) + 0x67);
  uStack_74 = 0x69cd5e;
  FUN_004115d9();
  uStack_74 = 0x69cd65;
  FUN_00448e3a();
  FUN_004497b5();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  local_60 = 0x69cd82;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cd8d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  local_60 = 0x69cd9a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cda5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_60 = 0x69cdb2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cdbd;
    FUN_00878dfb();
  }
  local_60 = 0x69cdc6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  local_60 = 0x69cdd3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  local_60 = 0x69cde0;
  FUN_00403191();
  local_60 = unaff_EBP + -0x48;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x14);
  iStack_64 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_6c = 0x69cdf7;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_64 = 0x69ce04;
  iStack_64 = FUN_00449749();
  puStack_68 = (undefined1 *)0x69ce12;
  uStack_6c = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_68;
  puStack_70 = (undefined1 *)0x69ce1e;
  FUN_00448a17();
  uStack_6c = 0x35;
  puStack_70 = (undefined1 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_74 = 0x69ce2f;
  uStack_78 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_74;
  iStack_7c = 0x69ce3b;
  FUN_00448a17();
  iStack_7c = unaff_EBP + -0x20;
  uStack_78 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_80 = 0x69ce4a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_78 = 0x69ce57;
  FUN_0044974c();
  uStack_78 = 0x69ce5e;
  iVar2 = FUN_00448ebb();
  puStack_70 = (undefined1 *)((0x86U - iVar2 >> 1) + 0x67);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_74 = 0x69ce72;
  FUN_004115d9();
  uStack_74 = 0x69ce79;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    local_60 = 0x69ce8a;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    local_60 = 0x69ce9b;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  local_60 = 0x69cea8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69ceb3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  local_60 = 0x69cec0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cecb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_60 = 0x69ced8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cee3;
    FUN_00878dfb();
  }
  local_60 = 0x69ceef;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  local_60 = unaff_EBP + -0x48;
  iStack_64 = 0x69cef9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69cf05;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  local_60 = 0x69cf0f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  local_60 = unaff_EBP + -0x38;
  iStack_64 = 0x69cf19;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69cf25;
    FUN_00878dfb();
  }
  local_60 = unaff_EBP + -0x38;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_64 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_6c = 0x69cf3c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_64 = 0x69cf49;
  iStack_64 = FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_68;
  uStack_6c = 0xbec;
  uStack_74 = 0x69cf60;
  puStack_70 = (undefined1 *)&puStack_68;
  FUN_00679e4e();
  uStack_6c = 0x47;
  puStack_70 = (undefined1 *)0x6b;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_74 = 0x69cf70;
  FUN_004115d9();
  uStack_74 = 0x69cf77;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    local_60 = 0x69cf88;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  local_60 = 0x69cf95;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69cfa0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_60 = 0x69cfad;
  iVar2 = unaff_EBP + -0x48;
  iVar1 = FUN_00402bc3();
  local_60 = iVar2;
  if (iVar1 < 0) {
    local_60 = 0x69cfb8;
    FUN_00878dfb();
    local_60 = extraout_ECX_01;
  }
  puStack_68 = (undefined1 *)&local_60;
  *(int **)(unaff_EBP + -0x28) = &local_60;
  iStack_64 = 1;
  uStack_6c = 0x69cfcc;
  FUN_007d4a9a();
  iStack_64 = unaff_EBP + -0x1c;
  puStack_68 = (undefined1 *)0x69cfd7;
  FUN_007d3a22();
  puStack_68 = (undefined1 *)&local_60;
  *(int **)(unaff_EBP + -0x28) = &local_60;
  iStack_64 = 1;
  uStack_6c = 0x69cfe9;
  FUN_007d4a9a();
  iStack_64 = unaff_EBP + -0x18;
  puStack_68 = (undefined1 *)0x69cff4;
  FUN_007d3a22();
  local_60 = 0x69cffd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  local_60 = unaff_EBP + -0x38;
  iStack_64 = 0x69d007;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69d013;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  local_60 = 0x69d01d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  local_60 = unaff_EBP + -0x48;
  iStack_64 = 0x69d027;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69d033;
    FUN_00878dfb();
  }
  local_60 = unaff_EBP + -0x48;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_64 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_6c = 0x69d04a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_64 = 0x69d057;
  iStack_64 = FUN_00449749();
  puStack_68 = (undefined1 *)0x69d060;
  uStack_6c = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_68;
  puStack_70 = (undefined1 *)0x69d06c;
  FUN_00448a17();
  uStack_6c = 0x69;
  puStack_70 = (undefined1 *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_74 = 0x69d07c;
  FUN_004115d9();
  uStack_74 = 0x69d083;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    local_60 = 0x69d094;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  local_60 = 0x69d0a1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69d0ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_60 = 0x69d0b9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69d0c4;
    FUN_00878dfb();
  }
  local_60 = 0x69d0ca;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  local_60 = unaff_EBP + -0x38;
  iStack_64 = 0x69d0d4;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69d0e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  local_60 = 0x69d0ea;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  local_60 = unaff_EBP + -0x48;
  iStack_64 = 0x69d0f4;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    local_60 = 0x69d100;
    FUN_00878dfb();
  }
  local_60 = unaff_EBP + -0x48;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_64 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_6c = 0x69d117;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_64 = 0x69d124;
  iStack_64 = FUN_00449749();
  puStack_68 = (undefined1 *)0x69d12d;
  uStack_6c = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_68;
  puStack_70 = (undefined1 *)0x69d139;
  FUN_00448a17();
  uStack_6c = 0x79;
  puStack_70 = (undefined1 *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uStack_74 = 0x69d149;
  FUN_004115d9();
  uStack_74 = 0x69d150;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    local_60 = 0x69d161;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  local_60 = 0x69d16e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69d179;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_60 = 0x69d186;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_60 = 0x69d191;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    local_60 = 0x69d1ae;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


