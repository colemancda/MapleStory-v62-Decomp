/* FUN_0060fe5f - 0x0060fe5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060fe5f(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -100) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x84) = 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 2;
  *(undefined4 *)(unaff_EBP + -0x78) = 2;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xff000000;
  puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x74) = *puVar1;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar3);
  iVar2 = extraout_ECX[0x1d];
  *(undefined4 *)(unaff_EBP + -0x58) = 4;
  if (iVar2 == 0) {
    *(int *)(unaff_EBP + -0x10) = extraout_ECX[0x1e];
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x3bc);
  uVar3 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + -0x88,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  (**(code **)(*(int *)extraout_ECX[0x26] + 8))
            (extraout_ECX,0x3e9,0x76,0x20,0x6b,0xf,unaff_EBP + -0x88);
  (**(code **)(*(int *)(extraout_ECX[0x26] + 4) + 0x1c))(extraout_ECX[0x1d] == 0);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar3);
  *(undefined4 *)(unaff_EBP + -0x58) = 10;
  FUN_00414edd(&DAT_00968204,0xffffffff);
  (**(code **)(*(int *)extraout_ECX[0x28] + 8))
            (extraout_ECX,0x3ea,0x76,0x34,0x6b,0xf,unaff_EBP + -0x88);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar3);
  iVar2 = extraout_ECX[0x1d];
  *(undefined4 *)(unaff_EBP + -0x58) = 4;
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = extraout_ECX[0x1e];
  }
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x3bc);
  uVar3 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00434e21(unaff_EBP + -0x88,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  (**(code **)(*(int *)extraout_ECX[0x2a] + 8))
            (extraout_ECX,0x3eb,0x76,0x48,0x6b,0xf,unaff_EBP + -0x88);
  (**(code **)(*(int *)(extraout_ECX[0x2a] + 4) + 0x1c))(0);
  piVar4 = extraout_ECX + 0x27;
  if (extraout_ECX[0x1d] == 0) {
    piVar4 = extraout_ECX + 0x25;
  }
  FUN_008164fd(piVar4[1]);
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x34) = 0x5a;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xe;
  iVar2 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e1ff(uVar3);
  (**(code **)(*(int *)extraout_ECX[0x24] + 0x20))(extraout_ECX,0x3ec,0xb,0x5c,unaff_EBP + -0x50);
  (**(code **)(*(int *)(extraout_ECX[0x24] + 4) + 0x1c))(extraout_ECX[0x1d] == 0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar3);
  (**(code **)(*(int *)extraout_ECX[0x20] + 0x20))(extraout_ECX,1,0x83,0x78,0,unaff_EBP + -0x24);
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar3);
  (**(code **)(*(int *)extraout_ECX[0x22] + 0x20))(extraout_ECX,2,0xb4,0x78,0,unaff_EBP + -0x24);
  (**(code **)(*extraout_ECX + 0x2c))(0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


