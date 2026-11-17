/* FUN_0084ea46 - 0x0084ea46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0084ea46(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = DAT_0097bcec;
  if (DAT_0097bcec == 0) {
    uVar2 = extraout_ECX;
    iVar1 = FUN_004029b9(0xb0);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_006a0142(uVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


