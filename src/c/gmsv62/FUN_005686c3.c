/* FUN_005686c3 - 0x005686c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005686c3(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x88);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00565ceb(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0056a627(uVar2);
  iVar1 = FUN_004bc6a2();
  FUN_0056a790();
  if (iVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0xf4) = 0;
    FUN_00568c7a();
    FUN_005697ac(0,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


