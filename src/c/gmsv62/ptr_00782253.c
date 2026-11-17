/* ptr_00782253 - 0x00782253 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00782253(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x604) + 4) + 0x1c))(0);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x60c) + 4) + 0x1c))(0);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x614) + 4) + 0x1c))(0);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x61c) + 4) + 0x1c))(0);
  if (*(int *)(extraout_ECX + 0x634) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x10);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,0xff,0xff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963d08);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


