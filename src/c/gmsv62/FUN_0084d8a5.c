/* FUN_0084d8a5 - 0x0084d8a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0084d8a5(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  bool bVar6;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 *puStack_a4;
  
  FUN_00879bb8();
  puStack_a4 = (undefined4 *)0x84d8c2;
  uVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar5 = DAT_00979178;
  bVar6 = DAT_00979178 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar6) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_a4 = &DAT_00979218;
    iStack_a8 = 0x84d8e3;
    iVar3 = (**(code **)(*(int *)(uVar5 + 4) + 0x48))();
    piVar4 = (int *)(-(uint)(iVar3 != 0) & DAT_00979178);
  }
  if (piVar4 != (int *)0x0) {
    puStack_a4 = (undefined4 *)0x1;
    iStack_a8 = 0x84d8fe;
    (**(code **)(*piVar4 + 0x34))();
  }
  switch(uVar1) {
  case 0xb:
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x74);
    iStack_a8 = 0x84d91c;
    FUN_00455c59();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_a4 = (undefined4 *)0x84d92e;
    FUN_004b9595();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      puStack_a4 = (undefined4 *)0x0;
      iStack_a8 = 0x84d941;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x70) = 0;
    }
    puStack_a4 = *(undefined4 **)(unaff_EBP + 8);
    iStack_a8 = 0x84d94e;
    FUN_004b69ab();
    puStack_a4 = (undefined4 *)0x103c;
    iStack_a8 = unaff_EBP + -0x50;
    iStack_ac = 0x84d961;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_a8 = 0x84d96e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xc:
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x80);
    iStack_a8 = 0x84d984;
    FUN_00455c59();
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      puStack_a4 = (undefined4 *)0x0;
      iStack_a8 = 0x84d99b;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    }
    puStack_a4 = *(undefined4 **)(unaff_EBP + 8);
    iStack_a8 = 0x84d9a8;
    FUN_004b69ab();
    puStack_a4 = (undefined4 *)0x103d;
    iStack_a8 = unaff_EBP + -0x58;
    iStack_ac = 0x84d9bb;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_a8 = 0x84d9c8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xd:
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x8c);
    iStack_a8 = 0x84da0c;
    FUN_00455c59();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_a4 = (undefined4 *)0x84da1e;
    FUN_0065e64a();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x88) != 0) {
      puStack_a4 = (undefined4 *)0x0;
      iStack_a8 = 0x84da35;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x88) = 0;
    }
    puStack_a4 = (undefined4 *)0x103f;
    iStack_a8 = unaff_EBP + -0x5c;
    iStack_ac = 0x84da4e;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a8 = 0x84da5b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xe:
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x98);
    iStack_a8 = 0x84da74;
    FUN_00455c59();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_a4 = (undefined4 *)0x84da86;
    FUN_0065e64a();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x94) != 0) {
      puStack_a4 = (undefined4 *)0x0;
      iStack_a8 = 0x84da9d;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x94) = 0;
    }
    puStack_a4 = *(undefined4 **)(extraout_ECX + 0x2088);
    iStack_a8 = 0x84dab4;
    FUN_007c1325();
    puStack_a4 = (undefined4 *)0x1040;
    iStack_a8 = unaff_EBP + -0x30;
    iStack_ac = 0x84dac7;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_a8 = 0x84dad4;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xf:
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x18);
    iStack_a8 = 0x84daeb;
    FUN_0045cdbc();
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_a8 = 0x84dafb;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_a4 = (undefined4 *)0x84db07;
    uVar5 = FUN_00424561();
    puStack_a4 = (undefined4 *)0x88;
    iStack_a8 = 0x84db18;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puStack_a4 = (undefined4 *)(uVar5 & 0xffff);
      iStack_ac = unaff_EBP + -0x14;
      *(int **)(unaff_EBP + -0x9c) = &iStack_a8;
      iStack_b0 = 0x84db3b;
      iStack_a8 = extraout_ECX_00;
      FUN_00450368();
      iStack_b0 = unaff_EBP + -0x18;
      *(int **)(unaff_EBP + -0xa0) = &iStack_ac;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_b4 = 0x84db51;
      iStack_ac = extraout_ECX_01;
      FUN_00450368();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_b0 = 0x84db5d;
      iVar3 = FUN_006a30b2();
    }
    uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x60) = -(uint)(uVar5 != 0) & uVar5 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_a4 = (undefined4 *)0x84db84;
    FUN_0084ece8();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_a4 = (undefined4 *)0x84db90;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_a4 = (undefined4 *)0x84db9c;
    FUN_0084ed05();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_a4 = (undefined4 *)0x84dba8;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_a4 = (undefined4 *)0x84dbb3;
    FUN_00414ebb();
    goto switchD_0084d90a_caseD_11;
  case 0x10:
    puStack_a4 = (undefined4 *)0x104f;
    iStack_a8 = unaff_EBP + -0x4c;
    iStack_ac = 0x84de56;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_a8 = 0x84de63;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  default:
    goto switchD_0084d90a_caseD_11;
  case 0x12:
    puStack_a4 = (undefined4 *)0x1041;
    iStack_a8 = unaff_EBP + -0x68;
    iStack_ac = 0x84dbcb;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_a8 = 0x84dbd8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x13:
    puStack_a4 = (undefined4 *)0x1042;
    iStack_a8 = unaff_EBP + -0x38;
    iStack_ac = 0x84dbf6;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_a8 = 0x84dc03;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x14:
    puStack_a4 = (undefined4 *)0x1050;
    iStack_a8 = unaff_EBP + -0x90;
    iStack_ac = 0x84dc24;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_a8 = 0x84dc31;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x15:
    puStack_a4 = (undefined4 *)0x1043;
    iStack_a8 = unaff_EBP + -0x40;
    iStack_ac = 0x84dc52;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_a8 = 0x84dc5f;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x16:
    puStack_a4 = (undefined4 *)0x1044;
    iStack_a8 = unaff_EBP + -0x6c;
    iStack_ac = 0x84dc7d;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_a8 = 0x84dc8a;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x17:
    puStack_a4 = (undefined4 *)0x1045;
    iStack_a8 = unaff_EBP + -0x48;
    iStack_ac = 0x84dca8;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_a8 = 0x84dcb5;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x18:
    puStack_a4 = (undefined4 *)0x1047;
    iStack_a8 = unaff_EBP + -0x1c;
    iStack_ac = 0x84dd04;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_a8 = 0x84dd11;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x19:
    puStack_a4 = (undefined4 *)0x1046;
    iStack_a8 = unaff_EBP + -0x84;
    iStack_ac = 0x84dcd6;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_a8 = 0x84dce3;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1a:
    puStack_a4 = (undefined4 *)0x1048;
    iStack_a8 = unaff_EBP + -0x78;
    iStack_ac = 0x84dd2f;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_a8 = 0x84dd3c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1b:
    puStack_a4 = (undefined4 *)0x1049;
    iStack_a8 = unaff_EBP + -0x20;
    iStack_ac = 0x84dd5a;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_a8 = 0x84dd67;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1c:
    puStack_a4 = (undefined4 *)0x104a;
    iStack_a8 = unaff_EBP + -0x24;
    iStack_ac = 0x84dd85;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_a8 = 0x84dd92;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1d:
    puStack_a4 = (undefined4 *)0x104b;
    iStack_a8 = unaff_EBP + -0x2c;
    iStack_ac = 0x84ddb0;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_a8 = 0x84ddbd;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1e:
    puStack_a4 = (undefined4 *)0x103e;
    iStack_a8 = unaff_EBP + -0x28;
    iStack_ac = 0x84d9e6;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_a8 = 0x84d9f3;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1f:
    puStack_a4 = (undefined4 *)0x104d;
    iStack_a8 = unaff_EBP + -0x3c;
    iStack_ac = 0x84de06;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_a8 = 0x84de13;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x20:
    puStack_a4 = (undefined4 *)0x104c;
    iStack_a8 = unaff_EBP + -0x34;
    iStack_ac = 0x84dddb;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_a8 = 0x84dde8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x22:
    puStack_a4 = (undefined4 *)0x104e;
    iStack_a8 = unaff_EBP + -0x44;
    iStack_ac = 0x84de2e;
    puStack_a4 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_a8 = 0x84de3b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x24:
    puStack_a4 = (undefined4 *)0x84de73;
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') goto switchD_0084d90a_caseD_11;
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x54);
    iStack_a8 = 0x84de86;
    puStack_a4 = (undefined4 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_a8 = 0x84de93;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  puStack_a4 = (undefined4 *)0x84de9e;
  FUN_00414ebb();
  puStack_a4 = (undefined4 *)0x0;
  iStack_a8 = 1;
  iStack_ac = 0;
  iStack_b0 = 0;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_b4;
  uStack_b4 = extraout_ECX_02;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
switchD_0084d90a_caseD_11:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a4 = (undefined4 *)0x84dec6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


