/* FUN_0083c608 - 0x0083c608 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083c608(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x2ca0) == 0) {
    iVar1 = FUN_004029b9(100);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006f9d13();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0083d3a9(uVar2);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_0083c304(1,uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


