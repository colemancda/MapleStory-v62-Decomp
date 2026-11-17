/* ptr_00608c0f - 0x00608c0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00608c0f(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  FUN_00879bb8();
  iStack_14 = unaff_EBP + -0x10;
  uStack_18 = 0x608c28;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_14 = 0x80004003;
    uStack_18 = 0x608c3c;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_14 = 0xffffff;
  uStack_18 = 0x21d;
  uStack_1c = 0x122;
  uStack_20 = 0;
  uStack_24 = 0;
  piStack_2c = (int *)0x608c59;
  piStack_28 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar2 < 0) {
    piStack_2c = (int *)&DAT_00963cc8;
    FUN_00878e09(iVar2,piVar1);
  }
  piStack_2c = *(int **)(unaff_EBP + 8);
  FUN_0081622a();
  iVar2 = *(int *)(extraout_ECX + 0x84);
  if (iVar2 == 0) {
    piStack_2c = *(int **)(unaff_EBP + -0x10);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int ***)(unaff_EBP + 8) = &piStack_2c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_006038be();
  }
  else if (iVar2 == 1) {
    piStack_2c = *(int **)(unaff_EBP + -0x10);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int ***)(unaff_EBP + 8) = &piStack_2c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_00606e9e();
  }
  else if (iVar2 == 2) {
    piStack_2c = *(int **)(unaff_EBP + -0x10);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int ***)(unaff_EBP + 8) = &piStack_2c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_00605436();
  }
  piStack_2c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


