/* FUN_005c032c - 0x005c032c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005c032c(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 1) {
    iVar1 = FUN_004029b9(0xae0);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar1 != 0) {
      uVar2 = FUN_005f841d();
      goto LAB_005c0418;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_004029b9(0x7f4);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (iVar1 != 0) {
      uVar2 = FUN_005b0d22();
      goto LAB_005c0418;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = FUN_004029b9(0x6b0);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_0068cd5c();
      goto LAB_005c0418;
    }
  }
  else if (iVar1 == 4) {
    iVar1 = FUN_004029b9(0x730);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar1 != 0) {
      uVar2 = FUN_0060c3ab();
      goto LAB_005c0418;
    }
  }
  else if (iVar1 == 5) {
    iVar1 = FUN_004029b9(0x74c);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar1 != 0) {
      uVar2 = FUN_004da6c1();
      goto LAB_005c0418;
    }
  }
  uVar2 = 0;
LAB_005c0418:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


