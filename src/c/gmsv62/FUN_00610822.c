/* FUN_00610822 - 0x00610822 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00610822(void)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(*(int *)extraout_ECX[0x1f] + 0x20))(extraout_ECX,1,0xd5,6,0,unaff_EBP + -0x24);
  iVar2 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048b9e9(uVar1);
  (**(code **)(*(int *)extraout_ECX[0x21] + 0x20))(extraout_ECX,2000,1,3,0xd4,0x1f,0xe5,0);
  iVar2 = *(int *)(extraout_ECX[0x1d] + 400);
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 4)) {
    iVar2 = 0;
  }
  else {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    iVar2 = iVar2 + -2;
  }
  FUN_004ad003(iVar2);
  *(undefined4 *)(extraout_ECX[0x21] + 0x34) = 200;
  (**(code **)(*extraout_ECX + 0x2c))(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


