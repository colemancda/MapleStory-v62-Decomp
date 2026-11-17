/* FUN_006e4f8b - 0x006e4f8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e4f8b(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar2 = (undefined4 *)FUN_004029b9(0x48);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e5408();
    *puVar2 = &PTR_LAB_008f024c;
    puVar2[1] = &PTR_ptr_00456316_008f0200;
    puVar2[2] = &PTR_FUN_008f01fc;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006ea8fd(puVar2);
  piVar1 = *(int **)(extraout_ECX + 0xa74);
  *(undefined4 *)(unaff_EBP + -0x34) = 0xfffffff9;
  *(undefined4 *)(unaff_EBP + -0x30) = 0x19;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x32;
  *(undefined4 *)(unaff_EBP + -0x28) = 0x131;
  (**(code **)(*piVar1 + 0x20))(extraout_ECX,0x7d6,unaff_EBP + -0x34,0);
  iVar3 = FUN_004029b9(0x48);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e5408();
    puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
    *puVar2 = &PTR_LAB_008f01d4;
    puVar2[1] = &PTR_ptr_00456316_008f0188;
    puVar2[2] = &PTR_FUN_008f0184;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_006ea947(puVar2);
  piVar1 = *(int **)(extraout_ECX + 0xa7c);
  *(undefined4 *)(unaff_EBP + -0x34) = 0x1b7;
  *(undefined4 *)(unaff_EBP + -0x30) = 0x19;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x1fa;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xdc;
  (**(code **)(*piVar1 + 0x20))(extraout_ECX,0x7d7,unaff_EBP + -0x34,0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9e8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))
            (extraout_ECX,1000,0x1ad,8,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9e9);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xa8c) + 0x20))
            (extraout_ECX,2000,0xaf,0x1d,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9ea);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xa94) + 0x20))
            (extraout_ECX,0x7d1,0x30,0x11d,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9eb);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xa9c) + 0x20))
            (extraout_ECX,0x7d2,0xb9,0x11d,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9ea);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xaa4) + 0x20))
            (extraout_ECX,0x7d3,0x10e,0x11d,0,unaff_EBP + -0x24);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x9eb);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xaac) + 0x20))
            (extraout_ECX,0x7d4,0x197,0x11d,0,unaff_EBP + -0x24);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x48) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0045e196(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0xa84) + 8))
            (extraout_ECX,0x7d5,0x31,0x1e,0x78,0xf,unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


