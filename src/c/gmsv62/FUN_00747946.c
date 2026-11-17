/* FUN_00747946 - 0x00747946 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00747946(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
    if (*(int **)(extraout_ECX + 0xaa8) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xaa8) + 0xc))();
      FUN_0045e5c9();
    }
    if (*(int **)(extraout_ECX + 0xab0) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xab0) + 0xc))();
      FUN_0045e64d();
    }
  }
  else {
    if (*(int *)(extraout_ECX + 0xaa8) == 0) {
      iVar1 = FUN_004029b9(0xb8);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004a0726();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e196(uVar2);
      (**(code **)(**(int **)(extraout_ECX + 0xaa8) + 8))
                (extraout_ECX,0x3f2,0x55,0x208,0x1b8,0xc,extraout_ECX + 0xaf4);
    }
    if (*(int *)(extraout_ECX + 0xab0) == 0) {
      *(undefined4 *)(extraout_ECX + 0xc7c) = 1;
      iVar1 = FUN_004029b9(0xf4);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0049b755();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00495bdd(uVar2);
      (**(code **)(**(int **)(extraout_ECX + 0xab0) + 0x20))
                (extraout_ECX,0x3f3,1,1,0x203,0x50,0x14,extraout_ECX + 0xab4);
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x301);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_0049e176(uVar2,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x300);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_0049e176(uVar2,1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x304);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_0049e176(uVar2,2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      FUN_0049e176(s_To_Alliance_00964d78,3);
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x302);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_0049e176(uVar2,4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x303);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_0049e176(uVar2,5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x2ff);
      uVar2 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 7;
      FUN_0049e176(uVar2,6);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      FUN_0049e5ba(*(undefined4 *)(extraout_ECX + 0xb2c));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


