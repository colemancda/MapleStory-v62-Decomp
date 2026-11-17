/* FUN_0081f0e0 - 0x0081f0e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081f0e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,param_2 + 1,param_3 + 1,param_4 + -2,param_5 + -2,0xffd3dbe4);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  uVar8 = 0xff6a8594;
  iVar7 = 1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,param_2,param_3,unaff_ESI + -1,1,0xff6a8594);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  iVar2 = 1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))(piVar1,param_2,uVar8,1,iVar7,0xff7d98b3);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  uVar8 = 1;
  iVar7 = iVar7 + -1 + param_3;
  iVar3 = param_2;
  iVar4 = (**(code **)(*piVar1 + 0x8c))(piVar1,param_2,iVar7,1,1,0xffbac8d2);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  iVar2 = param_2 + -1 + iVar2;
  iVar4 = (**(code **)(*piVar1 + 0x8c))(piVar1,iVar2,param_3,1,1,0xffbac8d2);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  uVar6 = 0xffeaeff2;
  uVar5 = 1;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(piVar1,iVar7,uVar8,iVar3,1,0xffeaeff2);
  if (iVar7 < 0) {
    FUN_00878e09(iVar7,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,iVar2,uVar6,1,uVar5,0xffeaeff2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  return;
}


