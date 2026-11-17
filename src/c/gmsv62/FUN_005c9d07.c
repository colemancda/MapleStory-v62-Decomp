/* FUN_005c9d07 - 0x005c9d07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c9d07(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x448) != 0) {
    FUN_004031b7(0xfffffffe,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x448) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x20);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


