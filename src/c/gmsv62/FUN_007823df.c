/* FUN_007823df - 0x007823df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007823df(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = DAT_0097beec;
  if (DAT_0097beec == 0) {
    uVar2 = extraout_ECX;
    iVar1 = FUN_004029b9(0x5a8);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0077f3d8(uVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


