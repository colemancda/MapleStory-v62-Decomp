/* FUN_006db93a - 0x006db93a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006db93a(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x638) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x570);
  }
  if (*(int **)(extraout_ECX + 0x618) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x618) + 0xc))();
    FUN_00450463();
  }
  if (*(int **)(extraout_ECX + 0x610) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x610) + 0xc))();
    FUN_00450463();
  }
  if (*(int **)(extraout_ECX + 0x608) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x608) + 0xc))();
    FUN_00450463();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x18) = ((*(int *)(unaff_EBP + -0x10) != 2) - 1 & 2) + 0x2a;
  *(uint *)(unaff_EBP + -0x14) = ((*(int *)(unaff_EBP + -0x10) != 2) - 1 & 0xfffffffe) + 6;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0x4f3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x618) + 0x20))
            (extraout_ECX,0x3ea,*(int *)(extraout_ECX + 0x1c) - *(int *)(unaff_EBP + -0x18),
             *(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0x4f2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x610) + 0x20))
            (extraout_ECX,0x3e9,(*(int *)(extraout_ECX + 0x1c) - *(int *)(unaff_EBP + -0x18)) + -0xe
             ,*(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0x4f1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x608) + 0x20))
            (extraout_ECX,1000,(*(int *)(extraout_ECX + 0x1c) - *(int *)(unaff_EBP + -0x18)) + -0x1b
             ,*(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x10) == 2) {
    iVar2 = *(int *)(extraout_ECX + 0x608);
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_006dbba1;
    iVar2 = *(int *)(extraout_ECX + 0x610);
  }
  (**(code **)(*(int *)(iVar2 + 4) + 0x1c))(0);
LAB_006dbba1:
  if (*(int *)(extraout_ECX + 0x638) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x608) + 4) + 0x1c))(0);
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x610) + 4) + 0x1c))(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


