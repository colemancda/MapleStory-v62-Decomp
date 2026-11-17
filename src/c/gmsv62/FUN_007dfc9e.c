/* FUN_007dfc9e - 0x007dfc9e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007dfc9e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,1000,0x34,0x8d,0,unaff_EBP + -0x20);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))
            (extraout_ECX,0x3e9,0x65,0x8d,0,unaff_EBP + -0x20);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
            (extraout_ECX,0x3ea,0x87,6,0,unaff_EBP + -0x20);
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -100) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xff999999;
  *(undefined4 *)(unaff_EBP + -0x48) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x44) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x40) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xfffffffe;
  iVar2 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00495bdd(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
            (extraout_ECX,0x3eb,0,0x30,0x44,100,0x11,unaff_EBP + -100);
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb74);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0049e176(uVar1,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb75);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0049e176(uVar1,1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb76);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0049e176(uVar1,2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb77);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0049e176(uVar1,3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb78);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0049e176(uVar1,4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb79);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0049e176(uVar1,5);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  FUN_0045621e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 100;
  *(undefined4 *)(unaff_EBP + -0x70) = 0x11;
  iVar2 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0045e1ff(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))(extraout_ECX,0x3ec,5,0x78,unaff_EBP + -0x90)
  ;
  FUN_00499fb8(0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00457a09();
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


