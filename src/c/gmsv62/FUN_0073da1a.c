/* FUN_0073da1a - 0x0073da1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073da1a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978134;
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == *(int *)(extraout_ECX + 0xc68)) goto LAB_0073dce1;
  *(int *)(extraout_ECX + 0xc68) = iVar2;
  *(int *)(iVar1 + 0x4c) = iVar2;
  if (iVar2 == 1) {
    *(undefined4 *)(extraout_ECX + 0xc64) = 0x18;
    *(undefined4 *)(extraout_ECX + 0xc6c) = 1;
    *(undefined4 *)(extraout_ECX + 0xc74) = 0x201;
    FUN_00747946(0);
    if (*(int **)(extraout_ECX + 0xaa0) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0xc))();
    }
    iVar2 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004abf25();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0048b9e9(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0x20))
              (extraout_ECX,0x3f1,1,4,0x236 - *(int *)(extraout_ECX + 3000),0x201,
               *(int *)(extraout_ECX + 0xc64) + 1,0);
LAB_0073dc84:
    *(int *)(*(int *)(extraout_ECX + 0xaa0) + 0x34) = 0x244 - *(int *)(extraout_ECX + 3000);
    *(undefined4 *)(*(int *)(extraout_ECX + 0xaa0) + 0x68) = 1;
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)(extraout_ECX + 0xc64) = 0x18;
      *(undefined4 *)(extraout_ECX + 0xc6c) = 1;
      *(undefined4 *)(extraout_ECX + 0xc74) = 0x1e6;
      FUN_00747946(1);
      if (*(int **)(extraout_ECX + 0xaa0) != (int *)0x0) {
        (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0xc))();
      }
      iVar2 = FUN_004029b9(0x74);
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004abf25();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0048b9e9(uVar3);
      (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0x20))
                (extraout_ECX,0x3f1,1,4,0x236 - *(int *)(extraout_ECX + 3000),
                 0x1fe - *(int *)(extraout_ECX + 0xc64),*(int *)(extraout_ECX + 0xc64) + 1,0);
      goto LAB_0073dc84;
    }
    if (iVar2 == 3) {
      iVar2 = *(int *)(iVar1 + 0x54);
      if ((iVar2 < 0x1a) || (0x1fb < iVar2)) {
        *(undefined4 *)(extraout_ECX + 0xc64) = 0x46;
      }
      else {
        *(int *)(extraout_ECX + 0xc64) = iVar2;
      }
      iVar2 = *(int *)(extraout_ECX + 0xc64);
      *(int *)(extraout_ECX + 0xc6c) = iVar2 / 0xd;
      if (iVar2 % 0xd == 0) {
        *(int *)(extraout_ECX + 0xc64) = iVar2 + 2;
      }
      *(int *)(extraout_ECX + 0xc74) = 0x1fd - *(int *)(extraout_ECX + 0xc64);
      FUN_00747946(1);
      if (*(int **)(extraout_ECX + 0xaa0) != (int *)0x0) {
        (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0xc))();
      }
      iVar2 = FUN_004029b9(0x74);
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004abf25();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0048b9e9(uVar3);
      (**(code **)(**(int **)(extraout_ECX + 0xaa0) + 0x20))
                (extraout_ECX,0x3f1,1,4,0x236 - *(int *)(extraout_ECX + 3000),
                 0x1fe - *(int *)(extraout_ECX + 0xc64),*(int *)(extraout_ECX + 0xc64) + -2,0);
      *(int *)(*(int *)(extraout_ECX + 0xaa0) + 0x34) = 0x244 - *(int *)(extraout_ECX + 3000);
    }
  }
  FUN_007477d6();
  iVar2 = 0;
  if (DAT_0097be44 != 0) {
    iVar2 = *(int *)(DAT_0097be44 + -4);
  }
  iVar2 = iVar2 - *(int *)(extraout_ECX + 0xc6c);
  FUN_004ad003(iVar2 + 1);
  FUN_004acfe9(iVar2);
  FUN_00744523();
LAB_0073dce1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


