/* FUN_007c52d9 - 0x007c52d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c52d9(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_0078bf44(0,0);
  }
  else {
    FUN_0078bf44(0,0);
    iVar1 = FUN_004029b9(0x1c8);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0079518d();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0078bf44(0,uVar2);
    FUN_00613cec(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
    FUN_00616998();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


