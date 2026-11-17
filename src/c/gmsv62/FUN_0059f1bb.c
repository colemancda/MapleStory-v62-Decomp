/* FUN_0059f1bb - 0x0059f1bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059f1bb(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ec73c;
  extraout_ECX[-2] = &PTR_LAB_008ec6f0;
  extraout_ECX[-1] = &PTR_FUN_008ec6ec;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &LAB_008ec6e8;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_005aa733();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x29] = &PTR_FUN_008ec74c;
  FUN_005aa6e2();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x23] = &PTR_FUN_008ec750;
  FUN_005aa553();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x1e] = &PTR_FUN_008ec754;
  FUN_005aa356();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x19] = &PTR_FUN_008ec758;
  FUN_005aa2de();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x14] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xf] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[10] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  iVar1 = extraout_ECX[9];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_0045e7f1(0);
    extraout_ECX[9] = 0;
  }
  piVar2 = (int *)extraout_ECX[7];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065bb2f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


