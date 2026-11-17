/* FUN_006a7768 - 0x006a7768 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a7768(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00679d86(unaff_EBP + -0x10,0xf40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3bf);
  uVar3 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0041354c(unaff_EBP + -0x1c,uVar3,*(undefined4 *)(unaff_EBP + -0x10),u__BtOk_0096a6c0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))
            (extraout_ECX,1,0x34,0xaa,0,unaff_EBP + -0x28);
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3bf);
  uVar3 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0041354c(unaff_EBP + -0x1c,uVar3,*(undefined4 *)(unaff_EBP + -0x10),u__BtCancel_0096a6ac);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,2,0x66,0xaa,0,unaff_EBP + -0x28);
  FUN_004a77eb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar1 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x14,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x80) = *puVar1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x5c) = 4;
  *(undefined4 *)(unaff_EBP + -0x60) = 0x61;
  iVar2 = FUN_004029b9(0xcc);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00609bca(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))
            (extraout_ECX,0,0x30,0x51,0x6b,0x3c,unaff_EBP + -0x8c);
  FUN_0045621e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iVar2 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e1ff(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))(extraout_ECX,1,10,0x93,unaff_EBP + -0x54);
  FUN_00499fb8(1);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x90) + 4) + 0x24))(1);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x98));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00457a09();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00608bf3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


