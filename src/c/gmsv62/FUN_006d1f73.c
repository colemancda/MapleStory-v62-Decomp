/* FUN_006d1f73 - 0x006d1f73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006d1f73(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004becbc(0,0);
  if ((iVar1 == 0) || (DAT_0097bd60 != 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_004029b9(0x630);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      FUN_006d1c59(*(undefined4 *)(unaff_EBP + 8));
    }
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


