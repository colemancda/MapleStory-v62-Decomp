/* FUN_00705bdc - 0x00705bdc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00705bdc(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = DAT_0097bdc4;
  if (DAT_0097bdc4 == 0) {
    uVar2 = extraout_ECX;
    iVar1 = FUN_004029b9(0x640);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_007021de(uVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


